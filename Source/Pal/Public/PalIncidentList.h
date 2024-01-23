#pragma once
#include "CoreMinimal.h"
#include "PalIncidentBase.h"
#include "PalIncidentList.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalIncidentList : public UPalIncidentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FirstIncidentIds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIncidentBase*> WaitingIncidents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIncidentBase* CurrentIncident;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIncidentBase*> CompletedIncidents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressCount;
    
public:
    UPalIncidentList();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIncidentProgressed(UPalIncidentBase* PrevIncident, UPalIncidentBase* NextIncident, int32 ProcessCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAllIncidentsCompleted();
    
    UFUNCTION(BlueprintCallable)
    void InsertIncidentToTop(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void InsertIncidentsToTop(const TArray<FName>& IDs);
    
    UFUNCTION(BlueprintCallable)
    void AddIncidents(const TArray<FName>& IDs);
    
    UFUNCTION(BlueprintCallable)
    void AddIncident(const FName& ID);
    
};

