#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "FastPalIndividualCharacterHandleIdArray.h"
#include "PalGroupBase.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Abstract, Blueprintable)
class UPalGroupBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIndividualHandleDelegate, UPalIndividualCharacterHandle*, IndividualHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangedGroupNameDelegate, const FString&, NewGroupName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedGroupNameDelegate OnChangedGroupName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndividualHandleDelegate OnEnterCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndividualHandleDelegate OnExitCharacterDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GroupName, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FFastPalIndividualCharacterHandleIdArray IndividualCharacterHandleIds;
    
public:
    UPalGroupBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateIndividualActor(UPalIndividualCharacterHandle* CharacterHandle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GroupName();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGroupName() const;
    
};

