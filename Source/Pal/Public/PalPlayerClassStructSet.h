#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PalPlayerClassStructSet.generated.h"

class UPalPlayerDataCharacterMake;
class UPalPlayerInventoryData;
class UPalPlayerRecordData;
class UPalPlayerSkinData;
class UPalQuestManager;
class UPalWorldMapUIData;

USTRUCT(BlueprintType)
struct FPalPlayerClassStructSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPlayerDataCharacterMake> CharacterMakeDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPlayerRecordData> RecordDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalWorldMapUIData> WorldMapUIDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalQuestManager> LocalQuestManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPlayerInventoryData> InventoryDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPlayerSkinData> PlayerSkinDataClass;
    
    PAL_API FPalPlayerClassStructSet();
};

