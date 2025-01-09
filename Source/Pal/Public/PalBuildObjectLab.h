#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectLab.generated.h"

class UChildActorComponent;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectLabModel;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectLab : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ResearchSpaceVisualComponent;
    
public:
    APalBuildObjectLab(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateCurrentResearch_ServerInternal(UPalMapObjectLabModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnSetConcreteModelAfterAvailable(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

