#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalAIDamageReactionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalAIDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsIgnoreDamageRolling;
    
    UPalAIDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void FunctionTest();
    
};

