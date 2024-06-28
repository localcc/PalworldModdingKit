#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LevelInstance/LevelInstanceActor.h"
#include "EPalArenaPlayerIndex.h"
#include "PalArenaBattleFormation.h"
#include "PalArenaResultFormation.h"
#include "PalArenaLevelInstance.generated.h"

class UShapeComponent;

UCLASS(Blueprintable)
class PAL_API APalArenaLevelInstance : public ALevelInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleAreaRadius;
    
public:
    APalArenaLevelInstance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetReturnLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FPalArenaResultFormation GetResultFormation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetPlayerStartTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetOutAreaVolume(TArray<UShapeComponent*>& OutAreaVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetFloorZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetCeilingZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FPalArenaBattleFormation GetBattleFormation(EPalArenaPlayerIndex ArenaPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    float GetBattleAreaRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetBattleAreaCenter() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckLevelLoad_ServerInternal();
    
};

