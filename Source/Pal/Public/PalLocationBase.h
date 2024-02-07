#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalLocationType.h"
#include "PalLocationBase.generated.h"

class UPalLocationPoint;

UCLASS(Abstract, Blueprintable)
class UPalLocationBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid CalledPlayerUId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bShowInMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bShowInCompass;
    
public:
    UPalLocationBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLocationPoint* LocationPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowInMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowInCompass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestedPlayer(const FGuid& LocalPlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalLocationType GetType() const;
    
};

