#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SequentialProcessSequenceSet.h"
#include "SequentialProcessSystem.generated.h"

class USequentialProcessHandle;

UCLASS(Blueprintable)
class PAL_API USequentialProcessSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSequentialProcessSequenceSet> SequenceSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSequenceIndex;
    
public:
    USequentialProcessSystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeProcessState(USequentialProcessHandle* ChangedProcessHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeProcessProgressRate(USequentialProcessHandle* ChangedProcessHandle);
    
};

