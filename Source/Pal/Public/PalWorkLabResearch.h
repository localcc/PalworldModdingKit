#pragma once
#include "CoreMinimal.h"
#include "PalWorkBase.h"
#include "PalWorkLabResearch.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkLabResearch : public UPalWorkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName ResearchId;
    
public:
    UPalWorkLabResearch();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

