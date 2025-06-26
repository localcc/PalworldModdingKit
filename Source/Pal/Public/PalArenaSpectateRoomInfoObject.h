#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalArenaSequenceType.h"
#include "PalArenaSpectateRoomInfo.h"
#include "PalArenaSpectateRoomInfoObject.generated.h"

class UPalArenaSequencer;

UCLASS(Blueprintable)
class UPalArenaSpectateRoomInfoObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPalArenaSpectateRoomInfo> InfoList;
    
public:
    UPalArenaSpectateRoomInfoObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnSequencerDelete(UPalArenaSequencer* Sequencer);
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceChanged(UPalArenaSequencer* Sequencer, EPalArenaSequenceType PrevType, EPalArenaSequenceType CurrentType);
    
};

