#pragma once
#include "CoreMinimal.h"
#include "ECommonMessagingResult.h"
#include "ConfirmationDialogAction.generated.h"

USTRUCT(BlueprintType)
struct FConfirmationDialogAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonMessagingResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionalDisplayText;
    
    COMMONGAME_API FConfirmationDialogAction();
};

