#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPalStorageModel.generated.h"

class AActor;
class UPalBaseCampModel;
class UPalGuildPalStorage;
class UPalIndividualCharacterHandle;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UPalMapObjectPalStorageModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnedCharacterDelegate, FPalInstanceID, IndividualId, int32, PhantomId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnedCharacterDelegate OnSpawnedCharacterDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalInstanceID> SpawnedIndividualIds;
    
public:
    UPalMapObjectPalStorageModel();
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateGuildPalStorage_ServerInternal(UPalBaseCampModel* BaseCampModel, UPalGuildPalStorage* GuildPalStorage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerInteract_BP(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedPhantomCharacter(FPalInstanceID IndividualId, int32 PhantomId);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEndCageWalls(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBeginCageWalls(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnDroppedCharacterToPhantom(FPalInstanceID IndividualId, int32 PhantomId);
    
    UFUNCTION(BlueprintCallable)
    void OnAddGuildPalStorage_ServerInternal(UPalIndividualCharacterHandle* NewCharacter);
    
};

