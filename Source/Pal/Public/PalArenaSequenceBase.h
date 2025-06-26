#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalArenaSequencerOwnerType.h"
#include "GameDateTime.h"
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
    bool bNoSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotWaitClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakEndSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDateTime BeginTime_InServer;
    
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
    EPalArenaSequencerOwnerType GetOwnerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalArenaSequencer* GetOuterSequencer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalArenaInstanceModel* GetInstanceModel() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSequence();
    
};

