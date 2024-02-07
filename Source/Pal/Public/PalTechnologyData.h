#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalItemSlotId.h"
#include "PalTechnologyDataSet.h"
#include "PalTechnologyDataTableRowBase.h"
#include "PalTechnologyRecipeUnlockDataTableRow.h"
#include "PalTechnologyData.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalTechnologyData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateTechnologyPoint, int32, TechnologyPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnlockedAnyTechnology);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewUnlockedUpdateDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateTechnologyPoint OnUpdateTechnologyPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateTechnologyPoint OnUpdateBossTechnologyPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnlockedAnyTechnology OnUnlockedAnyTechnology;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewUnlockedUpdateDelegate OnNewUnlockedUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalTechnologyDataSet technologyDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalTechnologyDataTableRowBase emptyTechnologyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalTechnologyRecipeUnlockDataTableRow emptyRecipeTechnologyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UnlockedTechnologyNameArray, meta=(AllowPrivateAccess=true))
    TArray<FName> UnlockedTechnologyNameArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerPlayerUId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TechnologyPoint, meta=(AllowPrivateAccess=true))
    int32 TechnologyPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BossTechnologyPoint, meta=(AllowPrivateAccess=true))
    int32 bossTechnologyPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> DefaultLockRecipeNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> DefaultLockBuildObjectNameArray;
    
public:
    UPalTechnologyData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RequestUnlockRecipeTechnology(const FName& UnlockTechnologyName);
    
    UFUNCTION(BlueprintCallable)
    void RequestAddTechnologyPointByItem(const FPalItemSlotId& ConsumeSlotId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNewUnlockedFlag(const FName& technologyName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateLocalPlayerLevel(int32 addLevel, int32 nowLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_UnlockedTechnologyNameArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TechnologyPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BossTechnologyPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockRecipeTechnology(const FName& technologyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockCraftRecipe(const FName& craftRecipeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockBuildObject(const FName& BuildObjectId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockableRecipeTechnology(const FName& technologyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewUnlockedTechnology(const FName& technologyName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewUnlockedBuild_Radial(const FName& BuildName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistNewUnlockedTechnology();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTechnologyPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTechnologyName(const FName& technologyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTechnologyDesc(const FName& technologyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalTechnologyDataTableRowBase GetTechlonogyBaseData(const FName& technologyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetRecipeTechnologyRowNameArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalTechnologyRecipeUnlockDataTableRow GetRecipeTechlonogy(const FName& technologyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossTechnologyPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FilteringUnlockedRecipe(const TArray<FName>& OriginalResipeIdArray, TArray<FName>& OutRecipeIdArray);
    
    UFUNCTION(BlueprintCallable)
    void CheckNewUnlockedFlag_Radial(const FName& BuildName);
    
};

