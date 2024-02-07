#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectDisplayCharacterModel.generated.h"

class AController;
class UPalIndividualCharacterSlot;
class UPalIndividualCharacterSlotsObserver;
class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectDisplayCharacterModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecoverAmountBySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CharacterSpawnLocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AController> ControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterSlotsObserver* CharacterSlotsObserver;
    
public:
    UPalMapObjectDisplayCharacterModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryMoveToDisplayCage(UPalIndividualCharacterSlot* fromSlot);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateCharacterContainer_ServerInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedPhantomCharacter_ServerInternal(FPalInstanceID IndividualId, const int32 PhantomId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplaySlots(TArray<UPalIndividualCharacterSlot*>& Slots);
    
};

