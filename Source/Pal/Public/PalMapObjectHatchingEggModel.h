#pragma once
#include "CoreMinimal.h"
#include "PalEggRankInfo.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalWorkProgressWorkableCheckInterface.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectHatchingEggModel.generated.h"

class UPalItemContainer;
class UPalMapObjectHatchingEggModel;
class UPalUserWidgetOverlayUI;
class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectHatchingEggModel : public UPalMapObjectConcreteModelBase, public IPalWorkProgressWorkableCheckInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateHatchTemperatureDelegate, int32, Temperature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateHatchedCharacterDelegate, UPalMapObjectHatchingEggModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateHatchedCharacterDelegate OnUpdateHatchedCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateHatchTemperatureDelegate OnUpdateHatchTemperaturDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HatchedCharacterSaveParameter, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter HatchedCharacterSaveParameter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWorkable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HatchTemperatureDiff, meta=(AllowPrivateAccess=true))
    int32 CurrentPalEggTemperatureDiff;
    
public:
    UPalMapObjectHatchingEggModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateWorkAmountBySec(const float NewWorkAmountBySec);
    
    UFUNCTION(BlueprintCallable)
    void SetTemperatureDiff(int32 TemperatureDiff);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerContentInServer(UPalItemContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HatchTemperatureDiff();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HatchedCharacterSaveParameter();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void ObtainHatchedCharacter_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTemperatureDiff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPalEggRankInfo(FPalEggRankInfo& OutPalEggRankInfo);
    

    // Fix for true pure virtual functions not being implemented
};

