#pragma once
#include "CoreMinimal.h"
#include "EPalIVisitorNPCAction.h"
#include "PalInvaderDatabaseRow.h"
#include "PalVisitorNPCDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalVisitorNPCDatabaseRow : public FPalInvaderDatabaseRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalIVisitorNPCAction ActionTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSquad;
    
    PAL_API FPalVisitorNPCDatabaseRow();
};

