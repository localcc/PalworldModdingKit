#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalFlyHeightType.h"
#include "PalFlyMeshHeightCtrlComponent.generated.h"

class APalCharacter;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFlyMeshHeightCtrlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlingAdditionalHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighFlingAddtionalHeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalFlyHeightType State;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsHighFling, meta=(AllowPrivateAccess=true))
    bool bIsHighFling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHighFlingCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SK;
    
public:
    UPalFlyMeshHeightCtrlComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ToLand(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ToFly(float Duration);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetupMesh();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsHighFling();
    
    UFUNCTION(BlueprintCallable)
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBattleMode(bool bIsBattleMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlying() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HighFlingEnd_Server();
    
    UFUNCTION(BlueprintCallable)
    void HighFlingEnd_Implementation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HighFlingEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultMeshLocationZ();
    
private:
    UFUNCTION(BlueprintCallable)
    void Debug_ForceHighFlingEnd();
    
};

