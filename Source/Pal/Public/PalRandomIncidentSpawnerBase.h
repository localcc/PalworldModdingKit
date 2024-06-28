#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalRandomIncidentSpawnerAreaType.h"
#include "EPalRandomIncidentSpawnerStatus.h"
#include "PalRandomIncidentWalkPathReferenceData.h"
#include "Templates/SubclassOf.h"
#include "PalRandomIncidentSpawnerBase.generated.h"

class ACharacter;
class APalPlayerCharacter;
class UPalIncidentBase;
class UPalIncidentDynamicParameterRandom;
class UPalRandomIncidentLotteryBase;

UCLASS(Blueprintable)
class PAL_API APalRandomIncidentSpawnerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalRandomIncidentWalkPathReferenceData> WalkPointRefarences;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalRandomIncidentLotteryBase> LotteryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTimeMinute;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CoolDownTimeSecRemain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalRandomIncidentSpawnerAreaType, float> AreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIncidentBase* ExecIncident;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRandomIncidentSpawnerStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIncidentDynamicParameterRandom* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalRandomIncidentLotteryBase* Lottery;
    
public:
    APalRandomIncidentSpawnerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateStatusWaitPlayerOutside(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStatusIdle(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStatusExecuting(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStatusCoolDown(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartCoolDown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetStatus(EPalRandomIncidentSpawnerStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaRadius(EPalRandomIncidentSpawnerAreaType AreaType, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIncidentSpawned(UPalIncidentBase* Incident, UPalIncidentDynamicParameterRandom* DynamicParameter);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsInsideArea(EPalRandomIncidentSpawnerAreaType Area, const ACharacter* pPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EPalRandomIncidentSpawnerAreaType, float> GetAreaRadiusAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAreaRadius(EPalRandomIncidentSpawnerAreaType AreaType) const;
    
private:
    UFUNCTION(BlueprintCallable)
    APalPlayerCharacter* FindPlayerInsideArea(EPalRandomIncidentSpawnerAreaType AreaType);
    
    UFUNCTION(BlueprintCallable)
    void EndIncident();
    
    UFUNCTION(BlueprintCallable)
    void DestroyUnuseActors(TArray<AActor*>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void CreateWalkPathList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CollectWalkPoints(const TArray<AActor*>& WalkPoints);
    
private:
    UFUNCTION(BlueprintCallable)
    void CollectChildActors(TArray<AActor*>& OutList);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddWalkPath(const FName& PathName, const TArray<AActor*>& PointList);
    
};

