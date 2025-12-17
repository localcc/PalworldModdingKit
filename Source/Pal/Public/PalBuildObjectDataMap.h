#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalBuildObjectTypeA.h"
#include "EPalBuildObjectTypeB.h"
#include "EPalBuildObjectTypeForUIDisplay.h"
#include "PalBuildObjectData.h"
#include "PalBuildObjectDataSetTypeB.h"
#include "PalBuildObjectDataSetTypeUIDisplay.h"
#include "PalBuildObjectIdSet.h"
#include "PalBuildObjectDataMap.generated.h"

UCLASS(Blueprintable)
class UPalBuildObjectDataMap : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalBuildObjectData> BuildObjectDataIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> BlueprintItemIdToBuildObjectIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalBuildObjectTypeA, FPalBuildObjectIdSet> BuildObjectDataIdMapTypeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalBuildObjectTypeB, FPalBuildObjectIdSet> BuildObjectDataIdMapTypeB;
    
public:
    UPalBuildObjectDataMap();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlueprintItem(const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBuildObjectData GetByMapObjectId(const FName MapObjectId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBuildObjectData GetById(const FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBuildObjectData GetByBlueprintItemId(const FName& StatiItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBuildObjectIdByBlueprintItemId(const FName& StatiItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuildObjectDataMapForType(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectData>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuildObjectDataArrayForUIDisplay(const EPalBuildObjectTypeA TypeA, TMap<EPalBuildObjectTypeForUIDisplay, FPalBuildObjectDataSetTypeUIDisplay>& OutMap) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuildObjectDataArrayForTypeAByTypeB(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectDataSetTypeB>& OutArray) const;
    
};

