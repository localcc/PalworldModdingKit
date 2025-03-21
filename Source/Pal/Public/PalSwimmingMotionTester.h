#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "PalSwimmingMotionTester.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class APalSwimmingMotionTester : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalCharacter> MotionCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Buoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InWaterRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DisableApply;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter* MotionTestCharacter;
    
public:
    APalSwimmingMotionTester(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ShowDialog(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyBuoyancyParameter();
    
};

