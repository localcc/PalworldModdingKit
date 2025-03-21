#pragma once
#include "CoreMinimal.h"
#include "PalFishingCatchBattleParameter.h"
#include "PalWorldSubsystem.h"
#include "PalFishingSystem.generated.h"

class APalFishingSpotArea;
class UPalFishingCatchBattle;

UCLASS(Blueprintable)
class PAL_API UPalFishingSystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFishingCatchBattleParameter CatchBattleParameter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalFishingCatchBattle* CatchBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalFishingSpotArea*> FishingSpotArray;
    
public:
    UPalFishingSystem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeForServer_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentFishDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalFishingCatchBattle* GetCatchBattle() const;
    
};

