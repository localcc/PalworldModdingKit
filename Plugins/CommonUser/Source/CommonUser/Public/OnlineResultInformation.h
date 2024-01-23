#pragma once
#include "CoreMinimal.h"
#include "OnlineResultInformation.generated.h"

USTRUCT(BlueprintType)
struct FOnlineResultInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorText;
    
    COMMONUSER_API FOnlineResultInformation();
};

