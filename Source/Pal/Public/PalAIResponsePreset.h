#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalAIResponseType.h"
#include "PalAIResponsePreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIResponsePreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAIResponseType Discover_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAIResponseType Discover_Greater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAIResponseType Discover_Equal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAIResponseType Discover_Smaller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAIResponseType Damaged_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAIResponseType Damaged_Greater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAIResponseType Damaged_Equal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAIResponseType Damaged_Smaller;
    
    UPalAIResponsePreset();
};

