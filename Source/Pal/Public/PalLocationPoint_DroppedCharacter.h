#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLocationPointStatic.h"
#include "PalLocationPoint_DroppedCharacter.generated.h"

class UPalMapObjectPickableCharacterModelBase;

UCLASS(Blueprintable)
class UPalLocationPoint_DroppedCharacter : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid MapObjectConcreteModelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerPlayerUId;
    
public:
    UPalLocationPoint_DroppedCharacter();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetOwnerPlayerUId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectPickableCharacterModelBase* GetMapObjectConcreteModel() const;
    
};

