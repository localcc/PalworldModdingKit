#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUniqueSkillModule.generated.h"

class AActor;
class APalCharacter;

UCLASS(Blueprintable)
class PAL_API UPalUniqueSkillModule : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* ActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActionTarget;
    
public:
    UPalUniqueSkillModule();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickModule(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetActionTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetActionCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndModule();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginModule();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetActionCharacter() const;
    
};

