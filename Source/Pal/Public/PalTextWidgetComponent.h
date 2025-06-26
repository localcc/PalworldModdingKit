#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "PalTextWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalTextWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultText;
    
public:
    UPalTextWidgetComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectTextToWidget(const FText& Text);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetCurrentText() const;
    
};

