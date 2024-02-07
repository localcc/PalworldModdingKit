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


