#include "DLSSOverrideSettings.h"

UDLSSOverrideSettings::UDLSSOverrideSettings() {
    this->EnableDLSSInEditorViewportsOverride = EDLSSSettingOverride::UseProjectSettings;
    this->EnableDLSSInPlayInEditorViewportsOverride = EDLSSSettingOverride::UseProjectSettings;
    this->bShowDLSSIncompatiblePluginsToolsWarnings = true;
    this->ShowDLSSSDebugOnScreenMessages = EDLSSSettingOverride::UseProjectSettings;
}


