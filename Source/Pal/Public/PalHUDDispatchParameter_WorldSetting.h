#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_WorldSetting.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_WorldSetting : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNewWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldSaveDirectoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanMultiplay;
    
    UPalHUDDispatchParameter_WorldSetting();
};

