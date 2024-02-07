#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RootViewportLayoutInfo.h"
#include "GameUIPolicy.generated.h"

class UPrimaryGameLayout;

UCLASS(Abstract, Blueprintable, Within=GameUIManagerSubsystem)
class COMMONGAME_API UGameUIPolicy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPrimaryGameLayout> LayoutClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRootViewportLayoutInfo> RootViewportLayouts;
    
public:
    UGameUIPolicy();

};

