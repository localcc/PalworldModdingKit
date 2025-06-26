#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FloatCounter.h"
#include "Templates/SubclassOf.h"
#include "PalStationaryLauncherBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalStationaryLauncherBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTickInNotLaunchLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> LaunchObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LaunchedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LaunchLoopNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatCounter LaunchLoopTimeCounter;
    
public:
    APalStationaryLauncherBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartLaunchAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLaunchObjectClass_ServerInternal(TSubclassOf<AActor> InLaunchObjectClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedLaunchObject(AActor* SpawnedLaunchObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetLaunchObjectSpawnTransform(FVector& OutLocation, FRotator& OutRotator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastLaunch_Multicast();
    
};

