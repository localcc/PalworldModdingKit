#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalSoundPlayerComponent.generated.h"

class UPalSoundSlot;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalSoundPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(USceneComponent*, FOnGetAkOwnerComponent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalSoundSlot> PalSoundSlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetAkOwnerComponent OnGetAkOwnerComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSoundSlot* PalSoundSlotCache;
    
public:
    UPalSoundPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
};

