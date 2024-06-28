#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalWazaID.h"
#include "PalActiveSkill.generated.h"

UCLASS(Blueprintable)
class UPalActiveSkill : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoolTimeUpdateDelegate, float, CoolRate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoolStateChange);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoolTimeUpdateDelegate OnCoolTimeUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoolStateChange OnCoolStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoolStateChange OnCoolFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChangeCTState, meta=(AllowPrivateAccess=true))
    bool IsCooling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateCoolTime, meta=(AllowPrivateAccess=true))
    float ReuseCoolTimer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWazaID WazaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsIgnoreRaycast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStopTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DatabaseCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NextCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTransient;
    
public:
    UPalActiveSkill();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateCoolTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChangeCTState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoolTimeFinish() const;
    
};

