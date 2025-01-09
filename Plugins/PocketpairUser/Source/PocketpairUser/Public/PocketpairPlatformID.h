#pragma once
#include "CoreMinimal.h"
#include "PocketpairPlatformID.generated.h"

USTRUCT(BlueprintType)
struct POCKETPAIRUSER_API FPocketpairPlatformID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AccountID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AccountInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Universe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccountType;
    
    FPocketpairPlatformID();
};

