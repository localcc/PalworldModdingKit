#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalAIActionCompositeBase.generated.h"

class AController;
class APawn;
class UPalAIActionBase;
class UPalAIActionComponent;
class UPalAIActionCompositeBase;
class UPalActionComponent;
class UPalCharacterParameterComponent;

UCLASS(Blueprintable)
class UPalAIActionCompositeBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalAIActionCompositeBase* Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalAIActionComponent* OwnerComponent;
    
public:
    UPalAIActionCompositeBase();
    UFUNCTION(BlueprintCallable)
    void SetChildActionComposite(UPalAIActionCompositeBase* Composite);
    
    UFUNCTION(BlueprintCallable)
    void SetChildAction(UPalAIActionBase* action, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAIActionComponent* GetOwnerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAIActionCompositeBase* GetChild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalCharacterParameterComponent* GetCharacterParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalActionComponent* GetActionComponent() const;
    
};

