#pragma once
#include "CoreMinimal.h"
#include "PalEggRankInfo.h"
#include "PalEggSaveInfo.h"
#include "PalFastPalEggRepInfoArray.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalWorkProgressWorkSpeedInterface.h"
#include "PalWorkProgressWorkableCheckInterface.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectHatchingEggModelBase.generated.h"

class UPalBaseCampModulePassiveEffect;
class UPalIndividualCharacterHandle;
class UPalItemContainer;
class UPalMapObjectEnergyModule;
class UPalMapObjectHatchingEggModelBase;
class UPalUserWidgetOverlayUI;
class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectHatchingEggModelBase : public UPalMapObjectConcreteModelBase, public IPalWorkProgressWorkableCheckInterface, public IPalWorkProgressWorkSpeedInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateWorkableDelegate, bool, Workable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdatePalEggArrayDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateHatchedCharacterDelegate, UPalMapObjectHatchingEggModelBase*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePalEggArrayDelegate OnUpdatePalEggArrayDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateHatchedCharacterDelegate OnHatchedCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateWorkableDelegate OnUpdateWorkableDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRepEggInfoArray, meta=(AllowPrivateAccess=true))
    FPalFastPalEggRepInfoArray RepInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWorkable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultConsumeEnergySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultAutoWorkAmountBySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalEggSaveInfo> TmpSaveInfoArray;
    
public:
    UPalMapObjectHatchingEggModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateWorkAmountBySec(const float NewWorkAmountBySec);
    
    UFUNCTION(BlueprintCallable)
    void RequestObtainSingleHatchedCharacter(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestObtainAllHatchedCharacter();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerContentInServer(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnRepEggInfoArray();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBaseCampPassive(UPalBaseCampModulePassiveEffect* PassiveEffectModule);
    
    UFUNCTION(BlueprintCallable)
    void OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle);
    
    UFUNCTION(BlueprintCallable)
    void ObtainHatchedCharacter_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void NotifyHatchComplete_ClientInternal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorkable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkProgress* GetWorkProgress(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPalEggRankInfo(const int32 SlotIndex, FPalEggRankInfo& OutPalEggRankInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemSlotNum() const;
    

    // Fix for true pure virtual functions not being implemented
};

