#pragma once
#include "CoreMinimal.h"
#include "EPalLocalizeTextCategory.generated.h"

UENUM(BlueprintType)
enum class EPalLocalizeTextCategory : uint8 {
    None,
    UICommon,
    NpcTalk,
    BaseCampWorkerEvent,
    PalMonsterName,
    PalHumanName,
    UniqueNPCName,
    PrefixName,
    PalShortDescription,
    PalLongDescription,
    PalFirstActivatedInfo,
    ItemName,
    ItemDescription,
    MapObjectName,
    BuildObjectDescription,
    BuildObjectCategory,
    SkillName,
    SkillDesc,
    TechnologyName,
    TechnologyDescription,
    WorldMapRegionAndPlace,
    DungeonName,
    NoteDescription,
    TutorialMessage,
    HelpGuide,
    MapRespawnPoint,
};

