#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalAIActionBase.h"
#include "PalCoopSkillAssaultrifleModeCandidateLocation.h"
#include "PalAIActionCoopAssaultrifleMode.generated.h"

class APalCharacter;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionCoopAssaultrifleMode : public UPalAIActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchEnemyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchLocationRadiusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchLocationRadiusStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchLocationDegStep;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchingLocationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter* ReticleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimStartPoint;
    
public:
    UPalAIActionCoopAssaultrifleMode();
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAimStartPoint(const FVector& OffsetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SearchForTargetAndShootingLocation();
    
private:
    UFUNCTION(BlueprintCallable)
    void ProgressSeraching(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Progress_VerifyShootableEnemy();
    
    UFUNCTION(BlueprintCallable)
    void Progress_CollectShootableLocation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateShootingLocation(APalCharacter* Target, const FVector& ShootLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRoadBlocked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSearching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReached(const FVector& Goal) const;
    
private:
    UFUNCTION(BlueprintCallable)
    APalCharacter* GetTrainer() const;
    
    UFUNCTION(BlueprintCallable)
    void GetTargetEnemies(TArray<APalCharacter*>& Enemies);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetTargetCharacter();
    
private:
    UFUNCTION(BlueprintCallable)
    APalCharacter* GetReticleTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCandidateLocations(float Radius, float DegStep, TArray<FPalCoopSkillAssaultrifleModeCandidateLocation>& Results);
    
    UFUNCTION(BlueprintCallable)
    bool FindLocationToShootEnemy(APalCharacter* Target, FPalCoopSkillAssaultrifleModeCandidateLocation& OutLocation);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearTargetCharacter();
    
};

