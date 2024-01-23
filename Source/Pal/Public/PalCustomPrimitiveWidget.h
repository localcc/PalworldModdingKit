#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PalUMGCustomVertexData.h"
#include "PalUserWidget.h"
#include "PalCustomPrimitiveWidget.generated.h"

class USlateBrushAsset;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalCustomPrimitiveWidget : public UPalUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* SlateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalUMGCustomVertexData> VertexData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> vertexIndexes;
    
public:
    UPalCustomPrimitiveWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateVertexData(int32 Index, const FPalUMGCustomVertexData& inVertexData);
    
    UFUNCTION(BlueprintCallable)
    void PushVertexData(const FPalUMGCustomVertexData& inVertexData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DrawVertexData(UPARAM(Ref) FPaintContext& Context) const;
    
};

