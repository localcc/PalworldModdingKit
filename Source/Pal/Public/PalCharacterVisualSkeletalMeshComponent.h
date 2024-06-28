#pragma once
#include "CoreMinimal.h"
#include "EPalGeneralMontageType.h"
#include "PalSkeletalMeshComponent.h"
#include "PalCharacterVisualSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalCharacterVisualSkeletalMeshComponent : public UPalSkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
public:
    UPalCharacterVisualSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCharacterWithPlayGeneralMontage(const FName InCharacterId, const EPalGeneralMontageType GeneralMontageType, const bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCharacter(const FName InCharacterId);
    
};

