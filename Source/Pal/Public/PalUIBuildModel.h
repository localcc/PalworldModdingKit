#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalBuildObjectTypeA.h"
#include "EPalBuildObjectTypeForUIDisplay.h"
#include "PalBuildObjectDataSetTypeB.h"
#include "PalBuildObjectDataSetTypeUIDisplay.h"
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
    void StartPaintMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StartDismantleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StartBuildObject(const FName BuildObjectId) const;
    
    UFUNCTION(BlueprintCallable)
    void OnOpenMenu();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnConfimAlert_ForceBuildPalBox(const bool bDialogBool);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuildObjectDataArrayForUIDisplay(const EPalBuildObjectTypeA TypeA, TMap<EPalBuildObjectTypeForUIDisplay, FPalBuildObjectDataSetTypeUIDisplay>& OutMap) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuildObjectDataArrayForTypeAByTypeB(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectDataSetTypeB>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FinishPaintMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FinishDismantleMode() const;
    
};

