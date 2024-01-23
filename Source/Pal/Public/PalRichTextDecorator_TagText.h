#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "PalRichTextDecorator_TagText.generated.h"

class UObject;

UCLASS(Blueprintable)
class PAL_API UPalRichTextDecorator_TagText : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPalRichTextDecorator_TagText();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    FString GetTextStringInternal(const UObject* WorldContextObject, FName ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetTagName();
    
};

