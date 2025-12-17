#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalSizeType.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalInstanceID.h"
#include "Templates/SubclassOf.h"
#include "PalEditorPalBedConfirmSetup.generated.h"

class APalDebugAutoBaseCampBuilder;
class APalEditorPalBedConfirmNamePlate;
class APalMapObject;
class UPalBaseCampModel;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API APalEditorPalBedConfirmSetup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData PalBedMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalMonsterData> TargetCharacterIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumInLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InstallMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartWithNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSleepOnSideForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreatePlayerMesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollapseIgnoredCharacter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreNocturnal;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreRaidBoss;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTowerBoss;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalSizeType> UsePalSizeTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPalIndividualCharacterHandle*, FGuid> IndividualHandleToMapObjectInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalDebugAutoBaseCampBuilder* DebugAutoBaseCampBuilder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalEditorPalBedConfirmNamePlate> NamePlateActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBaseCampModel* VirtualBaseCamp;
    
public:
    APalEditorPalBedConfirmSetup(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupForSpawnedMapObject(APalMapObject* SpawnedMapObject, const FName CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldMapObjectSpawnable();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedCharacterInServer(FPalInstanceID IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateMapObjectModel(const FGuid& InstanceId, const FName CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatedIndividual(FPalInstanceID IndividualId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateAndInstallPlayerMesh(const APalMapObject* MapObject);
    
};

