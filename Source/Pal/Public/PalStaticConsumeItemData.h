#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.h"
#include "PalStaticItemDataBase.h"
#include "PalStaticConsumeItemData.generated.h"

UCLASS(Blueprintable)
class UPalStaticConsumeItemData : public UPalStaticItemDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestoreHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestoreSP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestoreSatiety;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestoreSanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID WazaID;
    
public:
    UPalStaticConsumeItemData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWazaID GetWazaID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRestoreSP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRestoreSatiety() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRestoreSanity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRestoreHP() const;
    
};

