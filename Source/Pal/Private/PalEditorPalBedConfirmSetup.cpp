#include "PalEditorPalBedConfirmSetup.h"

APalEditorPalBedConfirmSetup::APalEditorPalBedConfirmSetup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxNumInLine = 10;
    this->MaxNumRow = 3;
    this->StartIndex = 0;
    this->bStartWithNight = false;
    this->bSleepOnSideForce = false;
    this->bCreatePlayerMesh = false;
    this->bCollapseIgnoredCharacter = true;
    this->bIgnoreNocturnal = true;
    this->bIgnoreRaidBoss = true;
    this->bIgnoreTowerBoss = true;
    this->DebugAutoBaseCampBuilder = NULL;
    this->NamePlateActorClass = NULL;
    this->VirtualBaseCamp = NULL;
}

void APalEditorPalBedConfirmSetup::SetupForSpawnedMapObject(const FGuid& InstanceId, const FName CharacterID) {
}

void APalEditorPalBedConfirmSetup::OnWorldMapObjectSpawnable() {
}

void APalEditorPalBedConfirmSetup::OnSpawnedCharacterInServer(FPalInstanceID IndividualId) {
}

void APalEditorPalBedConfirmSetup::OnCreatedIndividual(FPalInstanceID IndividualId) {
}



