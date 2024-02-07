#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CaptureResult.h"
#include "PalCaptureJudgeObject.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class APalCaptureJudgeObject : public AActor {
    GENERATED_BODY()
public:
    APalCaptureJudgeObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSuccessFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFailedFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFailedByTest(const APalCharacter* Character, FCaptureResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFailedByMP(const APalCharacter* Character, FCaptureResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCaptureSuccess(const APalCharacter* Character, FCaptureResult Result);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ChallengeCapture_ToServer(APalCharacter* Character, float capturePower);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChallengeCapture(APalCharacter* Character, float capturePower);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CaptureResult_ToALL(APalCharacter* Character, FCaptureResult Result);
    
};

