#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalLocalizeTextCategory.h"
#include "PalMasterDataTablesUtility.generated.h"

class UDataTable;
class UObject;
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
class UPalMasterDataTableAccess_ItemRecipe;
class UPalMasterDataTableAccess_ItemShop;
class UPalMasterDataTableAccess_ItemShopLottery;
class UPalMasterDataTableAccess_LabResearch;
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
class PAL_API UPalMasterDataTablesUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMasterDataTablesUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_WorldMapAreaData* GetWorldMapAreaDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetWorldMapAreaDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_WildSpawnerData* GetWildSpawnerDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetWildSpawnerDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_UIInputActionData* GetUIInputActionDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetUIInputActionDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_SpawnerPlacementData* GetSpawnerPlacementDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetSpawnerPlacementDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_PlayerStatusRankData* GetPlayerStatusRankDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetPlayerStatusRankDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_PalShop* GetPalShopDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetPalShopDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_PalRandomizerData* GetPalRandomizerDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetPalRandomizerDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalDisplayRequestDataAsset* GetPalDisplayNPCDataAsset(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalNoteDataAsset* GetNoteDataAsset(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_MapObjectMasterData* GetMapObjectDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetMapObjectDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetLocalizedText(const UObject* WorldContextObject, EPalLocalizeTextCategory TextCategory, FName TextId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_LabResearch* GetLabResearchDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetLabResearchDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_ItemShopLottery* GetItemShopLotteryDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetItemShopLotteryDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_ItemShop* GetItemShopDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetItemShopDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalCircumRequestDataAsset* GetItemRequestNPCDataAsset(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_ItemRecipe* GetItemRecipeDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetItemRecipeDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_ItemLotteryData* GetItemLotteryDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetItemLotteryDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalNoteDataAsset* GetHelpGuideDataAsset(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_FieldLotteryNameData* GetFieldLotteryNameDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetFieldLotteryNameDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_FarmSkillFruitsLotteryData* GetFarmSkillFruitsLotteryDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetFarmSkillFruitsLotteryDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_FarmCropData* GetFarmCropDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetFarmCropDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_NPCEmoteLotteryData* GetEmoteNPCLotteryDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetEmoteNPCLotteryDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_DungeonSpawnAreaData* GetDungeonSpawnAreaDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetDungeonSpawnAreaDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_DungeonLevelData* GetDungeonLevelDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetDungeonLevelDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_DungeonItemLotteryData* GetDungeonItemLotteryDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetDungeonItemLotteryDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_DungeonEnemySpawnerData* GetDungeonEnemySpawnerDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetDungeonEnemySpawnerDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_CharacterUpgradeData* GetCharacterUpgradeDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetCharacterUpgradeDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_CharacterTeamMission* GetCharacterTeamMissionDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetCharacterTeamMissionDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_CharacterTeamMissionChallengeCondition* GetCharacterTeamMissionChallengeConditionDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetCharacterTeamMissionChallengeConditionDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_BuildObjectIconData* GetBuildObjectIconDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetBuildObjectIconDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_BuildObjectData* GetBuildObjectDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetBuildObjectDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_BossSpawnerUIData* GetBossSpawnerUIDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetBossSpawnerUIDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTableAccess_BaseCampLevelData* GetBaseCampLevelDataTableAccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetBaseCampLevelDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalAchivementRewardDataAsset* GetAchivementRewardDataAsset(const UObject* WorldContextObject);
    
};

