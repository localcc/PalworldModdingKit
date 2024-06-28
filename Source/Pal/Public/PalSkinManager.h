#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalSkinType.h"
#include "OnApplySkinDelegate.h"
#include "PalSkinManager.generated.h"

class APalCharacter;
class UPalSkinDataBase;
class UPalStaticSkinDataAsset;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalSkinManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStaticSkinDataAsset* SkinDataAsset;
    
public:
    UPalSkinManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPalCharacterClass(FName SkinName, bool bIsBoss, TSoftClassPtr<APalCharacter>& OutCharacterClass);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetHaveSkinListFromType(FGuid InPlayerUId, EPalSkinType InType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetHaveSkinList(FGuid InPlayerUId);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetAllSkinListFromType(EPalSkinType InType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetAllSkinList();
    
    UFUNCTION(BlueprintCallable)
    void ApplySkin(FGuid InPlayerUId, FName SkinName, FOnApplySkin InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddSkin(FGuid InPlayerUId, FName SkinName);
    
};

