#include "PalEditorDungeonAutoEnter.h"

APalEditorDungeonAutoEnter::APalEditorDungeonAutoEnter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetDataLayer = NULL;
    this->WaitSecondsBeforeEnterRequest = 2.00f;
}

void APalEditorDungeonAutoEnter::OnCompleteLoadInitWorldPartition() {
}


