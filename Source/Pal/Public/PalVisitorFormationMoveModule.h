#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PalVisitorFormationMoveInitParameter.h"
#include "PalVisitorFormationMoveModule.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalVisitorFormationMoveModule : public UObject {
    GENERATED_BODY()
public:
    UPalVisitorFormationMoveModule();

    UFUNCTION(BlueprintCallable)
    void TickModule(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaderGoalArrived(bool bIsArrived);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FPalVisitorFormationMoveInitParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveLocation() const;
    
};

