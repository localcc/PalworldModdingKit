#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCrimeStateInfo.h"
#include "PalInstanceID.h"
#include "PalSystemInitializeInterface.h"
#include "PalWorldSecurityWantedStateInfo.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalWorldSecuritySystem.generated.h"

class APalTriggerAreaBase;
class UPalIndividualCharacterHandle;
class UPalWorldSecurityCrimeInstance;
class UPalWorldSecurityLawBase;

UCLASS(Blueprintable, Config=Game)
class PAL_API UPalWorldSecuritySystem : public UPalWorldSubsystem, public IPalSystemInitializeInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReportCriminalDelegate, UPalIndividualCharacterHandle*, CriminalHandle, FPalWorldSecurityWantedStateInfo, WantedStateInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReleaseWantedDelegate, UPalIndividualCharacterHandle*, CriminalHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegisterdAreaTriggerDelegate, APalTriggerAreaBase*, TriggerBase);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReportCriminalDelegate OnReportCriminalDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReleaseWantedDelegate OnReleaseWantedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegisterdAreaTriggerDelegate OnRegisterdAreaTriggerDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LawClassDirectoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalWorldSecurityLawBase*> Laws;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, FPalCrimeStateInfo> IndividualCrimeStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, FPalWorldSecurityWantedStateInfo> IndividualWantedStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalWorldSecurityCrimeInstance*> CrimeInstanceMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APalTriggerAreaBase>> WeakTriggerAreaList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalIndividualCharacterHandle*> CriminalMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPalWorldSecurityLawBase>> LawArray;
    
    UPalWorldSecuritySystem();

    UFUNCTION(BlueprintCallable)
    void ReportCriminal(UPalIndividualCharacterHandle* CriminalHandle, UPalIndividualCharacterHandle* ReporterHandle);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWanted(UPalIndividualCharacterHandle* CriminalHandle);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCrime(UPalIndividualCharacterHandle* CriminalHandle, const FGuid& CrimeInstanceId);
    
    UFUNCTION(BlueprintCallable)
    APalTriggerAreaBase* GetNearestTriggerArea(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCrimeIdByCrimeInstanceId(const FGuid& CrimeInstanceId);
    

    // Fix for true pure virtual functions not being implemented
};

