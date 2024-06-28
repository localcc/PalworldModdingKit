#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "EPalTribeID.h"
#include "PalPlayerRecordDataRepInfoArray_BoolVal.h"
#include "PalPlayerRecordDataRepInfoArray_IntVal.h"
#include "PalPlayerRecordDataUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPalPlayerRecordDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalPlayerRecordDataUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_TribeIdFlag_ForServer(const UObject* WorldContextObject, UPARAM(Ref) FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const EPalTribeID Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_TribeIdCount_ForServer(const UObject* WorldContextObject, UPARAM(Ref) FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const EPalTribeID Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_RankMaxCount_ForServer(const UObject* WorldContextObject, const FGuid RequestPlayerUId, int32 oldRank, int32 ToRank);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_Int_ForServer(const UObject* WorldContextObject, UPARAM(Ref) FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const FName Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_BossDefeatCount_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const EPalBossType BossType, const EPalBossBattleDifficulty Difficulty, const int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_BossDefeat_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const EPalBossType Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRecordData_Bool_ForServer(const UObject* WorldContextObject, UPARAM(Ref) FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const FName Key, const bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRecordData_TribeIdFlag(const FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const EPalTribeID Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordData_TribeIdCount(const FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const EPalTribeID Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordData_Int(const FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordData_BossDefeatCount(const FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const EPalBossType Key, const EPalBossBattleDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordData_BossDefeat(const FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const EPalBossType Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordData_BoolCount(const FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRecordData_Bool(const FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainsRecordData_TribeIdCount(const FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const EPalTribeID Key);
    
};

