#pragma once
#include "CoreMinimal.h"
#include "PalCharacterStoredParameterId.h"
#include "PalCharacterStoredParameterInfo.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalWorldSubsystem.h"
#include "PalCharacterParameterStorageSubsystem.generated.h"

// todo: they probably have some parameters
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStoredParameterDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRemovedParameterDelegate);

UCLASS(Blueprintable)
class PAL_API UPalCharacterParameterStorageSubsystem : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoredParameterDelegate OnStoredParameterDelegate_ForServer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemovedParameterDelegate OnRemovedParameterDelegate_ForServer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalCharacterStoredParameterId, FPalCharacterStoredParameterInfo> StoredParameterInfoMap;
    
public:
    UPalCharacterParameterStorageSubsystem();


    // Fix for true pure virtual functions not being implemented
};

