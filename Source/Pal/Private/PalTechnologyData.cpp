#include "PalTechnologyData.h"
#include "Net/UnrealNetwork.h"

UPalTechnologyData::UPalTechnologyData() {
    this->TechnologyPoint = 0;
    this->bossTechnologyPoint = 0;
}

void UPalTechnologyData::RequestUnlockRecipeTechnology(const FName& UnlockTechnologyName) {
}

void UPalTechnologyData::RequestAddTechnologyPointByItem(const FPalItemSlotId& ConsumeSlotId) {
}

void UPalTechnologyData::RemoveNewUnlockedFlag(const FName& technologyName) {
}

void UPalTechnologyData::OnUpdateLocalPlayerLevel(int32 addLevel, int32 nowLevel) {
}

void UPalTechnologyData::OnRep_UnlockedTechnologyNameArray() {
}

void UPalTechnologyData::OnRep_TechnologyPoint() {
}

void UPalTechnologyData::OnRep_BossTechnologyPoint() {
}

bool UPalTechnologyData::IsUnlockRecipeTechnology(const FName& technologyName) const {
    return false;
}

bool UPalTechnologyData::IsUnlockCraftRecipe(const FName& craftRecipeName) const {
    return false;
}

bool UPalTechnologyData::IsUnlockBuildObject(const FName& BuildObjectId) const {
    return false;
}

bool UPalTechnologyData::IsUnlockableRecipeTechnology(const FName& technologyName) const {
    return false;
}

bool UPalTechnologyData::IsNewUnlockedTechnology(const FName& technologyName) {
    return false;
}

bool UPalTechnologyData::IsNewUnlockedBuild_Radial(const FName& BuildName) const {
    return false;
}

bool UPalTechnologyData::IsExistNewUnlockedTechnology() {
    return false;
}

int32 UPalTechnologyData::GetTechnologyPoints() const {
    return 0;
}

FText UPalTechnologyData::GetTechnologyName(const FName& technologyName) const {
    return FText::GetEmpty();
}

FText UPalTechnologyData::GetTechnologyDesc(const FName& technologyName) const {
    return FText::GetEmpty();
}

FPalTechnologyDataTableRowBase UPalTechnologyData::GetTechlonogyBaseData(const FName& technologyName) const {
    return FPalTechnologyDataTableRowBase{};
}

TArray<FName> UPalTechnologyData::GetRecipeTechnologyRowNameArray() const {
    return TArray<FName>();
}

FPalTechnologyRecipeUnlockDataTableRow UPalTechnologyData::GetRecipeTechlonogy(const FName& technologyName) const {
    return FPalTechnologyRecipeUnlockDataTableRow{};
}

int32 UPalTechnologyData::GetBossTechnologyPoints() const {
    return 0;
}

void UPalTechnologyData::FilteringUnlockedRecipe(const TArray<FName>& OriginalResipeIdArray, TArray<FName>& OutRecipeIdArray) {
}

void UPalTechnologyData::CheckNewUnlockedFlag_Radial(const FName& BuildName) {
}

void UPalTechnologyData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalTechnologyData, UnlockedTechnologyNameArray);
    DOREPLIFETIME(UPalTechnologyData, OwnerPlayerUId);
    DOREPLIFETIME(UPalTechnologyData, TechnologyPoint);
    DOREPLIFETIME(UPalTechnologyData, bossTechnologyPoint);
}


