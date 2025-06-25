#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalArenaRank.h"
#include "PalArenaNPCOtomo.h"
#include "PalCharacterStatusRank.h"
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalArenaNPCPresetRow.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaNPCPresetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalArenaRank ArenaRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalHumanData NPCID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_NPCUniqueData UniqueNPCID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TalentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCharacterStatusRank> StatusRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalArenaNPCOtomo> OtomoList;
    
    PAL_API FPalArenaNPCPresetRow();
};

