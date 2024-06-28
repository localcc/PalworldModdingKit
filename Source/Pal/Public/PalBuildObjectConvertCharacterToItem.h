#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectConvertCharacterToItemVisualProcessInfo.h"
#include "PalBuildObjectConvertCharacterToItem.generated.h"

class UPalMapObjectConvertCharacterToItemModel;
class UPalMapObjectConvertCharacterToItemParameterComponent;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectConvertCharacterToItem : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalMapObjectConvertCharacterToItemParameterComponent* ConvertCharacterToItemParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VisualProcessInfos, meta=(AllowPrivateAccess=true))
    TArray<FPalBuildObjectConvertCharacterToItemVisualProcessInfo> VisualProcessInfos;
    
public:
    APalBuildObjectConvertCharacterToItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VisualProcessInfos(const TArray<FPalBuildObjectConvertCharacterToItemVisualProcessInfo> OldVisualProcessInfos);
    
    UFUNCTION(BlueprintCallable)
    void OnProceedConvertProcess_ServerInternal(UPalMapObjectConvertCharacterToItemModel* ConvertCharacterToItemModel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateConvertProcessVisual();
    
};

