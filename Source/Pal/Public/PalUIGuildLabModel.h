#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalWorkSuitability.h"
#include "PalUIGuildLabPassiveEffectInfo.h"
#include "PalUIGuildLabResearchInfo.h"
#include "PalUIGuildLabModel.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalUIGuildLabModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCurrentResearchChangedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentResearchChangedDelegate OnCurrentResearchChanged;
    
    UPalUIGuildLabModel();

    UFUNCTION(BlueprintCallable)
    void RequestStartResearch(const FName ResearchId);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelResearch(const FName ResearchId);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelCurrentResearch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetWorkSuitabilities(TArray<EPalWorkSuitability>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResearchInfoByWorkSuitability(const EPalWorkSuitability WorkSuitability, TArray<FPalUIGuildLabResearchInfo>& OutResearchInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalUIGuildLabResearchInfo GetResearchInfo(const FName ResearchId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentResearchState(float& OutWorkAmount, float& OutRequiredWorkAmount, bool& bCompleted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentProgressingResearchID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CollectCurrentLabResearchEffectInfo(const EPalWorkSuitability TargetWorkSuitability, TArray<FPalUIGuildLabPassiveEffectInfo>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CollectCurrentLabResearchAllEffectInfo(TArray<FPalUIGuildLabPassiveEffectInfo>& OutArray) const;
    
};

