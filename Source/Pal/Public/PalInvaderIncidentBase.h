#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalBiomeType.h"
#include "EPalCharacterLocationType.h"
#include "EPalInvaderType.h"
#include "PalIncidentBase.h"
#include "PalIncidentBroadcastParameter.h"
#include "PalInstanceID.h"
#include "PalInvaderSpawnCharacterParameter.h"
#include "Templates/SubclassOf.h"
#include "PalInvaderIncidentBase.generated.h"

class APalAIController;
class UDataTable;
class UPalBaseCampModel;
class UPalIndividualCharacterHandle;
class UPalSquad;

UCLASS(Blueprintable)
class PAL_API UPalInvaderIncidentBase : public UPalIncidentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalInvaderType InvaderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InvaderDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalAIController> MonsterAIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalAIController> EnemyAIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalInvaderSpawnCharacterParameter> InvaderMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalAIController*> MemberController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChosenInvaderDataRowName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GroupGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanExecute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSquad* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, FGuid> LocationMap;
    
public:
    UPalInvaderIncidentBase();
private:
    UFUNCTION(BlueprintCallable)
    void StartInvader();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnMemberCharacters(FVector StartLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    bool SelectInvaders(int32 Grade, EPalBiomeType Biome, TArray<FPalInvaderSpawnCharacterParameter>& OutInvaderMember);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveGroupCharacter(UPalIndividualCharacterHandle* RemoveIndividualHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartInvade();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvaderArrived();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndInvade();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsGroupCharacter(UPalIndividualCharacterHandle* IndividualHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisitorNPCReturnTimeMinutes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetTargetCampModel() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetInvaderStartPoint(FVector& Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInvadeReturnTimeMinutes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChosenInvaderGroupName(FText& OutText) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetCandidateStartLocations(TArray<FVector>& Result);
    
private:
    UFUNCTION(BlueprintCallable)
    void GetBroadcastParameter(FPalIncidentBroadcastParameter& outParameter);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAliveInvaderNum() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndInvadeByTimelimit();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle, EPalCharacterLocationType LocationType);
    
};

