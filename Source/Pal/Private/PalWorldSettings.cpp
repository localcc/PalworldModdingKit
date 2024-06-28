#include "PalWorldSettings.h"

APalWorldSettings::APalWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->DungeonWorldSubsystemClass = NULL;
    this->FieldEnvironmentDataLayerAsset = NULL;
    this->AudioWorldSubsystemClass = NULL;
    this->bIsPalTimerEnabled = true;
    this->OptionWorldSubsystemClass = NULL;
    this->TimeManagerClass = NULL;
    this->InvaderManagerClass = NULL;
    this->IncidentSystemClass = NULL;
    this->FunnelCharacterManagerClass = NULL;
    this->ArenaWorldSubsystemClass = NULL;
    this->bRequestCharacterMake = false;
}


