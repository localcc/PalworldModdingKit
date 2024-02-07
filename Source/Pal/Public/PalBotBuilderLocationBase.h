#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalBotBuilderLocationBase.generated.h"

UCLASS(Blueprintable)
class APalBotBuilderLocationBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuilderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBuilded;
    
public:
    APalBotBuilderLocationBase(const FObjectInitializer& ObjectInitializer);

};

