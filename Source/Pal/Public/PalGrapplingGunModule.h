#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalGrapplingGunState.h"
#include "PalGrapplingGunInitParameter.h"
#include "PalGrapplingGunModule.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class PAL_API UPalGrapplingGunModule : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* ActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableShootSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableReturnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableMaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearCoolTimeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearCoolTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GrappleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalGrapplingGunState GrapplingGunState;
    
public:
    UPalGrapplingGunModule();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickModule(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ShowLine();
    
    UFUNCTION(BlueprintCallable)
    void ShotCable();
    
    UFUNCTION(BlueprintCallable)
    void OnStartGrapplingAction(const FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnDetachWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OnAttachWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrapplingAction() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FPalGrapplingGunInitParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHitGrapplingTarget() const;
    
};

