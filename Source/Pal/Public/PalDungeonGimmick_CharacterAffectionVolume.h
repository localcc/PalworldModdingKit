#pragma once
#include "CoreMinimal.h"
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_CharacterAffectionVolume.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalDungeonGimmick_CharacterAffectionVolumeEffectBase;

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmick_CharacterAffectionVolume : public APalDungeonLevelGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IPalInteractiveObjectComponentInterface>> InteractComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalDungeonGimmick_CharacterAffectionVolumeEffectBase* EffectToCharacterPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalDungeonGimmick_CharacterAffectionVolumeEffectBase* EffectToCharacterPlayerOtomo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalDungeonGimmick_CharacterAffectionVolumeEffectBase* EffectToCharacterDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalDungeonGimmick_CharacterAffectionVolumeEffectBase* EffectToMapObject;
    
public:
    APalDungeonGimmick_CharacterAffectionVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
};

