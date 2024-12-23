#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "PalAnimNotify_WorkActionAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PAL_API UPalAnimNotify_WorkActionAttack : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
public:
    UPalAnimNotify_WorkActionAttack();

};

