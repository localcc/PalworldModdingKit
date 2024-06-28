#include "PalUIUtility.h"

UPalUIUtility::UPalUIUtility() {
}

void UPalUIUtility::SetVisibilityHUD(const UObject* WorldContextObject, bool IsVisible) {
}

void UPalUIUtility::SetNumberToSeparatedTextBlock(const UObject* WorldContextObject, const TArray<int32>& numberArray, TArray<UPalTextBlockBase*>& textBlockArray, float topZeroTextOpacity) {
}

void UPalUIUtility::SetEnableCommonUIInput(const UObject* WorldContextObject, const FName flagName, bool IsEnable) {
}

void UPalUIUtility::SetCustomSlateNavigation(const UObject* WorldContextObject, const FPalSlateNavigationSetting& NavigationSetting) {
}

void UPalUIUtility::ResetSlateNavigation(const UObject* WorldContextObject) {
}

bool UPalUIUtility::IsToggleInteract(const UObject* WorldContextObject) {
    return false;
}

bool UPalUIUtility::IsShiftDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsRightShiftDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsRightControlDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsRightAltDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsLeftShiftDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsLeftControlDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsLeftAltDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsControlDown_ForUI() {
    return false;
}

bool UPalUIUtility::IsAltDown_ForUI() {
    return false;
}

void UPalUIUtility::GetWorkSuitabilityNameWithMaterialSubType(const UObject* WorldContextObject, const EPalWorkSuitability WorkSuitability, const EPalMapObjectMaterialSubType MaterialSubType, FText& outName) {
}

void UPalUIUtility::GetWorkSuitabilityName(const UObject* WorldContextObject, const EPalWorkSuitability WorkSuitability, FText& outName) {
}

void UPalUIUtility::GetWorkSickName(const UObject* WorldContextObject, const EPalBaseCampWorkerSickType SickType, FText& outName) {
}

bool UPalUIUtility::GetWorkNameFromHandle(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, FText& outName) {
    return false;
}

void UPalUIUtility::GetWorkName(const UObject* WorldContextObject, const EPalWorkType WorkType, FText& outName) {
}

bool UPalUIUtility::GetWorkingDetailNameFromHandle(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, FText& outName) {
    return false;
}

void UPalUIUtility::GetWorkingDetailName(const UObject* WorldContextObject, const EPalWorkType WorkType, FText& outName) {
}

void UPalUIUtility::GetWorkerComment(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, FText& outName) {
}

void UPalUIUtility::GetWazaName(const UObject* WorldContextObject, EPalWazaID WazaID, FText& outName) {
}

void UPalUIUtility::GetWazaDesc(const UObject* WorldContextObject, EPalWazaID WazaID, FText& outDesc) {
}

void UPalUIUtility::GetWaitForWorkableDetailName(const UObject* WorldContextObject, const EPalWorkType WorkType, FText& outName) {
}

bool UPalUIUtility::GetUIInputActionRowHandle(const UObject* WorldContextObject, const FName& ActionName, FDataTableRowHandle& outHandle) {
    return false;
}

void UPalUIUtility::GetUIDisplayPalCondition(const UObject* WorldContextObject, TArray<EPalUIConditionType>& OutArray, UPalIndividualCharacterHandle* targetHandle) {
}

void UPalUIUtility::GetTechnologyDescription(const UObject* WorldContextObject, const FName& technologyName, FText& OutDescription) {
}

int32 UPalUIUtility::GetPlayerInframeRenderTargetResolution() {
    return 0;
}

void UPalUIUtility::GetPassiveSkillName(const UObject* WorldContextObject, const FName& PassiveSkillId, FText& outName) {
}

void UPalUIUtility::GetPartnerSkillName(const UObject* WorldContextObject, const FName& CharacterID, FText& OutText) {
}

void UPalUIUtility::GetPalShortDescription(const UObject* WorldContextObject, const FName& CharacterID, FText& outName) {
}

bool UPalUIUtility::GetPalRestrictItemID(const UObject* WorldContextObject, const FName& CharacterID, FName& ItemId) {
    return false;
}

void UPalUIUtility::GetPalLongDescription(const UObject* WorldContextObject, const FName& CharacterID, FText& outName) {
}

void UPalUIUtility::GetPalGenusCategoryName(const UObject* WorldContextObject, EPalGenusCategoryType GenusCategory, FText& outName) {
}

void UPalUIUtility::GetPalFirstActivatedInfo(const UObject* WorldContextObject, const FName& CharacterID, FText& outName) {
}

void UPalUIUtility::GetPalElementTypeName(const UObject* WorldContextObject, EPalElementType ElementType, FText& outName) {
}

int32 UPalUIUtility::GetPalConditionUrgency(const UObject* WorldContextObject, EPalUIConditionType Condition) {
    return 0;
}

void UPalUIUtility::GetPalConditionName(const UObject* WorldContextObject, const EPalUIConditionType ConditionType, FText& outName) {
}

void UPalUIUtility::GetPalConditionDesc(const UObject* WorldContextObject, const EPalUIConditionType ConditionType, FText& outDesc) {
}

FSlateBrush UPalUIUtility::GetMappedKeyIcon(const UObject* WorldContextObject, const FName InputActionName, ECommonInputType InputType, EPalKeyConfigAxisFilterType FilterType) {
    return FSlateBrush{};
}

void UPalUIUtility::GetMapObjectOperationResultText(const UObject* WorldContextObject, const EPalMapObjectOperationResult operationType, FText& outName) {
}

FName UPalUIUtility::GetMapObjectNameTextId(const UObject* WorldContextObject, const FName& MapObjectName) {
    return NAME_None;
}

void UPalUIUtility::GetMapObjectName(const UObject* WorldContextObject, const FName& MapObjectName, FText& outName) {
}

FSlateBrush UPalUIUtility::GetKeyIconByKey(const UObject* WorldContextObject, const FKey Key, ECommonInputType InputType) {
    return FSlateBrush{};
}

void UPalUIUtility::GetItemTypeAName(const UObject* WorldContextObject, const EPalItemTypeA ItemTypeA, FText& outName) {
}

void UPalUIUtility::GetItemName(const UObject* WorldContextObject, const FName& StaticItemId, FText& outName) {
}

void UPalUIUtility::GetItemDescription(const UObject* WorldContextObject, const FName& StaticItemId, FText& outName) {
}

void UPalUIUtility::GetInventoryCategoryName(const UObject* WorldContextObject, EPalPlayerInventoryType inventoryType, FText& outName) {
}

void UPalUIUtility::GetFormatedFirstActivatedInfoText(const UObject* WorldContextObject, APalCharacter* Character, FText& outFormatedText) {
}

void UPalUIUtility::GetBuildObjectDesc(const UObject* WorldContextObject, const FName& buildObjectName, FText& outDesc) {
}

void UPalUIUtility::GetBuildObjectCategoryBName(const UObject* WorldContextObject, const EPalBuildObjectTypeB TypeB, FText& outName) {
}

void UPalUIUtility::GetBuildObjectCategoryAName(const UObject* WorldContextObject, const EPalBuildObjectTypeA TypeA, FText& outName) {
}

void UPalUIUtility::GetBaseCampEventName(const UObject* WorldContextObject, const EPalBaseCampWorkerEventType EventType, FText& outName) {
}

void UPalUIUtility::GetAllTagFromText(const UObject* WorldContextObject, const FText& targetText, TArray<FString>& outTagArray) {
}

void UPalUIUtility::GetAdditionalEffectName(const UObject* WorldContextObject, EPalAdditionalEffectType EffectType, FText& outName) {
}

UPalUserWidget* UPalUIUtility::FindOwningActivatableWidget(const UObject* WorldContextObject, const UWidget* Widget) {
    return NULL;
}

float UPalUIUtility::ConvertReviveTimerToUIDisplayRemainReviveTime(const UObject* WorldContextObject, float ReviveTimer) {
    return 0.0f;
}


