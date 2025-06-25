#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalSizeType.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalEditorPalBedMotionConfirmBuildObjectInfo.h"
#include "PalEditorPalBedMotionConfirmSetup.generated.h"

class APalBuildObject;

UCLASS(Blueprintable)
class PAL_API APalEditorPalBedMotionConfirmSetup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_MapObjectData> TargetMapObjectIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalMonsterData> TargetCharacterIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InstallMargin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollapseIgnoredCharacter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBoss;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreNocturnal;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTowerBoss;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalSizeType> UsePalSizeTypes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalEditorPalBedMotionConfirmBuildObjectInfo> PalBedBuildObjectInfoMap;
    
public:
    APalEditorPalBedMotionConfirmSetup(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateCharacterCheckUnitForBed(const FName CharacterID, const FTransform& InstallTransform, const FName MapObjectId, const APalBuildObject* BuildObject);
    
};

