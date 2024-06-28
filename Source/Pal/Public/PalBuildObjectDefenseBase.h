#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalBuildObject.h"
#include "Templates/SubclassOf.h"
#include "PalBuildObjectDefenseBase.generated.h"

class UPalAIActionBaseCampDefenseBase;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectDefenseBase : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBaseCampDefenseBase> DefenseAIActionClass;
    
public:
    APalBuildObjectDefenseBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FRotator GetCharacterRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetCharacterLocation() const;
    
};

