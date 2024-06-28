#include "PalBuildObjectConvertCharacterToItem.h"
#include "Net/UnrealNetwork.h"
#include "PalMapObjectConvertCharacterToItemModel.h"
#include "PalMapObjectConvertCharacterToItemParameterComponent.h"

APalBuildObjectConvertCharacterToItem::APalBuildObjectConvertCharacterToItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConcreteModelClass = UPalMapObjectConvertCharacterToItemModel::StaticClass();
    this->ConvertCharacterToItemParameter = CreateDefaultSubobject<UPalMapObjectConvertCharacterToItemParameterComponent>(TEXT("ConvertCharacterToItemParameter"));
}

void APalBuildObjectConvertCharacterToItem::OnRep_VisualProcessInfos(const TArray<FPalBuildObjectConvertCharacterToItemVisualProcessInfo> OldVisualProcessInfos) {
}

void APalBuildObjectConvertCharacterToItem::OnProceedConvertProcess_ServerInternal(UPalMapObjectConvertCharacterToItemModel* ConvertCharacterToItemModel) {
}


void APalBuildObjectConvertCharacterToItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalBuildObjectConvertCharacterToItem, VisualProcessInfos);
}


