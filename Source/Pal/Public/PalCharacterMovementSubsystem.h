#pragma once
#include "CoreMinimal.h"
#include "PalCharacterMovementTickFunction.h"
#include "PalWorldSubsystem.h"
#include "PalCharacterMovementSubsystem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCharacterMovementSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalCharacterMovementTickFunction MovementTickFunction;
    
public:
    UPalCharacterMovementSubsystem();

};

