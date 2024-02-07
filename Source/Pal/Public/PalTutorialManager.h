#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalTutorialTriggerConditionType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalUIPalCaptureInfo.h"
#include "PalWorldSubsystem.h"
#include "PalTutorialManager.generated.h"

class UDataTable;
class UPalTutorialTriggerBase;

UCLASS(Blueprintable)
class UPalTutorialManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialTriggerDelegate, FDataTableRowHandle, TutorialMsg);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialTriggerDelegate OnTutorialTriggered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalTutorialTriggerBase*> TutorialTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MsgDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialTriggersDataTable;
    
public:
    UPalTutorialManager();

    UFUNCTION(BlueprintCallable)
    void TutorialTrigger_Common(EPalTutorialTriggerConditionType TriggerType);
    
    UFUNCTION(BlueprintCallable)
    void TutorialTrigger_Capture(FPalUIPalCaptureInfo CaptureInfo, bool CaptureSuccess);
    

    // Fix for true pure virtual functions not being implemented
};

