#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalGamePlayerDataSaveInterface.h"
#include "PalInstanceID.h"
#include "PalPlayerClassStructSet.h"
#include "PalWorldSubsystem.h"
#include "PalPlayerManager.generated.h"

class UPalIndividualCharacterHandle;
class UPalLoginPlayer;
class UPalPlayerAccount;

UCLASS(Blueprintable)
class UPalPlayerManager : public UPalWorldSubsystem, public IPalGamePlayerDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerAccountDelegate, UPalPlayerAccount*, PlayerAccount);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPlayerClassStructSet PlayerClassStructSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalPlayerAccount*> PlayerAccountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalLoginPlayer*> LoginPlayerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, UPalIndividualCharacterHandle*> HoldingNotYetLoginPlayerHandleMap;
    
public:
    UPalPlayerManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedIndividualHandleByAppliedSaveData_ServerInternal(FPalInstanceID IndividualId);
    

    // Fix for true pure virtual functions not being implemented
};

