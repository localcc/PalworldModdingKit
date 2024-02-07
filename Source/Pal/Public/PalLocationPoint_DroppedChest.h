#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLocationPointStatic.h"
#include "PalLocationPoint_DroppedChest.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalLocationPoint_DroppedChest : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerPlayerUId;
    
public:
    UPalLocationPoint_DroppedChest();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetOwnerPlayerUId() const;
    
};

