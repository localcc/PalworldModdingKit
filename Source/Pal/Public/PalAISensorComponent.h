#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalAIResponseType.h"
#include "FlagContainer.h"
#include "PalDeadInfo.h"
#include "Templates/SubclassOf.h"
#include "PalAISensorComponent.generated.h"

class AActor;
class APalCharacter;
class UPalAIResponsePreset;
class UPalAISightResponse;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalAISensorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceiveSoundDelegate, FVector, EmitLocation);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SelfPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SightAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HearingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HumanAndNoneWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsIgnoreSoundReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecentMaxSoundLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ResponsedMaxBiologicalGrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAIResponsePreset* AIResponsePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAISightResponse* AISightResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableSightFlag;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveSoundDelegate OnFReceiveSoundDelegate;
    
    UPalAISensorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SightCheckAllPlayer(TArray<APalCharacter*>& InSightPlayers, float RangeRate);
    
    UFUNCTION(BlueprintCallable)
    void SightCheckAllEdibleDeadNPC(TArray<APalCharacter*>& InSightCharacters);
    
    UFUNCTION(BlueprintCallable)
    void SightCheckAllAliveNPC(TArray<APalCharacter*>& InSightCharacters, bool ignoreOtomo);
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSightFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableEscape();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAIResponse(TSubclassOf<UPalAIResponsePreset> PresetClass);
    
    UFUNCTION(BlueprintCallable)
    EPalAIResponseType SelectResponseBySenses(EPalAIResponseType CurrentBehavior, const TArray<APalCharacter*>& FindCharacters, bool IsDamaged, APalCharacter*& OutTargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ResetResponsedMaxBiologicalGrade();
    
private:
    UFUNCTION(BlueprintCallable)
    void ReceiveSound(int32 SoundRadius, FVector EmitLocation, AActor* Emitter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnResponseSpecialLookat();
    
    UFUNCTION(BlueprintCallable)
    bool IsInSightKillerAndDeadBody(AActor* Killer, AActor* DeadBody);
    
    UFUNCTION(BlueprintCallable)
    void EnableHearing();
    
    UFUNCTION(BlueprintCallable)
    void DisableHearing();
    
private:
    UFUNCTION(BlueprintCallable)
    void DeadAutoRemoveDelegate(FPalDeadInfo DeadInfo);
    
};

