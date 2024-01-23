#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalWorldMapUIDataTableRow.h"
#include "PalWorldMapUIData.generated.h"

class UDataTable;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class PAL_API UPalWorldMapUIData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUnlockedMapDelegate, const FName&, unlockedRegionId, const int32, PlayerId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockedMapDelegate OnUnlockedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* MaskRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> cachedTextureRawData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> unlockedRegionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* worldMapDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName currentPlayMapName;
    
public:
    UPalWorldMapUIData();
    UFUNCTION(BlueprintCallable)
    bool UnlockMap(const FName& regionId, const int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockedMap(const FName& regionId);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockedMapData(TMap<FName, bool>& outMapData);
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentPlayMapUIData(FPalWorldMapUIDataTableRow& OutData);
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentPlayMapName();
    
};

