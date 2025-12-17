#pragma once
#include "CoreMinimal.h"
#include "PalStageAreaInfo.h"
#include "PalStageInstanceId.h"
#include "PalStageRoomInfo.h"
#include "PalWorldSubsystem.h"
#include "PalStageWorldSubsystem.generated.h"

class UDataLayerAsset;
class UPalStageModelBase;
class APalPlayerState;

UCLASS(Blueprintable)
class PAL_API UPalStageWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnPlayerStateMulticastDelegate, APalPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleMulticastDelegate);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegate OnEnteredStageInClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegate OnReturnToFieldFromStageInClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnPlayerStateMulticastDelegate OnSetupLocalPlayerDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalStageInstanceId, UPalStageModelBase*> StageModelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDataLayerAsset*, FPalStageAreaInfo> StageAreaInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalStageRoomInfo> RoomInfos;
    
public:
    UPalStageWorldSubsystem();
};

