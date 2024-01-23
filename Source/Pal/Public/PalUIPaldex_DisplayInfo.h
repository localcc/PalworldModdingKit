#pragma once
#include "CoreMinimal.h"
#include "EPalUIPaldexPanelDetailType.h"
#include "PalUIPaldex_DisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIPaldex_DisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IndexSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CombinedIndexString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalUIPaldexPanelDetailType detailType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName baseCharacterName;
    
    PAL_API FPalUIPaldex_DisplayInfo();
};

