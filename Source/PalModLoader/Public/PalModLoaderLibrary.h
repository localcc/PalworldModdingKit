#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalModInfoStruct.h"
#include "PalModLoaderLibrary.generated.h"

UCLASS(Blueprintable)
class PALMODLOADER_API UPalModLoaderLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalModLoaderLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetNeedRestart();
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalEnableMod(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetActiveModList(const TArray<FString>& InModList);
    
    UFUNCTION(BlueprintCallable)
    static void RestartGame(bool bSafeMode);
    
    UFUNCTION(BlueprintCallable)
    static void OpenWorkshopPage();
    
    UFUNCTION(BlueprintCallable)
    static bool IsNeedShowErrorOnNextStart();
    
    UFUNCTION(BlueprintCallable)
    static bool IsNeedRestart();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGlobalEnableMod();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPalModInfoStruct> GetWorkshopModList();
    
    UFUNCTION(BlueprintCallable)
    static FPalModInfoStruct GetWorkshopMod(const FString& InPackageName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetActiveModList();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteMod(FPalModInfoStruct InModInfo);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivateMod(FPalModInfoStruct InModInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateMod(FPalModInfoStruct InModInfo);
    
};

