#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "EImGuiDPIScaleMethod.h"
#include "ImGuiDPIScaleInfo.generated.h"

USTRUCT(BlueprintType)
struct FImGuiDPIScaleInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImGuiDPIScaleMethod ScalingMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DPICurve;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleWithCurve;
    
public:
    IMGUI_API FImGuiDPIScaleInfo();
};

