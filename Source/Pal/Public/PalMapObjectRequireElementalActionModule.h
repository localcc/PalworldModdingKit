#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectRequireElementalActionInterface.h"
#include "PalMapObjectRequireElementalActionModule.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectRequireElementalActionModule : public UPalMapObjectConcreteModelModuleBase, public IPalMapObjectRequireElementalActionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName AssignDefineId;
    
public:
    UPalMapObjectRequireElementalActionModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAssignDefineId() const;
    

    // Fix for true pure virtual functions not being implemented
};

