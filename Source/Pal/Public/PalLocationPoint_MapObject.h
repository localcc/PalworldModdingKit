#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalLocationPoint.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalLocationPoint_MapObject.generated.h"

class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalLocationPoint_MapObject : public UPalLocationPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid MapObjectModelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector InitialLocationCache;
    
public:
    UPalLocationPoint_MapObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnDisposeTarget(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMapObjectName(FName& MapObjectName) const;
    
};

