#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalRadarChartDrawType.h"
#include "PalCustomPrimitiveWidget.h"
#include "PalRadarChartWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalRadarChartWidgetBase : public UPalCustomPrimitiveWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRadarChartDrawType drawType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 parameterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isMinMaxValuePerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> parameterValueMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> parameterValueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor fillColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor maxValuefillColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor BorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float borderSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCheckParameterMaxValue;
    
public:
    UPalRadarChartWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetParameterValue(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMinValue(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxValue(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void BuildVertexData();
    
};

