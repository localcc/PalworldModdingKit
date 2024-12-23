#pragma once
#include "CoreMinimal.h"
#include "PalLabResearchMasterData.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectLabModel.generated.h"

class UPalGuildLab;
class UPalMapObjectLabModel;
class UPalUserWidgetOverlayUI;
class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectLabModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectLabModel*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateCurrentResearchDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentResearchId, meta=(AllowPrivateAccess=true))
    FName CurrentResearchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> UIMenuClass;
    
public:
    UPalMapObjectLabModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestStartResearch_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelResearch_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCurrentResearchProgress_ServerInternal(UPalGuildLab* OwnerGuildLab);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCurrentResearch_ServerInternal(UPalGuildLab* OwnerGuildLab);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentResearchId();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishResearchWork_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableAfterSpawned_ServerInternal(UPalMapObjectConcreteModelBase* Model);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentResearchWorkAmountInfo(float& Current, float& Required, bool& bCompleted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentResearch(FPalLabResearchMasterData& OutData, int32& RequireRank) const;
    
};

