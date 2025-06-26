#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalFishShadowSizeType.h"
#include "EPalFishingPlayerMotionType.h"
#include "EPalFishingResultType.h"
#include "EPalSizeType.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalFishShadowRareInfo.h"
#include "PalFishingCatchBattleParameter.h"
#include "PalFishingSpotSaveData.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalGrantCharacterRequestData.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalFishingSystem.generated.h"

class APalCutsceneActor;
class APalFishingSpotArea;
class UAnimMontage;
class UDataTable;
class UNiagaraSystem;
class UPalFishingCatchBattle;
class UPalFishingSpotAreaModel;

UCLASS(Blueprintable)
class PAL_API UPalFishingSystem : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecievedFishingSearchResultDelegate, const EPalFishingResultType, resultType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecievedFishingBattleResultDelegate, const EPalFishingResultType, resultType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObtainCharacterDelegate, const FPalGrantCharacterRequestData, RequestData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecievedFishingSearchResultDelegate OnReceivedSearchResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecievedFishingBattleResultDelegate OnReceivedBattleResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObtainCharacterDelegate OnReceivedCreatedCharacterDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFishingCatchBattleParameter CatchBattleParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalFishShadowSizeType, float> FishShadowSizeScaleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RarePalEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RarePassiveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalFishShadowRareInfo> OverrideRarePassiveEffectInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalSizeType, TSoftClassPtr<APalCutsceneActor>> FishingSuccessCutsceneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalFishingPlayerMotionType, UAnimMontage*> FishingSuccessPlayerMotionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PassiveSkillData KingPassiveSkillId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalFishingCatchBattle> CatchBattleBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BaitItemDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalFishingCatchBattle*> CatchBattleMapByPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalFishingSpotArea*> FishingSpotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalFishingSpotAreaModel*> SpotModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalFishingSpotSaveData> FishingSpotSaveDataMapCache;
    
public:
    UPalFishingSystem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeForServer_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFishShadowSizeScale(EPalFishShadowSizeType SizeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalFishingPlayerMotionType GetFishingPlayerMotionType(const EPalSizeType SizeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalFishingCatchBattle* GetCatchBattle(const FGuid& PlayerUId) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

