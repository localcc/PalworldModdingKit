#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalBaseCampWorkDirectorBattleDefenseModelStashInfo.h"
#include "PalBaseCampWorkerDirectorBattle.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalBaseCampWorkerDirectorBattle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalBaseCampWorkDirectorBattleDefenseModelStashInfo> CannotMoveToDefenseModelInfoMap;
    
public:
    UPalBaseCampWorkerDirectorBattle();

};

