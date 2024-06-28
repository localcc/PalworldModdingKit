#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalArenaSequenceBase.generated.h"

class UPalArenaInstanceModel;
class UPalArenaSequenceBase;
class UPalArenaSequencer;

UCLASS(Blueprintable)
class UPalArenaSequenceBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndSequence, UPalArenaSequenceBase*, Self);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotWaitClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakEndSequence;
    
public:
    UPalArenaSequenceBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickSequence(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreakSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginSequence();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutsiderSequencer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalArenaSequencer* GetOuterSequencer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalArenaInstanceModel* GetInstanceModel() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSequence();
    
};

