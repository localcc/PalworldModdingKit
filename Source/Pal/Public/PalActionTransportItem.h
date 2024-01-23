#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalNetArchive.h"
#include "PalActionTransportItem.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalActionTransportItem : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ItemActor;
    
public:
    UPalActionTransportItem();
    UFUNCTION(BlueprintCallable)
    static void WriteBlackboard(UPARAM(Ref) FPalNetArchive& BlackboardRef, const FName StaticItemId);
    
    UFUNCTION(BlueprintCallable)
    void StartSetupItemActor(const FName StaticItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadBlackboard(FName& StaticItemId) const;
    
};

