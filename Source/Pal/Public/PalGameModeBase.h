#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EPalGameModeType.h"
#include "PalGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API APalGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalGameModeType GameModeType;
    
public:
    APalGameModeBase(const FObjectInitializer& ObjectInitializer);

};

