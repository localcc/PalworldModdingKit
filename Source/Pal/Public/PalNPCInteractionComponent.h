#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalIncidentTalkType.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "Templates/SubclassOf.h"
#include "PalNPCInteractionComponent.generated.h"

class AActor;
class APalPlayerCharacter;
class UDataTable;
class UPalNPCInteractCondition;
class UPalNPCInteractConditionFunctions;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNPCInteractionComponent : public UActorComponent, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NPCInteractionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NPCInteractConditionConstValDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalNPCInteractConditionFunctions> ConditionFunctionClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EPalIncidentTalkType> TalkTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalNPCInteractCondition*> InteractConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalNPCInteractConditionFunctions* ConditionFunctions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisableTalk, meta=(AllowPrivateAccess=true))
    bool bDisableTalk;
    
public:
    UPalNPCInteractionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DisableTalk();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void EndTalk(APalPlayerCharacter* TalkPlayer);
    
    UFUNCTION(BlueprintCallable)
    void DebugInteractConditionString(const FString& testText);
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    

    // Fix for true pure virtual functions not being implemented
};

