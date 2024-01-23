#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalLogType.h"
#include "PalCoopSkillModuleBase.generated.h"

class APalCharacter;
class UPalPartnerSkillParameterComponent;

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillModuleBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalLogType ExecuteLog;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter* OwnerCharacter;
    
public:
    UPalCoopSkillModuleBase();
protected:
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetTrainerCoopFlag(bool IsCoop);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSkillOverheat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UPalPartnerSkillParameterComponent* PartnerSkillComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwnerRank() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetOwner() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void AddSkillLog();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

