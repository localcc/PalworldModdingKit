#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerInventoryType.h"
#include "EPalTribeID.h"
#include "PalArenaRule.h"
#include "PalCompletedQuestSaveData.h"
#include "PalCustomMarkerSaveData.h"
#include "PalInstanceID.h"
#include "PalOrderedQuestSaveData.h"
#include "PalOtomoLoadoutData.h"
#include "PalTutorialTriggerSaveData.h"
#include "PalLocalSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalLocalSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalTribeID, int32> Local_ActivateOtomoCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalTribeID, bool> Local_PalEncountFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NoteCheckedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalPlayerInventoryType, int32> Local_LoadoutSelectedIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Local_NewUnlockedBuilds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Local_IsBuildMenuChecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Local_NPCTalkCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NewUnlockedTechs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_ShowedCutsceneFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Local_PlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Local_DoctorSurgiCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Local_DoctorLastSurgiDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> Local_ItemRequestCircumCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NpcItemCircumCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_PalDisplayNPCDataTableProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NpcPalDexRewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NpcBossDefeatRewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NpcPalCaptureRewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> worldMapMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> WorldMapMaskTextureV4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCustomMarkerSaveData> Local_CustomMarkerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalTutorialTriggerSaveData> Local_TutorialTriggerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCompletedQuestSaveData> Local_CompletedTutorialQuestSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalOrderedQuestSaveData> Local_OrderedTutorialQuestSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalArenaRule Local_ArenaRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Local_ItemQuickMoveExceptionIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalOtomoLoadoutData> Local_OtomoLoadoutSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackingQuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, int32> Local_MaxFriendshipPalIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockedBlueprintCategoryInBuildMenu;
    
    PAL_API FPalLocalSaveData();
};

