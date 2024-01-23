#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerInventoryType.h"
#include "EPalTribeID.h"
#include "PalCompletedQuestSaveData.h"
#include "PalCustomMarkerSaveData.h"
#include "PalOrderedQuestSaveData.h"
#include "PalTutorialTriggerSaveData.h"
#include "PalLocalSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalLocalSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalTribeID, int32> Local_ActivateOtomoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    TArray<uint8> worldMapMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCustomMarkerSaveData> Local_CustomMarkerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalTutorialTriggerSaveData> Local_TutorialTriggerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCompletedQuestSaveData> Local_CompletedTutorialQuestSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalOrderedQuestSaveData> Local_OrderedTutorialQuestSaveData;
    
    PAL_API FPalLocalSaveData();
};

