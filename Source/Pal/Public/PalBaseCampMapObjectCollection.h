#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalBaseCampMapObjectCollection.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalBaseCampMapObjectCollection : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectInstanceDelegate, UPalMapObjectModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectConcreteModelDelegate, UPalMapObjectConcreteModelBase*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectInstanceDelegate OnRegisteredMapObjectInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectConcreteModelDelegate OnAvailableConcreteModelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectConcreteModelDelegate OnNotAvailableConcreteModelDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> MapObjectInstanceIds;
    
public:
    UPalBaseCampMapObjectCollection();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableConcreteModel(UPalMapObjectConcreteModelBase* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnDisposeMapObject(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableConcreteModel(UPalMapObjectConcreteModelBase* Model);
    
};

