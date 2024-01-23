#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalGuildPlayerInfo.h"
#include "PalUIGuildMemberDisplayInfo.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIGuildMenu.generated.h"

class UPalGroupGuildBase;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIGuildMenu : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIGuildMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void RequestExitGuild();
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeGuildName(const FString& NewGuildName);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeAdmin(const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable)
    void RequestBanPlayer(const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedMemberInfo_Binded(const UPalGroupGuildBase* Guild, const FGuid& PlayerUId, const FPalGuildPlayerInfo& PlayerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedMemberInfo(const FGuid& PlayerUId, const FPalUIGuildMemberDisplayInfo& PlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedGuildName_Binded(const FString& NewGuildName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedGuildName(const FString& NewGuildName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemovedMemberInfo(const FGuid& PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistPlayer(const FGuid& PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAdminLocalPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalGroupGuildBase* GetMyGuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGuildName(FString& OutGuildName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGuildMemberInfo(TMap<FGuid, FPalUIGuildMemberDisplayInfo>& OutDisplayInfoMap) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAdminPlayerUId(FGuid& OutAdminPlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExitGuild();
    
};

