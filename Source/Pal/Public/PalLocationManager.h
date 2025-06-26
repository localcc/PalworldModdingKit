#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCustomMarkerSaveData.h"
#include "PalWorldSubsystem.h"
#include "PalLocationManager.generated.h"

class UPalLocationBase;
class UPalLocationPoint;

UCLASS(Blueprintable)
class UPalLocationManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLocationDelegate, const FGuid&, LocationId, UPalLocationBase*, Location);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomMarkerDelegate, const FGuid&, MarkerId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationDelegate OnAddedLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationDelegate OnRemoveLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationDelegate OnAddedLocationForCompass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationDelegate OnRemoveLocationForCompass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomMarkerDelegate OnCustomMarkerChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalLocationBase*> LocationMapInServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalLocationBase*> LocationMapInLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalLocationBase*> LocationMapCombined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalCustomMarkerSaveData> CustomMarkers;
    
public:
    UPalLocationManager();
    UFUNCTION(BlueprintCallable)
    void RemoveLocalCustomMarker(const FGuid& MarkerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLocationPoint* GetLocationPoint(const FGuid& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGuid, UPalLocationBase*> GetLocationMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLocationBase* GetLocation(const FGuid& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGuid, FPalCustomMarkerSaveData> GetCustomMarkers() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeCustomMarkerType(const FGuid& MarkerrId, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddLocalCustomMarker(FVector IconLocation, int32 IconType);
    
};

