#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalDungeonLevelVersion.h"
#include "PalBaseCampSaveData.h"
#include "PalBossSpawnerSaveData.h"
#include "PalCellCoord.h"
#include "PalCharacterContainerSaveData.h"
#include "PalCharacterParameterStorageSaveData.h"
#include "PalContainerId.h"
#include "PalDungeonPointMarkerSaveData.h"
#include "PalDungeonSaveData.h"
#include "PalDynamicItemSaveData.h"
#include "PalEnemyCampSaveData.h"
#include "PalFishingSpotSaveData.h"
#include "PalFixedWeaponDestroySaveData.h"
#include "PalFoliageGridSaveData.h"
#include "PalGameTimeSaveData.h"
#include "PalGroupSaveData.h"
#include "PalGuildExtraSaveData.h"
#include "PalIndividualCharacterSaveParameterSaveData.h"
#include "PalInstanceID.h"
#include "PalInvaderSaveData.h"
#include "PalItemContainerSaveData.h"
#include "PalMapObjectSaveData.h"
#include "PalMapObjectSpawnerInStageSaveData.h"
#include "PalMapObjectSpawnerSaveData.h"
#include "PalNPCAppearFlagSaveData.h"
#include "PalOilrigSaveData.h"
#include "PalRandomizerSaveData.h"
#include "PalStageInstanceId.h"
#include "PalSupplySaveData.h"
#include "PalWorkSaveData.h"
#include "PalWorldSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, FPalIndividualCharacterSaveParameterSaveData> CharacterSaveParameterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectSaveData> MapObjectSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalCellCoord, FPalFoliageGridSaveData> FoliageGridSaveDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalMapObjectSpawnerSaveData> MapObjectSpawnerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalStageInstanceId, FPalMapObjectSpawnerInStageSaveData> MapObjectSpawnerInStageSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalWorkSaveData> WorkSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalBaseCampSaveData> BaseCampSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalContainerId, FPalItemContainerSaveData> ItemContainerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDynamicItemSaveData> DynamicItemSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalContainerId, FPalCharacterContainerSaveData> CharacterContainerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalGroupSaveData> GroupSaveDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalGuildExtraSaveData> GuildExtraSaveDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCharacterParameterStorageSaveData CharacterParameterStorageSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalGameTimeSaveData GameTimeSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalBossSpawnerSaveData BossSpawnerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalEnemyCampSaveData EnemyCampSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalNPCAppearFlagSaveData NPCAppearFlagSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDungeonPointMarkerSaveData> DungeonPointMarkerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDungeonSaveData> DungeonSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDungeonLevelVersion DungeonLevelVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalInvaderSaveData> InvaderSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOilrigSaveData OilrigSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFixedWeaponDestroySaveData FixedWeaponDestroySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalSupplySaveData SupplySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalRandomizerSaveData RandomizerSaveData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 WorldMetaSaveVersionBitMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FPalInstanceID> InLockerCharacterInstanceIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalFishingSpotSaveData> FishingSpotSaveData;
    
    PAL_API FPalWorldSaveData();
};

