#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalHeatSourceInfo.h"
#include "PalHeatSourceModule.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalHeatSourceModule : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> PlayerList;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> ActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName UnieqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalHeatSourceInfo HeatSourceInfo;
    
public:
    UPalHeatSourceModule();
    UFUNCTION(BlueprintCallable)
    void SetActivate(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayer(AActor* Player);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void InitializeHeatSource(FName SourceName, FPalHeatSourceInfo Info, bool DefaultActive);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayer(AActor* Player);
    
    UFUNCTION(BlueprintCallable)
    void AddActor(AActor* Actor);
    
};

