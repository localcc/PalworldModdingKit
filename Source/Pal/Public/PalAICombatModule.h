#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PalAICombatModule.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalAICombatModule : public UObject {
    GENERATED_BODY()
public:
    UPalAICombatModule();
    UFUNCTION(BlueprintCallable)
    void UpdateBattleState();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleFinish();
    
    UFUNCTION(BlueprintCallable)
    bool IsReachable_NavMesh_ForActor(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    bool IsReachable_NavMesh(FVector TargetPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMode();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTargetActor();
    
    UFUNCTION(BlueprintCallable)
    bool AIMoveToTargetActor(AActor* Target);
    
};

