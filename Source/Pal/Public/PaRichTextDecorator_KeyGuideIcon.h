#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "PaRichTextDecorator_KeyGuideIcon.generated.h"

class UObject;
class UWidget;

UCLASS(Blueprintable)
class PAL_API UPaRichTextDecorator_KeyGuideIcon : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPaRichTextDecorator_KeyGuideIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    FString GetTextStringInternal(const UObject* WorldContextObject, FName ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* CreateWidget(FName KeyGuideActionName, float IconScale, int32 OverrideType);
    
};

