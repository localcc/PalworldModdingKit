#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PalBuildObject.h"
#include "PalInstanceID.h"
#include "PalBuildObjectPalStorage.generated.h"

class AActor;
class APalCharacter;
class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;
class UShapeComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class APalBuildObjectPalStorage : public APalBuildObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOverlapAreaDelegate, UPrimitiveComponent*, OverlappedComp, AActor*, OtherActor, UPrimitiveComponent*, OtherComp);
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapAreaDelegate OnOverlapBeginCageArea;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapAreaDelegate OnOverlapEndCageArea;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapAreaDelegate OnOverlapBeginCageWalls;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapAreaDelegate OnOverlapEndCageWalls;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseCampAreaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference AccessPointObjectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference AccessPointMovableRangeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference AccessPointInteractRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ChestObjectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ChestMovableRangeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ChestInteractRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChestWorkableBoundsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChestSlotNum;
    
public:
    APalBuildObjectPalStorage(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySpawnCharacterFX(APalCharacter* TargetActor) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnCharacter(FPalInstanceID IndividualId, int32 PhantomId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetWorkerSpawnLocalTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetFastTravelLocalTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetDisplayCharacterSpawnLocalTransform() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetChestObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoxComponent* GetChestMovableRange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UShapeComponent* GetCageAreaShape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetAccessPointObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoxComponent* GetAccessPointMovableRange();
    
};

