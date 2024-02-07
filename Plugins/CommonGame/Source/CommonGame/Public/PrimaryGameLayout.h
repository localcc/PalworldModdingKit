#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "PrimaryGameLayout.generated.h"

class UCommonActivatableWidgetContainerBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONGAME_API UPrimaryGameLayout : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UCommonActivatableWidgetContainerBase*> Layers;
    
public:
    UPrimaryGameLayout();

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterLayer(FGameplayTag LayerTag, UCommonActivatableWidgetContainerBase* LayerWidget);
    
};

