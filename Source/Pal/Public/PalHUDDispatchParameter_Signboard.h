#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameter_MapObject.h"
#include "PalHUDDispatchParameter_Signboard.generated.h"

// todo: probably has params
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateTextDelegate);

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_Signboard : public UPalHUDDispatchParameter_MapObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutText;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateTextDelegate OnUpdateTextDelegate;
    
    UPalHUDDispatchParameter_Signboard();
};

