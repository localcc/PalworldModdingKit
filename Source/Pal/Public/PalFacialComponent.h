#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalFacialEyeType.h"
#include "EPalFacialMouthType.h"
#include "PalFacialComponent.generated.h"

class UAnimMontage;
class UPalFacial_MainModule;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFacialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableEyeBlink;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalFacial_MainModule* MainModule;
    
public:
    UPalFacialComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUpTestMesh(USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableNotify(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLayer(EPalFacialEyeType Eye);
    
    UFUNCTION(BlueprintCallable)
    bool ExistFacialNotifyInMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    bool ExistEyeNotifyInMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMouth_ForMontageNotify(EPalFacialMouthType Mouth);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEyeAndMouthMesh(EPalFacialEyeType Eye);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEye_ForMontageNotify(EPalFacialEyeType Eye);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDefaultFacial();
    
private:
    UFUNCTION(BlueprintCallable)
    void Blink();
    
};

