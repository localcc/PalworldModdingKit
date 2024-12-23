#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BillboardComponent.h"
#include "FixedPoint64.h"
#include "PalOptionGraphicsSettings.h"
#include "PalArachnophobiaComponent.generated.h"

class APalCharacter;
class UTexture2D;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalArachnophobiaComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> RandomSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DefaultScale;
    
public:
    UPalArachnophobiaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateArachnophobiaVisible();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void OnInitCharcter(APalCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeGraphicsDelegate(const FPalOptionGraphicsSettings& PrevSettings, const FPalOptionGraphicsSettings& NewSettings);
    
};

