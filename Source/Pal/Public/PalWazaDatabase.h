#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalAdditionalEffectType.h"
#include "EPalStatusID.h"
#include "EPalWazaID.h"
#include "PalWazaDatabaseRaw.h"
#include "PalWazaDatabase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UPalWazaDatabase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WazaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalAdditionalEffectType, EPalStatusID> AdditionalEffectToStatusID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WazaMasterLevel_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WazaMasterTamago_DataTable;
    
public:
    UPalWazaDatabase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistMasterrableWaza_BetweenLevel(FName CharacterID, int32 StartLevel, int32 EndLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMasterrableWaza_BetweenLevel(FName CharacterID, int32 StartLevel, int32 EndLevel, TMap<EPalWazaID, int32>& OutMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindWazaForBP(EPalWazaID Type, FPalWazaDatabaseRaw& OutData);
    
};

