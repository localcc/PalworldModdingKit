#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalVisualEffectID.h"
#include "PalVisualEffectDynamicParameter.h"
#include "PalVisualEffectBase.generated.h"

class AActor;
class APalCharacter;
class UMaterialInstanceDynamic;
class UPalVisualEffectBase;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UPalVisualEffectBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnComplete, UPalVisualEffectBase*, VisualEffect);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndVisualEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDeleteInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComplete OnCompleteDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalVisualEffectID> ConflictIDList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalVisualEffectID VisualEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalVisualEffectDynamicParameter DynamicParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCallEndOnComponentEndPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableForDedicatedServer;
    
    UPalVisualEffectBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickVisualEffect(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TerminatingTickVisualEffect(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndVisualEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeleteInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreakVisualEffect(bool bByConflict);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginVisualEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEndVisualEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetPlayerHeadMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInstanceDynamic*> GetMainMeshMaterials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMainMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInstanceDynamic*> GetMainAndHeadMeshMaterials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatParameter(FName Name, float DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalVisualEffectID> GetConflictIDList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllMesh(TArray<USceneComponent*>& OutComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanDeleteInstance();
    
};

