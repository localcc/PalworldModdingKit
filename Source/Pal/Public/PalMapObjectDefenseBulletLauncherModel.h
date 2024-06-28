#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectDefenseAttackModelBase.h"
#include "PalMapObjectDefenseBulletLauncherModel.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectDefenseBulletLauncherModel : public UPalMapObjectDefenseAttackModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBulletNumUpdated, int32, Num);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBulletNumUpdated OnBulletNumUpdatedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RemainingBulletsNum, meta=(AllowPrivateAccess=true))
    int32 remainingBulletsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MagazineSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName BulletItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AttackableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AttackableAngleElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AttackableAngleDepression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AttackableAngleElevationDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AttackableAngleDepressionDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RotateAxisWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat RotateAxisWorldRotation;
    
public:
    UPalMapObjectDefenseBulletLauncherModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UseBullet();
    
    UFUNCTION(BlueprintCallable)
    void ReloadBullets(int32 ReloadBulletsNum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainingBulletsNum();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingBulletsNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMagazineSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBulletName() const;
    
};

