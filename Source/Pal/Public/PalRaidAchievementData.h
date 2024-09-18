#pragma once
#include "CoreMinimal.h"
#include "PalRaidAchievementData.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidAchievementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CharacterIDList;
    
    PAL_API FPalRaidAchievementData();
};

