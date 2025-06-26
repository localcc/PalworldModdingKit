#pragma once
#include "CoreMinimal.h"
#include "EPalLeashState.h"
#include "PalAILeashActorBase.h"
#include "PalDeadInfo.h"
#include "PalAISquadLeashActor.generated.h"

class AActor;
class APalAISquadLeashActor;
class APalCharacter;
class UPalSquad;

UCLASS(Blueprintable)
class APalAISquadLeashActor : public APalAILeashActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLeashedSquadLeaderChanged, APalAISquadLeashActor*, SquadLeashActor, APalCharacter*, OldLeashedLeader, APalCharacter*, NewLeashedLeader);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalSquad* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter* SquadLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APalCharacter*, EPalLeashState> LeashedSquadCharacters;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeashedSquadLeaderChanged OnLeashedSquadLeaderChanged;
    
    APalAISquadLeashActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static APalAISquadLeashActor* SpawnSquadLeash(UPalSquad* NewSquad, float InLeashInnerRadius, float InLeashOuterRadius, float InInvokerExtentRadius, bool bInAutoActivateLeash);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRemovedSquadMember(AActor* RemovedMember);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadSquadMember(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnAddedSquadMember(AActor* AddedMember);
    
};

