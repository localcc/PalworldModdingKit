#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalBuildObjectTypeA.h"
#include "PalBuildObjectData.h"
#include "PalBuildObjectDataSetTypeB.h"
#include "PalBuildObjectDataMap.generated.h"

UCLASS(Blueprintable)
class UPalBuildObjectDataMap : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalBuildObjectData> BuildObjectDataIdMap;
    
public:
    UPalBuildObjectDataMap();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBuildObjectData GetByMapObjectId(const FName MapObjectId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBuildObjectData GetById(const FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuildObjectDataMapForType(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectData>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuildObjectDataArrayForTypeAByTypeB(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectDataSetTypeB>& OutArray) const;
    
};

