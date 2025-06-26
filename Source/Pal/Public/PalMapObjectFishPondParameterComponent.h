#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalDataTableRowName_FishPondLotteryNameData.h"
#include "PalMapObjectFishPondLotteryTargetData.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectFishPondParameterComponent.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectFishPondParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_FishPondLotteryNameData, FPalMapObjectFishPondLotteryTargetData> LotteryDataMapByLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoreCharacterMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemChestSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> ObtainCharactersUIClass;
    
    UPalMapObjectFishPondParameterComponent(const FObjectInitializer& ObjectInitializer);

};

