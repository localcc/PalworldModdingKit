#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ActionDynamicParameter.h"
#include "PalUniqueSkillModule.generated.h"

class AActor;
class APalCharacter;
class UPalAnimInstance;
class UPalCharacterMovementComponent;

UCLASS(Blueprintable)
class PAL_API UPalUniqueSkillModule : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* InternalActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* InternalActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActionDynamicParameter DynamicParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
public:
    UPalUniqueSkillModule();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickModule(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomStream(const FRandomStream& InRandomStream);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicParameter(const FActionDynamicParameter& InDynamicParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetActionTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetActionCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndModule();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginModule();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRandomStream GetRandomStream() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FActionDynamicParameter GetDynamicParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalCharacterMovementComponent* GetActionCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetActionCharacter() const;
    
};

