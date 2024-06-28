#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillSearchResultParameter.h"
#include "PalCoopSkillSearchBase.generated.h"

class UPalCoopSkillSearchLocationRegister;
class UPalLocationBase;

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SearchRangeMaxByRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ExtendRangePerSecByRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRangeIgnore;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SearchOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtendRangePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CalledPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCoopSkillSearchResultParameter> SearchResultParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNotFinishAfterSearched;
    
public:
    UPalCoopSkillSearchBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tick(float DeltaTime, UPalCoopSkillSearchLocationRegister* LocationRegister);
    
    UFUNCTION(BlueprintCallable)
    void Terminate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Start(const FVector& Origin, int32 Rank, const FGuid& RequestPlayerUId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveLocationForCompass_BP(const FGuid& LocationId, UPalLocationBase* Location);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRemoveLocationForCompass(const FGuid& LocationId, UPalLocationBase* Location);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddedLocationForCompass_BP(const FGuid& LocationId, UPalLocationBase* Location);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAddedLocationForCompass(const FGuid& LocationId, UPalLocationBase* Location);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSearchRangeIgnore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsContinueProcess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSearchRangeMax() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSearchRangeByRank(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRank() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExtendSearchRangePerSec() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExtendRangePerSecByRank(int32 Rank) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSearchRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void ClearSearchResultParameters();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSearchResultParameter(const FPalCoopSkillSearchResultParameter& ResultParameter);
    
};

