#include "PalSwimmingMotionTester.h"

APalSwimmingMotionTester::APalSwimmingMotionTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bIsEditorOnlyActor = true;
    this->MotionCharacterClass = NULL;
    this->Buoyancy = -1.00f;
    this->InWaterRate = -1.00f;
    this->DisableApply = false;
    this->MotionTestCharacter = NULL;
}

void APalSwimmingMotionTester::ShowDialog(const FString& Message) {
}



