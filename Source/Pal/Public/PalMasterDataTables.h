#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalLocalizeTextCategory.h"
#include "PalTechnologyDataSet.h"
#include "PalMasterDataTables.generated.h"

class UDataTable;
class UPalAchivementRewardDataAsset;
class UPalCircumRequestDataAsset;
class UPalDisplayRequestDataAsset;
class UPalMasterDataTableAccess_BaseCampLevelData;
class UPalMasterDataTableAccess_BossSpawnerUIData;
class UPalMasterDataTableAccess_BuildObjectData;
class UPalMasterDataTableAccess_BuildObjectIconData;
class UPalMasterDataTableAccess_CharacterTeamMission;
class UPalMasterDataTableAccess_CharacterTeamMissionChallengeCondition;
class UPalMasterDataTableAccess_CharacterUpgradeData;
class UPalMasterDataTableAccess_DungeonEnemySpawnerData;
class UPalMasterDataTableAccess_DungeonItemLotteryData;
class UPalMasterDataTableAccess_DungeonLevelData;
class UPalMasterDataTableAccess_DungeonSpawnAreaData;
class UPalMasterDataTableAccess_FarmCropData;
class UPalMasterDataTableAccess_FarmSkillFruitsLotteryData;
class UPalMasterDataTableAccess_FieldLotteryNameData;
class UPalMasterDataTableAccess_ItemLotteryData;
class UPalMasterDataTableAccess_ItemProductData;
class UPalMasterDataTableAccess_ItemRecipe;
class UPalMasterDataTableAccess_ItemShop;
class UPalMasterDataTableAccess_ItemShopLottery;
class UPalMasterDataTableAccess_LabResearch;
class UPalMasterDataTableAccess_LocalizeText;
class UPalMasterDataTableAccess_MapObjectMasterData;
class UPalMasterDataTableAccess_NPCEmoteLotteryData;
class UPalMasterDataTableAccess_PalRandomizerData;
class UPalMasterDataTableAccess_PalShop;
class UPalMasterDataTableAccess_PlayerStatusRankData;
class UPalMasterDataTableAccess_SpawnerPlacementData;
class UPalMasterDataTableAccess_UIInputActionData;
class UPalMasterDataTableAccess_WildSpawnerData;
class UPalMasterDataTableAccess_WorldMapAreaData;
class UPalNoteDataAsset;

UCLASS(Blueprintable)
class UPalMasterDataTables : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WildSpawnerDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_WildSpawnerData* Access_WildSpawnerDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemRecipeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_ItemRecipe* Access_ItemRecipeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FarmCropDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_FarmCropData* Access_FarmCropDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MapObjectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_MapObjectMasterData* Access_MapObjectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuildObjectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_BuildObjectData* Access_BuildObjectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuildObjectIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_BuildObjectIconData* Access_BuildObjectIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemProductDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_ItemProductData* Access_ItemProductDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BaseCampLevelDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_BaseCampLevelData* Access_BaseCampLevelDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DungeonSpawnAreaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_DungeonSpawnAreaData* Access_DungeonSpawnAreaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DungeonLevelDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_DungeonLevelData* Access_DungeonLevelDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DungeonEnemySpawnerDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_DungeonEnemySpawnerData* Access_DungeonEnemySpawnerDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DungeonItemLotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_DungeonItemLotteryData* Access_DungeonItemLotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FieldLotteryNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_FieldLotteryNameData* Access_FieldLotteryNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemLotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_ItemLotteryData* Access_ItemLotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EmoteNPCLotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_NPCEmoteLotteryData* Access_EmoteNPCLotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerStatusRankDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_PlayerStatusRankData* Access_PlayerStatusRankDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterUpgradeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_CharacterUpgradeData* Access_CharacterUpgradeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalNoteDataAsset* NoteDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalNoteDataAsset* HelpGuideDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalAchivementRewardDataAsset* AchivementRewardDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalCircumRequestDataAsset* ItemRequestNPCDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDisplayRequestDataAsset* PalDisplayNPCDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalLocalizeTextCategory, UDataTable*> LocalizeTextDataTableMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalLocalizeTextCategory, UPalMasterDataTableAccess_LocalizeText*> Access_LocalizeTextDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UIInputActionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_UIInputActionData* Access_UIInputActionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalTechnologyDataSet technologyDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* worldMapDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemShopLotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_ItemShopLottery* Access_ItemShopLotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemShopDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_ItemShop* Access_ItemShopDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PalShopDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_PalShop* Access_PalShopDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpawnerPlacementDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_SpawnerPlacementData* Access_SpawnerPlacementDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PalRandomizerDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_PalRandomizerData* Access_PalRandomizerDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterTeamMissionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_CharacterTeamMission* Access_CharacterTeamMissionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterTeamMissionChallengeConditionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_CharacterTeamMissionChallengeCondition* Access_CharacterTeamMissionChallengeConditionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LabResearchDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_LabResearch* Access_LabResearchDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorldMapAreaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_WorldMapAreaData* Access_WorldMapAreaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BossSpawnerUIDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_BossSpawnerUIData* Access_BossSpawnerUIDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FarmSkillFruitsLotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTableAccess_FarmSkillFruitsLotteryData* Access_FarmSkillFruitsLotteryDataTable;
    
public:
    UPalMasterDataTables();

};

