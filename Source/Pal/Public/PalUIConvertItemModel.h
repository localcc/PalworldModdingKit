#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalUIConvertItemRequestStartResponse.h"
#include "PalUIConvertItemModel.generated.h"

class UPalMapObjectConvertItemModel;
class UPalUIProductSettingModel;

UCLASS(Blueprintable)
class UPalUIConvertItemModel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIProductSettingModel* ProductSettingModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectConvertItemModel> WeakConvertItemModel;
    
public:
    UPalUIConvertItemModel();

    UFUNCTION(BlueprintCallable)
    void UpdateProductSetting_TransportToStorage(const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void UpdateProductSetting();
    
    UFUNCTION(BlueprintCallable)
    bool TryGetConcreteModel(UPalMapObjectConvertItemModel*& Model);
    
    UFUNCTION(BlueprintCallable)
    void StartProduction();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UPalMapObjectConvertItemModel* InModel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBuildObjectName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalUIConvertItemRequestStartResponse CanStartProduction() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelProduct();
    
};

