#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EPalArenaInstanceState.h"
#include "PalStageInstanceId.h"
#include "PalArenaInstanceModel.generated.h"

class APalArenaLevelInstance;
class APalPlayerCharacter;
class UDataLayerAsset;
class UPalArenaSequencer;

UCLASS(Blueprintable)
class PAL_API UPalArenaInstanceModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBattleEndTimeDelegate, FDateTime, BattleEndTime);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid ArenaInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RepFieldWarpPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform FieldWarpPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform StartPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform DeadItemDropTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId StageInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDateTime BattleEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalArenaInstanceState ArenaInstanceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalArenaSequencer* LocalArenaSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalArenaLevelInstance> WeakArenaLevelInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> EntryPlayers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InBattleTime;
    
public:
    UPalArenaInstanceModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartInBattleTimer_ServerInternal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded_ForClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFieldWarpPointLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalArenaLevelInstance* GetArenaLevelInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalArenaInstanceState GetArenaInstanceState() const;
    
};

