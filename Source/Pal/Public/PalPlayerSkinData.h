#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalSkinType.h"
#include "OnApplySkinDelegate.h"
#include "PalSkinInventoryInfo.h"
#include "PalPlayerSkinData.generated.h"

class UPalIndividualCharacterParameter;
class UPalSkinDataBase;

UCLASS(Blueprintable)
class PAL_API UPalPlayerSkinData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SkinInventoryInfo, meta=(AllowPrivateAccess=true))
    FPalSkinInventoryInfo SkinInventoryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerUId, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
public:
    UPalPlayerSkinData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendNewInventoryInfo(FPalSkinInventoryInfo NewInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRespawnPal(UPalIndividualCharacterParameter* IndividualCharacterParameter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveSkin(EPalSkinType SkinType, FName InTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemovePalSkin(UPalIndividualCharacterParameter* IndividualCharacterParameter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RefreshValidSkin(FGuid Guid);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SkinInventoryInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerUId();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LoginComplete_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSkin(FName SkinName) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetHaveSkinListFromType(EPalSkinType InType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetHaveSkinList();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void FinishRefreshValidSkin(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DeleteSkin(FName SkinName);
    
    UFUNCTION(BlueprintCallable)
    void ApplySkin(FName SkinName, FOnApplySkin InEvent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ApplyPalSkin(FName SkinName, UPalIndividualCharacterParameter* IndividualCharacterParameter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddSkin(FName SkinName);
    
};

