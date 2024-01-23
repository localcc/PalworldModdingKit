#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalFunnelCharacterManagementInfo.h"
#include "PalInstanceID.h"
#include "PalWorldSubsystem.h"
#include "PalFunnelCharacterManager.generated.h"

class AActor;
class APalCharacter;
class APalFunnelCharacter;

UCLASS(Blueprintable)
class PAL_API UPalFunnelCharacterManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalFunnelCharacterManagementInfo> ManagedCharacterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalInstanceID> PickupTarget;
    
public:
    UPalFunnelCharacterManager();
private:
    UFUNCTION(BlueprintCallable)
    void SpawnActorCallback(const FGuid& Guid, AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFunnelCharacterActive(APalFunnelCharacter* FunnelCharacter, bool IsActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeForServer_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize_BP();
    
    UFUNCTION(BlueprintCallable)
    APalCharacter* GetOwnerCharacter(const APalFunnelCharacter* FunnelCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexOfFunnelsWithinSameTrainer(APalFunnelCharacter* FunnelCharacter) const;
    
};

