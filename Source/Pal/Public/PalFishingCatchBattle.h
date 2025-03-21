#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalFishingCatchBattle.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalFishingCatchBattle : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuccessFightDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuccessCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartQTEDelegate, int32, Min, int32, Max);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMissCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailedFightDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndQTEDelegate, bool, IsSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessCatchBattleDelegate OnSuccessCatchBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissCatchBattleDelegate OnFailedCatchBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessFightDelegate OnSuccessFightDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFailedFightDelegate OnFailedFightDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartQTEDelegate OnStartQTEDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndQTEDelegate OnEndQTEDelegate;
    
    UPalFishingCatchBattle();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQTEActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentQTECursorLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentFishDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentCatchAmount() const;
    
};

