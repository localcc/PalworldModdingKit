#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalRandomIncidentSpawnerAreaType.h"
#include "PalIncidentBase.h"
#include "PalRandomIncidentSpawnMonsterData.h"
#include "PalRandomIncidentBase.generated.h"

class APalRandomIncidentNPCSpawner;
class UDataTable;

UCLASS(Blueprintable)
class PAL_API UPalRandomIncidentBase : public UPalIncidentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExitAnyArea, EPalRandomIncidentSpawnerAreaType, AreaType, int32, PlayerId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnterAnyArea, EPalRandomIncidentSpawnerAreaType, AreaType, int32, PlayerId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterAnyArea OnEnterAnyArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitAnyArea OnExitAnyArea;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishWithIncidentSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRandomIncidentSpawnerAreaType PrevEnterArea;
    
public:
    UPalRandomIncidentBase();
    UFUNCTION(BlueprintCallable)
    void SetDisableFlagForNPCSpawner(const FVector& Center, float Radius, const FName& Name, bool isDisable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutbreakTable(const UDataTable* Table);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishWithIncidentSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerId() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    APalRandomIncidentNPCSpawner* GetNPCSpawner();
    
    UFUNCTION(BlueprintCallable)
    void CreateSpawnMonsterDataListFromOutbreakRow(const UDataTable* Table, UPARAM(Ref) TArray<FPalRandomIncidentSpawnMonsterData>& OutMonsterList, UPARAM(Ref) TArray<FName>& Names);
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastOnEnterAreaAndOnExitArea(int32 PlayerId);
    
};

