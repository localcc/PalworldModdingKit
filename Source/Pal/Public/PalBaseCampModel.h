#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalBaseCampState.h"
#include "PalBaseCampSignificanceInfo.h"
#include "PalDamageResult.h"
#include "PalBaseCampModel.generated.h"

class IPalBaseCampAssignableObjectInterface;
class UPalBaseCampAssignableObjectInterface;
class UPalBaseCampEnemyObserver;
class UPalBaseCampFunctionModuleBase;
class UPalBaseCampMapObjectCollection;
class UPalBaseCampModel;
class UPalBaseCampWorkCollection;
class UPalBaseCampWorkerDirector;
class UPalGuildPalStorage;
class UPalIndividualCharacterHandle;
class UPalWorkBase;

UCLASS(Blueprintable)
class UPalBaseCampModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalBaseCampModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBaseCampGuildPalStorageUpdateDelegate, UPalBaseCampModel*, Model, UPalGuildPalStorage*, GuildPalStorage);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnUpdateStatusDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnDisposeDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString BaseCampName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalBaseCampState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float AreaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid GroupIdBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTransform FastTravelLocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalBaseCampWorkerDirector* WorkerDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalBaseCampMapObjectCollection* MapObjectCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalBaseCampWorkCollection* WorkCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBaseCampEnemyObserver* EnemyObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalBaseCampFunctionModuleBase*> ModuleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PlayerUIdsExistsInsideInServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerMapObjectInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Level_InGuildProperty, meta=(AllowPrivateAccess=true))
    int32 Level_InGuildProperty;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid LocationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBaseCampSignificanceInfo SignificanceInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProgressTimeSinceLastTick;
    
public:
    UPalBaseCampModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UpdateLevel_ServerInternal(int32 PlayerId, int32 NewLevel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetRandomPositionInside(const FVector& Origin, const float Radius, FVector& ToLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void ReflectLevel_InGuildProperty_Internal(int32 NewLevel);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Level_InGuildProperty(int32 OldLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnPassedTimeAfterEmptyEnemy();
    
    UFUNCTION(BlueprintCallable)
    void OnFirstAppearEnemy();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageInCampActor(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampWorkCollection* GetWorkCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBaseCampState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetOwnerMapObjectInstanceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGroupIdBelongTo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampEnemyObserver* GetEnemyObserver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBaseCampName() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindWorkAssignableObject(const UPalIndividualCharacterHandle* AssignIndividualHandle, const FGuid& WorkId, const bool bFixedAssign, UPalWorkBase*& FoundObject);
    
    UFUNCTION(BlueprintCallable)
    bool FindNearestAssignableObject(const UPalIndividualCharacterHandle* AssignIndividualHandle, const FTransform& Origin, const float Range, const bool bFixedAssign, TScriptInterface<IPalBaseCampAssignableObjectInterface>& FoundObject);
    
};

