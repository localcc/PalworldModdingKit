#include "PalRandomIncidentNPCSpawner.h"

APalRandomIncidentNPCSpawner::APalRandomIncidentNPCSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}



void APalRandomIncidentNPCSpawner::RequestCreateGroups(const TArray<FPalRandomIncidentGroupRequestParameter>& RequestParams) {
}



UPalIndividualCharacterHandle* APalRandomIncidentNPCSpawner::FindIndividualCharacterHandleByName(const TMap<UPalIndividualCharacterHandle*, FName>& RowNames, const FName& Name) {
    return NULL;
}



void APalRandomIncidentNPCSpawner::AddGroupCharacterByGroupNo(UPalIndividualCharacterHandle* AddIndividualHandle, int32 GroupNo) {
}


