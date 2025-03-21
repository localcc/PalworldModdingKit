#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalEditorEnemyCampCreatorSetup.generated.h"

class UPalMapObjectBlueprintDataAsset;

UCLASS(Blueprintable)
class PAL_API APalEditorEnemyCampCreatorSetup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> BuildObjectIconRowNameReplaceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyCampBlueprintDataDirectoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPalMapObjectBlueprintDataAsset>> EnemyCampBlueprintDataAssetArray;
    
public:
    APalEditorEnemyCampCreatorSetup(const FObjectInitializer& ObjectInitializer);

};

