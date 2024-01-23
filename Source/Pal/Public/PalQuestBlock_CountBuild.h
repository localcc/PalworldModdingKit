#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CountBuild.generated.h"

class UPalMapObjectModel;

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_CountBuild : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData RequireBuildObjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireBuildCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowBuildCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowBlueprintCount;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPalMapObjectModel>> CheckMapObjectModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_CountBuild();
private:
    UFUNCTION(BlueprintCallable)
    void OnTimer_CheckMapObject();
    
    UFUNCTION(BlueprintCallable)
    void OnRepMapObjectModel_Client(UPalMapObjectModel* MapObjectModel);
    
    UFUNCTION(BlueprintCallable)
    void OnAddedMapObjectModel_Server(UPalMapObjectModel* MapObjectModel, const FVector& Vector);
    
};

