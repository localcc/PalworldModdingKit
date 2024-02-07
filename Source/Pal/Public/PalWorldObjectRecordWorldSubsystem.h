#pragma once
#include "CoreMinimal.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalWorldObjectRecordWorldSubsystem.generated.h"

class UObject;
class UPalWorldObjectRecorderBase;

UCLASS(Blueprintable)
class PAL_API UPalWorldObjectRecordWorldSubsystem : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UPalWorldObjectRecorderBase*> RecorderMap;
    
public:
    UPalWorldObjectRecordWorldSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalWorldObjectRecorderBase* BP_GetRecorder(const UObject* WorldContextObject, const TSubclassOf<UPalWorldObjectRecorderBase> TargetClass);
    

    // Fix for true pure virtual functions not being implemented
};

