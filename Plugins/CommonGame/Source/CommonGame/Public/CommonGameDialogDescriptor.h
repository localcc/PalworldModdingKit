#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ConfirmationDialogAction.h"
#include "CommonGameDialogDescriptor.generated.h"

UCLASS(Blueprintable)
class COMMONGAME_API UCommonGameDialogDescriptor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConfirmationDialogAction> ButtonActions;
    
    UCommonGameDialogDescriptor();

};

