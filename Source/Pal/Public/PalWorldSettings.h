#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/WorldSettings.h"
#include "Templates/SubclassOf.h"
#include "PalWorldSettings.generated.h"

class UDataLayerAsset;
class UPalArenaWorldSubsystem;
class UPalAudioWorldSubsystem;
class UPalDungeonWorldSubsystem;
class UPalFunnelCharacterManager;
class UPalIncidentSystem;
class UPalInvaderManager;
class UPalOptionSubsystem;
class UPalTimeManager;

UCLASS(Blueprintable)
class PAL_API APalWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalDungeonWorldSubsystem> DungeonWorldSubsystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DungeonCreateInitialLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* FieldEnvironmentDataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAudioWorldSubsystem> AudioWorldSubsystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPalTimerEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalOptionSubsystem> OptionWorldSubsystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalTimeManager> TimeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalInvaderManager> InvaderManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalIncidentSystem> IncidentSystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalFunnelCharacterManager> FunnelCharacterManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalArenaWorldSubsystem> ArenaWorldSubsystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestCharacterMake;
    
    APalWorldSettings(const FObjectInitializer& ObjectInitializer);

};

