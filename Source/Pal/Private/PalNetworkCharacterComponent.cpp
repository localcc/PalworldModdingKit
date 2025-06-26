#include "PalNetworkCharacterComponent.h"
#include "Templates/SubclassOf.h"

UPalNetworkCharacterComponent::UPalNetworkCharacterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkCharacterComponent::RequestReflectAction_ToServer_Implementation(APalCharacter* Character) {
}

void UPalNetworkCharacterComponent::RequestRecordCountReward_ToServer_Implementation(const UObject* WorldContextObject, const FGuid PlayerUId, const FName& RequestRecordCountId) {
}

void UPalNetworkCharacterComponent::RequestPalDisplayReward_ToServer_Implementation(const UObject* WorldContextObject, const FGuid PlayerUId, const FName& RequestDisplayDataId) {
}

void UPalNetworkCharacterComponent::RequestNPCEmoteReward_ToServer_Implementation(const UObject* WorldContextObject, const FGuid PlayerUId, const FName FieldName, const FGuid& SaveId) {
}

void UPalNetworkCharacterComponent::RequestInvokeNetworkNPCTalkEvent_Implementation(const FPalNetworkNPCTalkRequestData& NPCTalkRequestData) {
}

void UPalNetworkCharacterComponent::RequestDoctorSurgi_ToServer_Implementation(UPalIndividualCharacterParameter* TargetPal, bool IsSuccess) {
}

void UPalNetworkCharacterComponent::RequestCircumNpcItemTrade_ToServer_Implementation(const UObject* WorldContextObject, const FGuid PlayerUId, const FName& RequestTradeDataId) {
}

void UPalNetworkCharacterComponent::RequestApplyPalLoadoutData_ToServer_Implementation(const FGuid PlayerUId, const TArray<FPalInstanceID>& LoadoutPalIds) {
}

void UPalNetworkCharacterComponent::ReflectAction_ToClient_Implementation(APalCharacter* Character, FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass) {
}

void UPalNetworkCharacterComponent::NotifyTalkStart_ToServer_Implementation(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC) {
}

void UPalNetworkCharacterComponent::NotifyTalkEnd_ToServer_Implementation(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC) {
}

void UPalNetworkCharacterComponent::NotifySurgiResult_ToClient_Implementation(UPalIndividualCharacterParameter* TargetPal, FName GetPassive, FName LostPassive, int32 TalentValue, bool IsPositive) {
}

void UPalNetworkCharacterComponent::NotifyPalLoadoutApplyResult_ToClient_Implementation(const EPalPalLoadoutApplyResult Result) {
}

void UPalNetworkCharacterComponent::NotifyInvokeNetworkNPCTalkRequest_Implementation(const FPalNetworkNPCTalkResponseData& NPCTalkResponseData) {
}

void UPalNetworkCharacterComponent::NotifyCustomFunction_ToServer_Implementation(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC, const FPalNPCTalkNotifyInfo& TalkNotifyInfo) {
}

void UPalNetworkCharacterComponent::ArenaStart_ToClient_Implementation(const FPalArenaStartParameter& StartParam) {
}

void UPalNetworkCharacterComponent::ArenaSetup_ToClient_Implementation() {
}


