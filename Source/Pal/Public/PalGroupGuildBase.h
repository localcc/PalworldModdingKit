#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalGroupOrganization.h"
#include "PalGuildPlayerInfo.h"
#include "PalGroupGuildBase.generated.h"

class APalGuildInfo;
class UPalGroupGuildBase;
class UPalGuildPalStorage;
class UPalPlayerAccount;

UCLASS(Abstract, Blueprintable)
class UPalGroupGuildBase : public UPalGroupOrganization {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedGuildNameDelegate, const FString&, NewGuildName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalGroupGuildBase*, Self);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FNotifyPlayerInfoDelegate, const UPalGroupGuildBase*, Self, const FGuid&, PlayerUId, const FPalGuildPlayerInfo&, PlayerInfo);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalGuildPalStorage* PalStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> MapObjectInstanceIds_BaseCampPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BaseCampLevel, meta=(AllowPrivateAccess=true))
    int32 BaseCampLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalGuildInfo> WeakGuildInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Guildname, meta=(AllowPrivateAccess=true))
    FString GuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OldGuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllPlayerNotOnlineAndAlreadyReset;
    
public:
    UPalGroupGuildBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_Guildname();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BaseCampLevel(int32 OldValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintCallable)
    void OnDeletePlayerAccount_ServerInternal(UPalPlayerAccount* DeleteAccount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorkerCapacityLimited(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorkerCapacityNum(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGuildName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseCampMaxNumInGuildSpecLevel(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseCampMaxNumInGuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseCampLevel() const;
    
};

