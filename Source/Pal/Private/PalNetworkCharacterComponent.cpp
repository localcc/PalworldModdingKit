#include "PalNetworkCharacterComponent.h"
#include "Templates/SubclassOf.h"

UPalNetworkCharacterComponent::UPalNetworkCharacterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkCharacterComponent::RequestReflectAction_ToServer_Implementation(APalCharacter* Character) {
}

void UPalNetworkCharacterComponent::ReflectAction_ToClient_Implementation(APalCharacter* Character, FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass) {
}

void UPalNetworkCharacterComponent::NotifyTalkStart_ToServer_Implementation(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC) {
}

void UPalNetworkCharacterComponent::NotifyTalkEnd_ToServer_Implementation(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC) {
}

void UPalNetworkCharacterComponent::NotifyCustomFunction_ToServer_Implementation(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC, const FPalNPCTalkNotifyInfo& TalkNotifyInfo) {
}

void UPalNetworkCharacterComponent::ArenaStart_ToClient_Implementation(const FPalArenaStartParameter& StartParam) {
}

void UPalNetworkCharacterComponent::ArenaSetup_ToClient_Implementation() {
}


