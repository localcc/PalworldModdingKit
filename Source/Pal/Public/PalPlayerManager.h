#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalGamePlayerDataSaveInterface.h"
#include "PalPlayerClassStructSet.h"
#include "PalWorldSubsystem.h"
#include "PalPlayerManager.generated.h"

class UPalLoginPlayer;
class UPalPlayerAccount;

UCLASS(Blueprintable)
class UPalPlayerManager : public UPalWorldSubsystem, public IPalGamePlayerDataSaveInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPlayerClassStructSet PlayerClassStructSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalPlayerAccount*> PlayerAccountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalLoginPlayer*> LoginPlayerMap;
    
public:
    UPalPlayerManager();
    
    // Fix for true pure virtual functions not being implemented
};

