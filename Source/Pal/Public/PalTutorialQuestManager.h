#pragma once
#include "CoreMinimal.h"
#include "PalOrderedQuestSaveData.h"
#include "PalQuestManager.h"
#include "PalTutorialQuestManager.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalTutorialQuestManager : public UPalQuestManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalOrderedQuestSaveData> CachedOrderedQuestSaveData;
    
public:
    UPalTutorialQuestManager();
};

