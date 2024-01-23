#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalTestMapObjectRegistrationToManager.generated.h"

UCLASS(Blueprintable)
class APalTestMapObjectRegistrationToManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyVirtualBaseCamp;
    
public:
    APalTestMapObjectRegistrationToManager();
    UFUNCTION(BlueprintCallable)
    void ForceBuildComplete();
    
};

