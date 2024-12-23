#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bExistsAssignLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector AssignLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector AssignLocationDirection;
    
public:
    UPalMapObjectRequireElementalActionModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAssignDefineId() const;
    

    // Fix for true pure virtual functions not being implemented
};

