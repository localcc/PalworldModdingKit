#pragma once
#include "CoreMinimal.h"
#include "RootViewportLayoutInfo.generated.h"

class ULocalPlayer;
class UPrimaryGameLayout;

USTRUCT(BlueprintType)
struct FRootViewportLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalPlayer* LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimaryGameLayout* RootLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAddedToViewport;
    
    COMMONGAME_API FRootViewportLayoutInfo();
};

