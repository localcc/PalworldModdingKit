#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PalResidentSkillNotifyParameter.h"
#include "PalResidentSkillModuleBase.generated.h"

class APalCharacter;
class UPalPartnerSkillParameterComponent;

UCLASS(Blueprintable)
class PAL_API UPalResidentSkillModuleBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalCharacter> OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalPartnerSkillParameterComponent> PartnerSkillParameterComponent;
    
public:
    UPalResidentSkillModuleBase();

private:
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendNotify_InServer(FName NotifyName, FPalResidentSkillNotifyParameter NotifyParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(const FName& NotifyName, const FPalResidentSkillNotifyParameter& NotifyParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInactivatedAsOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivatedAsOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Initialize(UPalPartnerSkillParameterComponent* PartnerSkillComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPartnerSkillParameterComponent* GetPartnerSkillParameterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetOwner() const;
    
};

