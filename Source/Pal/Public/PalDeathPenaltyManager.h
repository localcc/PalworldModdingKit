#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalDeathPenaltyList.h"
#include "PalDeathPenaltyManager.generated.h"

class APalPlayerCharacter;

UCLASS(Blueprintable)
class PAL_API UPalDeathPenaltyManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageDeathPenaltyRayStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageDeathPenaltyChestRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageDeathPenaltySpaceWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageDeathPenaltySpaceDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalDeathPenaltyList> DeathPenaMap;
    
public:
    UPalDeathPenaltyManager();
    UFUNCTION(BlueprintCallable)
    void DropDeathPenaltyChest(APalPlayerCharacter* Player);
    
};

