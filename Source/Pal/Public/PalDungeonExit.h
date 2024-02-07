#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalDungeonExit.generated.h"

UCLASS(Blueprintable)
class PAL_API APalDungeonExit : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartPoint;
    
public:
    APalDungeonExit(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResponseDialogExitDungeon(const bool bResponse);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetWarpPoint() const;
    

    // Fix for true pure virtual functions not being implemented
};

