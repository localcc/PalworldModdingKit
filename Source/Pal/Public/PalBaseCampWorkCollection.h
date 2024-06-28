#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalBaseCampWorkCollectionStashInfo.h"
#include "PalInstanceID.h"
#include "PalWorkAssignRequirementParameter.h"
#include "PalBaseCampWorkCollection.generated.h"

class UPalBaseCampGroupedWorkBase;
class UPalBaseCampWorkCollectionReplicationList;
class UPalWorkBase;

UCLASS(Blueprintable)
class UPalBaseCampWorkCollection : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkAssignUpdateDelegate, UPalWorkBase*, Work, const FPalInstanceID&, IndividualId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkAssignRequirementDelegate, UPalWorkBase*, Work, const FPalWorkAssignRequirementParameter&, RequirementParameter);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkAssignUpdateDelegate OnUnassignWorkDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> WorkIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalBaseCampGroupedWorkBase*> GroupedWorks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalBaseCampWorkCollectionReplicationList* ReplicationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalBaseCampWorkCollectionStashInfo> CannotMoveToWorkInfoMap;
    
public:
    UPalBaseCampWorkCollection();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUnassignWork_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnRequiredAssign_ServerInternal(UPalWorkBase* Work, const FPalWorkAssignRequirementParameter& RequirementParameter);
    
};

