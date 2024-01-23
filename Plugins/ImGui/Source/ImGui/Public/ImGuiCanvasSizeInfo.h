#pragma once
#include "CoreMinimal.h"
#include "EImGuiCanvasSizeType.h"
#include "ImGuiCanvasSizeInfo.generated.h"

USTRUCT(BlueprintType)
struct FImGuiCanvasSizeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImGuiCanvasSizeType SizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtendToViewport;
    
    IMGUI_API FImGuiCanvasSizeInfo();
};

