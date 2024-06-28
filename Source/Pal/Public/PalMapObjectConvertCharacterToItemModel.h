#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectConvertCharacterToItemProcessItem.h"
#include "PalMapObjectConvertCharacterToItemModel.generated.h"

class UPalIndividualCharacterSlotsObserver;
class UPalMapObjectConvertCharacterToItemModel;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectConvertCharacterToItemModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectConvertCharacterToItemModel*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnProceedConvertProcessDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterSlotsObserver* CharacterSlotsObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectConvertCharacterToItemProcessItem> ConvertProcessArray;
    
public:
    UPalMapObjectConvertCharacterToItemModel();

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateCharacterContainer_ServerInternal();
    
};

