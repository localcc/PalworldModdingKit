#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalLogType.h"
#include "EPalWorkType.h"
#include "PalItemAndNum.h"
#include "PalItemId.h"
#include "PalKillLogDisplayData.h"
#include "PalLogAdditionalData.h"
#include "PalLogInfo_DropPal.h"
#include "PalLogInfo_Skill.h"
#include "PalMealLogDisplayData.h"
#include "PalStaticItemIdAndNum.h"
#include "PalLogUtility.generated.h"

class UObject;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalLogUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalLogUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTextureToAdditionalDataFromStaticItemIDs(const UObject* WorldContextObject, UPARAM(Ref) FPalLogAdditionalData& targetData, const TArray<FName>& StaticItemIds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTextureToAdditionalDataFromStaticItemID(const UObject* WorldContextObject, UPARAM(Ref) FPalLogAdditionalData& targetData, const FName& StaticItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTextureToAdditionalDataFromHandles(const UObject* WorldContextObject, UPARAM(Ref) FPalLogAdditionalData& targetData, const TArray<UPalIndividualCharacterHandle*>& targetHandles);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTextureToAdditionalDataFromHandle(const UObject* WorldContextObject, UPARAM(Ref) FPalLogAdditionalData& targetData, const UPalIndividualCharacterHandle* targetHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTextureToAdditionalDataFromCharacterID(const UObject* WorldContextObject, UPARAM(Ref) FPalLogAdditionalData& targetData, const FName CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CreateLogText(const UObject* WorldContextObject, EPalLogType logType, FText& OutText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FText CreateItemGetLogText(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& ItemIDAndNum);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddWorkerStartWorking_ProductResource_Mining(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FName MapObjectId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddWorkerStartWorking_ProductResource_Deforest(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddWorkerStartWorking_CollectResource(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FName StaticItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddWorkerStartWorking(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const EPalWorkType WorkType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddWorkerStartRepairing(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FName& buildedMapObjectName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddWorkerStartBuilding(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FName& buildedMapObjectName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddWorkerCompleteItemConvertLog(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FPalItemId& ItemId, const int32 Num);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddWorkerCompleteBuildLog(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FName& buildedMapObjectName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddSkillLog(const UObject* WorldContextObject, EPalLogType logType, const FPalLogInfo_Skill& Info);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddMealLog(const UObject* WorldContextObject, const FPalMealLogDisplayData& DisplayData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddItemsGetLog(const UObject* WorldContextObject, const TArray<FPalItemAndNum>& ItemAndNumArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddItemGetLog(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& ItemIDAndNum);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddDropPalLog(const UObject* WorldContextObject, const FPalLogInfo_DropPal& LogInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddDeathLog(const UObject* WorldContextObject, const FPalKillLogDisplayData& DeathLogDisplayData);
    
};

