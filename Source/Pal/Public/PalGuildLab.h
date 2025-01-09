#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalFastLabResearchEffectRepInfoArray.h"
#include "PalFastLabResearchRepInfoArray.h"
#include "PalGuildLab.generated.h"

class UPalGuildLab;

UCLASS(Blueprintable)
class PAL_API UPalGuildLab : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalGuildLab*, Lab);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateCurrentResearchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateCurrentResearchProgressDelegateInServer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastLabResearchRepInfoArray ResearchRepInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastLabResearchEffectRepInfoArray ResearchEffectRepInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentResearchId, meta=(AllowPrivateAccess=true))
    FName CurrentResearchId;
    
public:
    UPalGuildLab();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentResearchId(const FName OldValue);
    
};

