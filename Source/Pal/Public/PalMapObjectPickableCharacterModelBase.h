#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCharacterStoredParameterId.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPickableCharacterModelBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPickableCharacterModelBase : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalCharacterStoredParameterId StoredParameterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter ForRead_CharacterSaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid LocationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime CreatedAtRealTime;
    
public:
    UPalMapObjectPickableCharacterModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestPickup_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestPickup();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRemovedStoredCharacter_ServerInternal(const FPalCharacterStoredParameterId& RemovedID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalIndividualCharacterSaveParameter GetCharacterSaveParameter() const;
    
};

