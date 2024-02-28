#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalImGui.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class PAL_API APalImGui : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalCharacter> WeakCharacterForParameterDisplay;
    
public:
    APalImGui(const FObjectInitializer& ObjectInitializer);

};

