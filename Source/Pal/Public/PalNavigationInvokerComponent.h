#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavigationInvokerComponent.h"
#include "FlagContainer.h"
#include "PalNavigationInvokerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNavigationInvokerComponent : public UNavigationInvokerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoActivateInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWaitWorldPartition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntPoint AreaBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer IsDisableInvorkerFlag;
    
public:
    UPalNavigationInvokerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisableInvorkerFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableInvorker() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateInvoker();
    
};

