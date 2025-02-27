#pragma once
#include "CoreMinimal.h"
#include "PalObjectPoolActivateParameter.h"
#include "PalObjectPoolContainer.h"
#include "PalObjectPoolKey.h"
#include "PalWorldSubsystem.h"
#include "PalObjectPoolManager.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalObjectPoolManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalObjectPoolKey, FPalObjectPoolContainer> NoReplicateObjectPoolMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FPalObjectPoolKey> NoReplicateObjectUsingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalObjectPoolKey, FPalObjectPoolContainer> ReplicateObjectPoolMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FPalObjectPoolKey> ReplicateObjectUsingMap;
    
    UPalObjectPoolManager();

    UFUNCTION(BlueprintCallable)
    void RegisterToPool(AActor* InActor, FPalObjectPoolKey InKey);
    
    UFUNCTION(BlueprintCallable)
    static void General_DeactivateActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void General_ActivateActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void DestroyedActor(AActor* NewDestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateToPool(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void ClearPool(FPalObjectPoolKey InKey, bool bDestroyUsingActor);
    
    UFUNCTION(BlueprintCallable)
    AActor* ActivateFromPool(FPalObjectPoolActivateParameter InParameter);
    
};

