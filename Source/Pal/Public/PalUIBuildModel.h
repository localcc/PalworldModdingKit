#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalBuildObjectTypeA.h"
#include "PalBuildObjectDataSetTypeB.h"
#include "PalUIBuildModel.generated.h"

UCLASS(Blueprintable)
class UPalUIBuildModel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForceBuildPalBoxTextId;
    
public:
    UPalUIBuildModel();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StartDismantleMode(const int32 LastSelectedIndex, bool bFromRadialMenu) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StartBuildObject(const FName BuildObjectId, bool bFromRadialMenu) const;
    
    UFUNCTION(BlueprintCallable)
    void OnOpenMenu();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnConfimAlert_ForceBuildPalBox(const bool bDialogBool);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuildObjectDataArrayForTypeAByTypeB(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectDataSetTypeB>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FinishDismantleMode() const;
    
};

