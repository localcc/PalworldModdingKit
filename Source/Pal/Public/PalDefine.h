#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "PalDefine.generated.h"

UCLASS(Blueprintable)
class UPalDefine : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalDefine();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag UILayerTag_Modal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag UILayerTag_Menu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu7();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu6();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu5();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu4();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu3();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu2();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag UILayerTag_Game();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_SystemMessageUnlockFastTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_SystemErrorCantMoveNotOwned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_LOG_NeedItemToOpenTreasureBox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_LOG_ConsumeItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_OtomoOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_ObtainLongHold();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_LockedPrivateByNotLocalPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_InputPassword_CannotTry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_ConsumeAndOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_INFINITE();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_DISMANTLING_FAILED_PALBOX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_DISMANTLING_CONFIRM_PALBOX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_ConfirmLockCheckPrivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_CONFIRM_DUNGEON_EXIT();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TextId_UICommon_CONFIRM_DUNGEON_ENTER();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StatusPointName_AddWorkSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StatusPointName_AddPower();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StatusPointName_AddMaxSP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StatusPointName_AddMaxInventoryWeight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StatusPointName_AddMaxHP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StatusPointName_AddCaptureLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> StaticItemIDArray_UnlockPicking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StaticItemID_UnlockTalentCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StaticItemID_UnlockLantern();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StaticItemID_UnlockAutoMeal_Tier(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StaticItemID_UnlockAccessorySlot_02();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StaticItemID_UnlockAccessorySlot_01();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StaticItemID_Money();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Socket_Mouth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Socket_JumpEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Socket_EquipWeapon3();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Socket_EquipWeapon2();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Socket_EquipWeapon1();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Socket_BulletMuzzle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Socket_BodyCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Socket_AimTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName NP_PlayerCenterPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MS_HumanHeadName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MS_HumanHairName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MS_HumanEyeName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MS_HumanClothName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MS_HumanBrowName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MS_HumanBodyName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_TorsoNormalMinIntensityName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_TorsoNormalMaxIntensityName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_PalLitBaseColorName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_LegNormalMinIntensityName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_LegNormalMaxIntensityName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_CharacterMakeSubsurfaceColorName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_CharacterMakeBaseColorSaturationName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_CharacterMakeBaseColorHueName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_CharacterMakeBaseColorBrightnessName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_ArmNormalMinIntensityName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MP_ArmNormalMaxIntensityName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FlagName_OverWeightInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FlagName_DebugBotGuildName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FlagName_CameraOffsetInLiftup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName DecreaseSanityRate_WorkHard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName DecreaseFullStomachRate_WorkHard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName DecreaseFullStomachRate_Work();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BS_TorsoArmMinName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BS_TorsoArmMaxName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BS_LegArmMinName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BS_LegArmMaxName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BS_BodyArmMinName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BS_BodyArmMaxName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ActionNotify_MiningImpactTiming();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ActionNotify_MiningEndTiming();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ActionBBKey_FeedItem();
    
};

