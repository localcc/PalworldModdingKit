#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalPlayerInputButtonType.h"
#include "PalPlayerInputOneFlameCommand.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalPlayerInputOneFlameCommand : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPlayerInputButtonType CurrentState;
    
public:
    UPalPlayerInputOneFlameCommand();

private:
    UFUNCTION(BlueprintCallable)
    void OnRelease();
    
    UFUNCTION(BlueprintCallable)
    void OnPress();
    
};

