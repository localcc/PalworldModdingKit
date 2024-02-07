#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDLSSSettingOverride.h"
#include "DLSSOverrideSettings.generated.h"

UCLASS(Blueprintable, ProjectUserConfig, Config=Engine)
class DLSS_API UDLSSOverrideSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSSettingOverride EnableDLSSInEditorViewportsOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDLSSIncompatiblePluginsToolsWarnings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages;
    
    UDLSSOverrideSettings();

};

