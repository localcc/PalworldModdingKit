#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BuildingSurfaceMaterialSet.h"
#include "PalMapObjectManager.h"
#include "PalBuildOperator.generated.h"

class APalBuildObject;
class UPalBuildObjectDataMap;

UCLASS(Blueprintable)
class UPalBuildOperator : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectModelDynamicDelegate, UPalMapObjectModel*, MapObjectModel);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelDynamicDelegate OnCompleteBuildInServerDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBuildingSurfaceMaterialSet BuildingSurfaceMaterialSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBuildObjectDataMap* DataMap;
    
public:
    UPalBuildOperator();

};

