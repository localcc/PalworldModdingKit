#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalArenaWorldSubsystem.generated.h"

class APalArenaEntrance;
class APalPlayerCharacter;
class UDataLayerAsset;
class UPalArenaInstanceModel;
class UPalArenaSequencer;

UCLASS(Blueprintable)
class PAL_API UPalArenaWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataLayerAsset*> DataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalArenaSequencer> ArenaSequencerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InBattleTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalArenaInstanceModel*> InstanceModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalArenaEntrance* ArenaEntrance;
    
public:
    UPalArenaWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestCancelEntryArena(APalPlayerCharacter* CancelPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeBattleEndTime_ServerInternal(FDateTime BattleEndTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArenaBattleTime();
    
    UFUNCTION(BlueprintCallable)
    void ForceStageExitAll();
    
    UFUNCTION(BlueprintCallable)
    void ExitArena(APalPlayerCharacter* Player);
    
};

