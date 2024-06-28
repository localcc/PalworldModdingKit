#pragma once
#include "CoreMinimal.h"
#include "EPalWidgetBlueprintType.generated.h"

UENUM(BlueprintType)
enum class EPalWidgetBlueprintType : uint8 {
    Undefined,
    Dialog,
    MonsterDetail,
    WorldMap,
    ConvertItemDetail,
    CharacterRankUp,
    RecoverOtomo,
    ItemChest,
    WorkerRadialMenu,
    FoodBox,
    SelectItem_PlayerInventory,
    PlayerStatusOperation,
    PalStatusOperation,
    CommonReward,
    MapObjectSecuritySetting,
    PasswordSetting,
    BaseCampWorkHard,
    WorkSuitabilityPreference,
    BaseCampWorkFixedAssignManage,
    ItemChestPreference,
    CutsceneOverlay,
    MapObjectCommonCharacterContainer,
    PickingGame,
    ArenaPalSelect,
};

