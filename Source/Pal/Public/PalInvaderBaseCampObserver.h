#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalInvaderBaseCampObserver.generated.h"

class UPalBaseCampModel;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalInvaderBaseCampObserver : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalBaseCampModel* TargetBaseCamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TargetBaseCampID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInvading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTimeFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerInBaseCampTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> PlayerHandlesCache;
    
public:
    UPalInvaderBaseCampObserver();

private:
    UFUNCTION(BlueprintCallable)
    void OnExitCharacter(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterCharacter(UPalIndividualCharacterHandle* Handle);
    
};

