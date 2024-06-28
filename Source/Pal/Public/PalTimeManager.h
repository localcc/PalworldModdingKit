#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EPalOneDayTimeType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalTimerHandle.h"
#include "PalWorldSubsystem.h"
#include "PalTimeManager.generated.h"

class APalPlayerCharacter;
class UObject;

UCLASS(Blueprintable)
class PAL_API UPalTimeManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FTimerEventDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNightStartDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNightSkipDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNightEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeSleepingPlayerNumDelegate, int32, Num);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeMinutesDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeHoursDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNightStartDelegate OnNightStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNightEndDelegate OnNightEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNightSkipDelegate OnPreNightSkipDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNightSkipDelegate OnNightSkipDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeHoursDelegate OnChangeHoursDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeMinutesDelegate OnChangeMinutesDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSleepingPlayerNumDelegate OnChangeSleepingPlayerNumDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SleepingPlayerNum;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> SleepingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle NightSkipTimerHandle;
    
public:
    UPalTimeManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_BP(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGameTime_FixDay(const int32 NextHour);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSleepPlayer(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString PalTimeSecondsToString(float InSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSleepingPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugTimeString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDayTimePassRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPalWorldTime_TotalDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPalWorldTime_Second() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPalWorldTime_Minute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPalWorldTime_Hour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPalWorldTime_Day() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPalWorldHoursFloat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalOneDayTimeType GetCurrentDayTimeType() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearTimer(const UObject* WorldContextObject, const FPalTimerHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    FPalTimerHandle AddTimerEventBySpan(const UPalTimeManager::FTimerEventDelegate& Delegate, const float Hours, const float Minutes, const float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void AddSleepPlayer(APalPlayerCharacter* Player);
    

    // Fix for true pure virtual functions not being implemented
};

