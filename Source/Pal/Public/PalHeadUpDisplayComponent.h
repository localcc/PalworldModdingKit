#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PalHeadUpDisplayComponent.generated.h"

class APalCharacter;
class UPalCharacterParameterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalHeadUpDisplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadUpOffset;
    
public:
    UPalHeadUpDisplayComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateInvaderHUD();
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowInvaderHUD();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePossessItem(UPalCharacterParameterComponent* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateOwnerCharacterGroupId(const FGuid& GroupId);
    
    UFUNCTION(BlueprintCallable)
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
};

