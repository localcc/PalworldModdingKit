#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalRecruiterComponent.generated.h"

class APalPlayerCharacter;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalRecruiterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPalRecruited);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter PalSaveParameter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPalRecruited OnRecruited;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCreateRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalPlayerCharacter> RequestPlayerWeak;
    
public:
    UPalRecruiterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetupPal(int32 BaseCampLevel, const UDataTable* Table);
    
    UFUNCTION(BlueprintCallable)
    void RecruitPal(const FGuid& RequestPlayerUId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedRecruitedPal(FPalInstanceID CreatedPalInstanceID);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatedDropPal(FPalInstanceID CreatedPalInstanceID);
    
public:
    UFUNCTION(BlueprintCallable)
    void DropPal();
    
};

