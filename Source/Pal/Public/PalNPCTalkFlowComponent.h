#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlowComponent.h"
#include "PalNPCTalkFlowComponent.generated.h"

class APalCharacter;
class UPalNPCTalkFlowComponent;
class UPalNPCTalkSystem;
class UPalTalkWindowWidgetBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNPCTalkFlowComponent : public UFlowComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreStartFlowDelegate, UPalNPCTalkFlowComponent*, SelfComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndTalkFlowDelegate, UPalNPCTalkFlowComponent*, SelfComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreStartFlowDelegate OnPreStartFlowDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndTalkFlowDelegate OnEndTalkFlowDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalTalkWindowWidgetBase> LaunchTalkWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FGuid> TokenMap_ForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid Token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalNPCTalkSystem* TalkSystem;
    
public:
    UPalNPCTalkFlowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestStartTalkFlow();
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestEndTalkFlow(bool bIsCancel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreStartTalk_BP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishTalkFlow();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNPCTalkSystem* GetTalkSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetTalker() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelTalkFlow();
    
};

