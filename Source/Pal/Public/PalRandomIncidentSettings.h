#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "PalRandomIncidentSettings.generated.h"

class APalRandomIncidentObjectPlacement;
class UDataTable;
class UPalRandomIncidentActionBase;

USTRUCT(BlueprintType)
struct FPalRandomIncidentSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MonsterSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NPCSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExcludeOtherPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalRandomIncidentActionBase> action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalRandomIncidentObjectPlacement> ObjectPlacement;
    
    PAL_API FPalRandomIncidentSettings();
};

