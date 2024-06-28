#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalGroupType.h"
#include "EPalOrganizationType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalGroupCreateParameter.h"
#include "PalGroupOperationDynamicDelegateDelegate.h"
#include "PalGroupOperationWithGroupIdDynamicDelegateDelegate.h"
#include "PalGuildEnterRequestLogInfo.h"
#include "PalInstanceID.h"
#include "PalWorldSubsystem.h"
#include "PalGroupManager.generated.h"

class AActor;
class UObject;
class UPalGroupBase;
class UPalGroupGuildBase;
class UPalGuildRequestFlowBase;

UCLASS(Blueprintable)
class UPalGroupManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalGroupBase*> GroupMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalGroupGuildBase*> GuildMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalOrganizationType, EPalGroupType> StaticOrganizationGroupTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalOrganizationType, FGuid> StaticOrganizationGroupIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalGuildRequestFlowBase*> GuildRequestFlowMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalGuildEnterRequestLogInfo> GuildEnterRequestLogInfoMap;
    
public:
    UPalGroupManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetGuildName(const FGuid& GroupId, FString& OutGuildName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetGroupName(const FGuid& GroupId, FString& OutGroupName) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedGuildRequest_ServerInternal(UPalGuildRequestFlowBase* Flow);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGuild(const AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistGroup(const FString& GroupName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGuid GetOrganizationGroupId(const UObject* WorldContextObject, const EPalOrganizationType OrganizationType);
    
    UFUNCTION(BlueprintCallable)
    void Debug_RequestNewGroup(FPalGroupCreateParameter CreateParam, FPalGroupOperationWithGroupIdDynamicDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void Debug_RequestExitGroup(const FPalInstanceID& IndividualId, FPalGroupOperationDynamicDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void Debug_RequestEnterGroup(const FPalInstanceID& IndividualId, const FGuid& GroupId, FPalGroupOperationDynamicDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void Debug_RequestDisposeGroup(const FGuid& GroupId, FPalGroupOperationDynamicDelegate Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalGroupBase* Debug_GetFirstGroupByType(const EPalGroupType Type) const;
    

    // Fix for true pure virtual functions not being implemented
};

