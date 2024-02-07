#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalVisualEffectID.h"
#include "PalVisualEffectDynamicParameter.h"
#include "PalVisualEffectComponent.generated.h"

class AActor;
class UPalVisualEffectBase;
class UPalVisualEffectComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalVisualEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveVisualEffect, const UPalVisualEffectComponent*, VisualEffectComponent, EPalVisualEffectID, VisualEffectID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCompleteVisualEffect, const UPalVisualEffectComponent*, VisualEffectComponent, EPalVisualEffectID, VisualEffectID, UPalVisualEffectBase*, VisualEffect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAddVisualEffect, const UPalVisualEffectComponent*, VisualEffectComponent, EPalVisualEffectID, VisualEffectID, UPalVisualEffectBase*, VisualEffect);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalVisualEffectID, TSoftClassPtr<UPalVisualEffectBase>> VisualEffectClass_OverrideMap;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddVisualEffect OnAddVisualEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveVisualEffect OnRemoveVisualEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleteVisualEffect OnCompleteVisualEffectDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalVisualEffectBase*> ExecutionVisualEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalVisualEffectBase*> TerminatingVisualEffects;
    
public:
    UPalVisualEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void RemoveVisualEffectForActor_Local(AActor* Actor, EPalVisualEffectID VisualEffectID);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveVisualEffectForActor(AActor* Actor, EPalVisualEffectID VisualEffectID);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveVisualEffectByConflict_ToServer(EPalVisualEffectID VisualEffectID, int32 issuerID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RemoveVisualEffectByConflict_ToALL(EPalVisualEffectID VisualEffectID, int32 issuerID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveVisualEffect_ToServer(EPalVisualEffectID VisualEffectID, int32 issuerID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RemoveVisualEffect_ToALL(EPalVisualEffectID VisualEffectID, int32 issuerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveVisualEffect_Local(EPalVisualEffectID VisualEffectID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisualEffect(EPalVisualEffectID VisualEffectID);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveConflictVisualEffect(EPalVisualEffectID VisualEffectID);
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
    UFUNCTION(BlueprintCallable)
    static UPalVisualEffectBase* AddVisualEffectForActor_Local(AActor* Actor, EPalVisualEffectID VisualEffectID, FPalVisualEffectDynamicParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    static UPalVisualEffectBase* AddVisualEffectForActor(AActor* Actor, EPalVisualEffectID VisualEffectID, FPalVisualEffectDynamicParameter Parameter);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddVisualEffect_ToServer(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter, int32 issuerID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AddVisualEffect_ToALL(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter, int32 issuerID);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalVisualEffectBase* AddVisualEffect_Local(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter);
    
    UFUNCTION(BlueprintCallable)
    UPalVisualEffectBase* AddVisualEffect(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter);
    
};

