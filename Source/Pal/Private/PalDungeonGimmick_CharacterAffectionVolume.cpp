#include "PalDungeonGimmick_CharacterAffectionVolume.h"
#include "PalDungeonGimmick_CharacterAffectionVolumeEffect_DoNothing.h"

APalDungeonGimmick_CharacterAffectionVolume::APalDungeonGimmick_CharacterAffectionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->EffectToCharacterPlayer = CreateDefaultSubobject<UPalDungeonGimmick_CharacterAffectionVolumeEffect_DoNothing>(TEXT("EffectToCharacterPlayer"));
    this->EffectToCharacterPlayerOtomo = CreateDefaultSubobject<UPalDungeonGimmick_CharacterAffectionVolumeEffect_DoNothing>(TEXT("EffectToCharacterPlayerOtomo"));
    this->EffectToCharacterDefault = CreateDefaultSubobject<UPalDungeonGimmick_CharacterAffectionVolumeEffect_DoNothing>(TEXT("EffectToCharacterDefault"));
    this->EffectToMapObject = CreateDefaultSubobject<UPalDungeonGimmick_CharacterAffectionVolumeEffect_DoNothing>(TEXT("EffectToMapObject"));
}

void APalDungeonGimmick_CharacterAffectionVolume::OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}


