#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalItemPermission.generated.h"

USTRUCT(BlueprintType)
struct FPalItemPermission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeA> PermissionTypeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> PermissionTypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PermissionItemStaticIds;
    
    PAL_API FPalItemPermission();
};

