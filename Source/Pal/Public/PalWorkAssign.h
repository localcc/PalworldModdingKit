#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalWorkWorkerState.h"
#include "EPalWorkWorkerWorkingState.h"
#include "PalInstanceID.h"
#include "PalWorkAssignHandleId.h"
#include "PalWorkAssign.generated.h"

class UPalCharacterParameterComponent;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalWorkAssign : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalWorkAssignHandleId HandleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID AssignedIndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkWorkerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bFixed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkWorkerWorkingState WorkingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LocalRandomWorkLocation;
    
public:
    UPalWorkAssign();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorkable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFixed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssignedIndividualId(const FPalInstanceID& IndividualId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWorkWorkerWorkingState GetWorkingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetWorkId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkBase* GetWork() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWorkWorkerState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocationIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalWorkAssignHandleId GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterParameter* GetAssignedIndividualParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalInstanceID GetAssignedIndividualId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* GetAssignedIndividualHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalCharacterParameterComponent* GetAssignedCharacterParameterComponent() const;
    
};

