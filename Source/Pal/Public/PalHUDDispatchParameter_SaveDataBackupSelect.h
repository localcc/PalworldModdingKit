#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_SaveDataBackupSelect.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_SaveDataBackupSelect : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldDirectoryName;
    
    UPalHUDDispatchParameter_SaveDataBackupSelect();

};

