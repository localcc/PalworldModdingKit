#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalContainerOperationRestrictType.h"
#include "PalContainerId.h"
#include "PalContainerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalContainerBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDisposeContainerDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisposeContainerDelegate OnDisposeContainerDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalContainerId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EPalContainerOperationRestrictType OperationRestrictType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreOnSave;
    
public:
    UPalContainerBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalContainerId GetId() const;
    
};

