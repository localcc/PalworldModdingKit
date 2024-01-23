#include "PalQuestBlock_CountBuild.h"

void UPalQuestBlock_CountBuild::OnTimer_CheckMapObject() {
}

void UPalQuestBlock_CountBuild::OnRepMapObjectModel_Client(UPalMapObjectModel* MapObjectModel) {
}

void UPalQuestBlock_CountBuild::OnAddedMapObjectModel_Server(UPalMapObjectModel* MapObjectModel, const FVector& Vector) {
}

UPalQuestBlock_CountBuild::UPalQuestBlock_CountBuild() {
    this->RequireBuildCount = 0;
    this->NowBuildCount = 0;
    this->NowBlueprintCount = 0;
}

