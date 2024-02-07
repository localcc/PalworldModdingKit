#include "PalItemContainerMultiHelper.h"
#include "Net/UnrealNetwork.h"

UPalItemContainerMultiHelper::UPalItemContainerMultiHelper() {
}

void UPalItemContainerMultiHelper::OnUpdateContainerContent(UPalItemContainer* Container) {
}

void UPalItemContainerMultiHelper::OnRep_Containers() {
}

bool UPalItemContainerMultiHelper::IsExistItems(const TArray<FPalStaticItemIdAndNum>& StaticItemInfos) {
    return false;
}

void UPalItemContainerMultiHelper::FindByStaticItemIds(const TArray<FName>& StaticItemIds, TArray<FPalStaticItemIdAndNum>& StaticItemInfos) {
}

void UPalItemContainerMultiHelper::FindByStaticItemId(const FName StaticItemId, FPalStaticItemIdAndNum& StaticItemInfo) {
}

void UPalItemContainerMultiHelper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalItemContainerMultiHelper, Containers);
}


