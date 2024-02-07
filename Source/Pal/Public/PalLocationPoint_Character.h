#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalCharacterLocationType.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalLocationPoint.h"
#include "PalLocationPoint_Character.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalLocationPoint_Character : public UPalLocationPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalCharacterLocationType CharacterLocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid TargetBaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
public:
    UPalLocationPoint_Character();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnDestroyedTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadTarget(FPalDeadInfo Info);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalCharacterLocationType GetCharacterLocationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCharacterID() const;
    
};

