#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalPlayerInventoryType.h"
#include "EPalTribeID.h"
#include "PalArenaRule.h"
#include "PalInstanceID.h"
#include "PalOtomoLoadoutData.h"
#include "PalPlayerLocalRecordData.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalPlayerLocalRecordData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalTribeID, int32> Local_ActivateOtomoCount;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalTribeID, bool> Local_PalEncountFlag;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalTribeID, bool> Local_PalDexNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NoteCheckedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalPlayerInventoryType, int32> Local_LoadoutSelectedIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Local_NewUnlockedBuilds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Local_IsBuildMenuChecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NewUnlockedTechs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_ShowedCutsceneFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Local_PlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Local_DoctorSurgiCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Local_DoctorLastSurgiDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> Local_ItemRequestCircumCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NpcItemCircumCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_PalDisplayNPCDataTableProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NpcPalDexRewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NpcBossDefeatRewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Local_NpcPalCaptureRewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalArenaRule Local_ArenaRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> Local_ItemQuickMoveExceptionIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalOtomoLoadoutData> Local_OtomoLoadoutSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, int32> Local_MaxFriendshipPalIds;
    
    UPalPlayerLocalRecordData();

    UFUNCTION(BlueprintCallable)
    void ResetQuickStackExceptList();
    
    UFUNCTION(BlueprintCallable)
    void RemoveQuickStackExceptId(const FName StaticItemId);
    
    UFUNCTION(BlueprintCallable)
    bool AddQuickStackExceptId(const FName StaticItemId);
    
};

