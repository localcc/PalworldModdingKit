#pragma once
#include "CoreMinimal.h"
#include "PalFoliageIdentifiableInfo.h"
#include "PalNetArchive.h"
#include "PalWorkBase.h"
#include "PalWorkDeforestFoliage.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkDeforestFoliage : public UPalWorkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalFoliageIdentifiableInfo IdentifiableInfo;
    
public:
    UPalWorkDeforestFoliage();

    UFUNCTION(BlueprintCallable)
    static void WriteActionBlackboardDeforest(UPARAM(Ref) FPalNetArchive& BlackboardRef, const FPalFoliageIdentifiableInfo& NewIdentifiableInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ReadActionBlackboardDeforest(const FPalNetArchive& BlackboardRef, FPalFoliageIdentifiableInfo& OutIdentifiableInfo);
    
};

