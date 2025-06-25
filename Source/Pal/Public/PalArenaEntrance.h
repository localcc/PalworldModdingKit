#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalArenaEntranceInfo.h"
#include "PalArenaSpectateRoomInfo.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalArenaEntrance.generated.h"

class APalPlayerCharacter;
class UPalArenaSpectateRoomInfoObject;

UCLASS(Blueprintable)
class PAL_API APalArenaEntrance : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EntranceInfo, meta=(AllowPrivateAccess=true))
    FPalArenaEntranceInfo EntranceInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UPalArenaSpectateRoomInfoObject* SpectateRoomInfoObject;
    
public:
    APalArenaEntrance(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RequestEnterSpectate(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RequestEnterPvP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenArenaGuide();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EntranceInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntryPlayer(APalPlayerCharacter* PlayerCharacter) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetWarpPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalArenaSpectateRoomInfo> GetSpectateInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetItemDropPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalArenaEntranceInfo GetEntranceInfo() const;
    

    // Fix for true pure virtual functions not being implemented
};

