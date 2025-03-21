#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CheatManager.h"
#include "PalEditorEnemyCampCreateCheatExtension.generated.h"

UCLASS(Blueprintable)
class UPalEditorEnemyCampCreateCheatExtension : public UCheatManagerExtension {
    GENERATED_BODY()
public:
    UPalEditorEnemyCampCreateCheatExtension();

    UFUNCTION(BlueprintCallable, Exec)
    void InstallBuildObject(const FName BuildObjectId, const FVector& Location, const float Yaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateEnemyCampBlueprintByLevelInstalled(const FString& BlueprintDataName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearLevelAndLoadEnemyCampBlueprint(const FString& BlueprintDataName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearEnemyCampCreatorLevel();
    
};

