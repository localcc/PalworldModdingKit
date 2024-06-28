#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalArenaEntranceInfo.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalArenaEntrance.generated.h"

class APalPlayerCharacter;

UCLASS(Blueprintable)
class PAL_API APalArenaEntrance : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalArenaEntranceInfo EntranceInfo;
    
public:
    APalArenaEntrance(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenArenaRule();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyEntrance_Multicast(const FPalArenaEntranceInfo& NewEntranceInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntryPlayer(APalPlayerCharacter* PlayerCharacter) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetWarpPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDeadItemDropPoint() const;
    

    // Fix for true pure virtual functions not being implemented
};

