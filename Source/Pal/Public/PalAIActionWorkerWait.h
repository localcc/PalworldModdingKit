#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "PalAIActionWorkerChildBase.h"
#include "PalBaseCampWorkerWalkAroundDynamicInfo.h"
#include "PalBaseCampWorkerWalkAroundSettings.h"
#include "PalAIActionWorkerWait.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionWorkerWait : public UPalAIActionWorkerChildBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalBaseCampWorkerWalkAroundSettings WalkAroundSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBaseCampWorkerWalkAroundDynamicInfo WalkAroundDynamicInfo;
    
public:
    UPalAIActionWorkerWait();

protected:
    UFUNCTION(BlueprintCallable)
    void TickForWalkAround(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnToDefaultPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTickForWait(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToLocationInBaseCamp(const FVector& ToLocation, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToLocation(const FVector& ToLocation);
    
    UFUNCTION(BlueprintCallable)
    bool CalcWalkAroundDestination(const float Radius, FVector& OutDestination);
    
};

