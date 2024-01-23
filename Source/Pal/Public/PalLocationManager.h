#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalWorldSubsystem.h"
#include "PalLocationManager.generated.h"

class UPalLocationBase;
class UPalLocationPoint;
class UPalLocationPoint_Custom;

UCLASS(Blueprintable)
class UPalLocationManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLocationDelegate, const FGuid&, LocationId, UPalLocationBase*, Location);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationDelegate OnAddedLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationDelegate OnRemoveLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationDelegate OnAddedLocationForCompass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationDelegate OnRemoveLocationForCompass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalLocationBase*> LocationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalLocationPoint_Custom*> CustomLocations;
    
public:
    UPalLocationManager();
    UFUNCTION(BlueprintCallable)
    void RemoveLocalCustomLocation(const FGuid& LocationId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLocationPoint* GetLocationPoint(const FGuid& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGuid, UPalLocationBase*> GetLocationMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLocationBase* GetLocation(const FGuid& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalCustomLocationCount();
    
    UFUNCTION(BlueprintCallable)
    FGuid AddLocalCustomLocation(FVector IconLocation, int32 IconType);
    
};

