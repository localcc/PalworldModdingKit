#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalInstanceID.h"
#include "PalIndividualCharacterHandle.generated.h"

class APalCharacter;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalIndividualCharacterHandle : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateIndividualActorDelegate, UPalIndividualCharacterHandle*, Handle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateIndividualActorDelegate OnUpdateIndividualActorDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID ID;
    
public:
    UPalIndividualCharacterHandle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* TryGetPhantomActor(int32 PhantomId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterParameter* TryGetIndividualParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* TryGetIndividualActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPhantomIDByActor(APalCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalInstanceID GetIndividualID() const;
    
};

