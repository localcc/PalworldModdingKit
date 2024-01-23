#pragma once
#include "CoreMinimal.h"
#include "PalOptionWorldSaveData.h"
#include "PalUILocalWorldDisplayData.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalWorldBaseInfoData.h"
#include "PalUILocalWorldSelectBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUILocalWorldSelectBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPalWorldBaseInfoData> LoadedBaseInfoMap;
    
public:
    UPalUILocalWorldSelectBase();
protected:
    UFUNCTION(BlueprintCallable)
    bool SelectWorld(const FString& WorldSaveDirectoryName, const FString& WorldName, FPalOptionWorldSaveData& OptionWorldData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorldDisplayInfo(TMap<FString, FPalUILocalWorldDisplayData>& OutDisplayInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalUILocalWorldDisplayData> GetSortedWorldDisplayInfoArray(const TMap<FString, FPalUILocalWorldDisplayData>& DisplayInfoMap);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteWorld(const FString& WorldSaveDirectoryName);
    
};

