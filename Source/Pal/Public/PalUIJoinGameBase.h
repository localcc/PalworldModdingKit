#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "EPalUIServerListFilterType.h"
#include "EPalUIServerListSortType.h"
#include "PalUIServerDataCollectInfo.h"
#include "PalUIServerDisplayData.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIJoinGameBase.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=GameUserSettings)
class PAL_API UPalUIJoinGameBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowIgnoreVersionServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalUIServerListFilterType ServerFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OfficialServerIPRangeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNextPage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalUIServerDisplayData> CachedServerDisplayInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputIPAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCheckedInputPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSelectedRegionName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveConfigCategoryName;
    
public:
    UPalUIJoinGameBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SaveConfigValue();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestOfficialServerIPRange();
    
    UFUNCTION(BlueprintCallable)
    void RequestGetServerList(EPalUIServerListFilterType Type, EPalUIServerListSortType SortType, const FString& Region, int32 PageOffset, const FString& SearchWord);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteOfficialServerIPRange(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteGetServerListEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteFindSessions(bool IsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCompleteFindSessionResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintCallable)
    void ConnectServerByAddress(const FString& Address, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    void ConnectServer(const FPalUIServerDisplayData& ServerDisplayData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CollectServerDisplayInfo(const FPalUIServerDataCollectInfo& CollectInfo, TArray<FPalUIServerDisplayData>& OutServerInfo);
    
};

