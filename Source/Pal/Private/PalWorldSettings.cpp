#include "PalWorldSettings.h"

APalWorldSettings::APalWorldSettings() {
    this->DungeonWorldSubsystemClass = NULL;
    this->FieldEnvironmentDataLayerAsset = NULL;
    this->AudioWorldSubsystemClass = NULL;
    this->bIsPalTimerEnabled = true;
    this->OptionWorldSubsystemClass = NULL;
    this->TimeManagerClass = NULL;
    this->InvaderManagerClass = NULL;
    this->IncidentSystemClass = NULL;
    this->FunnelCharacterManagerClass = NULL;
    this->bRequestCharacterMake = false;
}

