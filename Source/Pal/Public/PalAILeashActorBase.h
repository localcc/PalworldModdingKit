#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalLeashState.h"
#include "PalAILeashActorBase.generated.h"

class APalCharacter;
class UPalNavigationInvokerComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class APalAILeashActorBase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLeashedPawnStateChanged, APalCharacter*, LeashedCharacter, EPalLeashState, PreviousLeashState, EPalLeashState, LeashState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCharacterOutOfLeashRange, APalCharacter*, LeashedCharacter, FVector, TargetLocation, float, TargetDistance);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeashInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeashOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvokerExtentRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateLeash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalLeashState LeashState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterOutOfLeashRange OnCharacterOutOfLeashRange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeashedPawnStateChanged OnLeashedPawnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNavigationInvokerComponent* NavigationInvoker;
    
public:
    APalAILeashActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLeashLocation(const FVector& NewLeashLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveLeash() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateLeash();
    
    UFUNCTION(BlueprintCallable)
    void ActivateLeash();
    
};

