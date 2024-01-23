#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "PalPlayerPartyPalHolder.generated.h"

class APalCharacter;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalPlayerPartyPalHolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* FirstOtomoPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* SecondOtomoPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> BenchMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FirstCoolTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondCoolTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
public:
    UPalPlayerPartyPalHolder();
    UFUNCTION(BlueprintCallable)
    void UpdateCoolTimer(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Test_SetClassArray(TArray<TSubclassOf<APalCharacter>> MonsterClassArray);
    
    UFUNCTION(BlueprintCallable)
    void SetUpPartyHolder(float CoolDownTime_Second);
    
    UFUNCTION(BlueprintCallable)
    void RestartCoolTime(bool SecondPal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PawnOtmoIsPartyOtomo(bool SecondPal, UPalIndividualCharacterHandle* IDHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsableCommandSkill(bool SecondPal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyMember(TArray<UPalIndividualCharacterHandle*>& OutPartyMember);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* GetOtomoPal(bool SecondPal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolTimeRate(bool SecondPal);
    
    UFUNCTION(BlueprintCallable)
    void ChangePalSlot(bool SecondPal);
    
};

