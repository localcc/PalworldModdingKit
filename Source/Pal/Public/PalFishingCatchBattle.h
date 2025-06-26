#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalFishingCatchBattleInfo.h"
#include "PalFishingCatchBattle.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class PAL_API UPalFishingCatchBattle : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuccessFightDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuccessCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMissCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailedFightDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessCatchBattleDelegate OnSuccessCatchBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissCatchBattleDelegate OnFailedCatchBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessFightDelegate OnSuccessFightDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFailedFightDelegate OnFailedFightDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* ActionCharacter;
    
public:
    UPalFishingCatchBattle();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetFishPosX(float PosX);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized(const FPalFishingCatchBattleInfo& Info);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFishPosX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentCatchAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBarPosX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBarSize();
    
};

