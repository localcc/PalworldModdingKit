#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalTreasureMapPointData.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalTreasureMapWorldSubsystem.generated.h"

class APalTreasureMapInteractivePoint;

UCLASS(Blueprintable)
class PAL_API UPalTreasureMapWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTreasureMapPointDataDelegate, const FGuid&, PointId);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalTreasureMapPointData> TreasureMapPointDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreasureMapInteractivePointZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalTreasureMapInteractivePoint> TreasureMapInteractivePointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPalDataTableRowName_FieldLotteryNameData> LotteryNameMapByRarity;
    
public:
    UPalTreasureMapWorldSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnRemoveBaseCampModel_ServerInternal(const FGuid BaseCampId);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateBaseCampModel_ServerInternal(const FGuid BaseCampId);
    
};

