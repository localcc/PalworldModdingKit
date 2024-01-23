#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalActionBase.h"
#include "PalNetArchive.h"
#include "PalStaticItemIdAndNum.h"
#include "PalActionSpawnItem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalActionSpawnItem : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpawnItemRotator;
    
public:
    UPalActionSpawnItem();
    UFUNCTION(BlueprintCallable)
    static void WriteBlackboard(UPARAM(Ref) FPalNetArchive& BlackboardRef, const FPalStaticItemIdAndNum& ItemInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnItemInServer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadBlackboard(FPalStaticItemIdAndNum& ItemInfo) const;
    
};

