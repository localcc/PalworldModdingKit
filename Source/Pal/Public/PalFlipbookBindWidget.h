#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PalFlipbookBindWidget.generated.h"

class UImage;
class UPaperFlipbook;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PAL_API UPalFlipbookBindWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperFlipbook* SourceFlipbook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TargetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CurrentTexture;
    
public:
    UPalFlipbookBindWidget();

    UFUNCTION(BlueprintCallable)
    void SeuPause(bool bNewPauseFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float NewPlayRate);
    
};

