#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorkAssign.h"
#include "PalWorkAssign_OnlyJoinAndWalkAround.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkAssign_OnlyJoinAndWalkAround : public UPalWorkAssign {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    UPalWorkAssign_OnlyJoinAndWalkAround();
};

