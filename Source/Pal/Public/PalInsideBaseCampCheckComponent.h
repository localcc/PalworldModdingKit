#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PalInsideBaseCampCheckComponent.generated.h"

class UPalBaseCampModel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalInsideBaseCampCheckComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeaveBaseCampDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterBaseCampDelegate, UPalBaseCampModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterBaseCampDelegate OnEnterBaseCampDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeaveBaseCampDelegate OnLeaveBaseCampDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NowInsideBaseCampID;
    
public:
    UPalInsideBaseCampCheckComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideBaseCamp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetInsideBaseCampModel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetInsideBaseCampID();
    
};

