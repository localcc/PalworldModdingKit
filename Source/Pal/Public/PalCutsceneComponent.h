#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "PalCutsceneComponent.generated.h"

class AActor;
class APalCutsceneActor;
class UPalHUDDispatchParameter_FadeWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCutsceneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCutsceneFinishDelegate, bool, bIsSkipped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCutsceneDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneDelegate OnPlayCutsceneDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneFinishDelegate OnFinishCutsceneDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCutsceneActor* CutsceneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHUDDispatchParameter_FadeWidget* FadeParam;
    
public:
    UPalCutsceneComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopCutsceneToServer();
    
    UFUNCTION(BlueprintCallable)
    void StopCutscene();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartFadeOut();
    
public:
    UFUNCTION(BlueprintCallable)
    APalCutsceneActor* SpawnCutsceneActor(TSubclassOf<APalCutsceneActor> CutsceneActorClass, FVector Location, FRotator Rotation, AActor* Owner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PlayCutsceneToServer();
    
    UFUNCTION(BlueprintCallable)
    void PlayCutscene(APalCutsceneActor* InCutsceneActor, bool IsAutoDestroy);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnEndFadeOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingCutscene() const;
    
};

