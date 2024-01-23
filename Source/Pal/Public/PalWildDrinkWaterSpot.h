#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PalWildDrinkWaterSpot.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalWildDrinkWaterSpot : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsReserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpotActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> PalGoalLocations;
    
public:
    UPalWildDrinkWaterSpot();
    UFUNCTION(BlueprintCallable)
    bool SetAssignPointToMember(TArray<AActor*> MemberList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorLocation();
    
};

