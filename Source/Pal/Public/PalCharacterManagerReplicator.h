#pragma once
#include "CoreMinimal.h"
#include "CharacterParameterRepInfo.h"
#include "FastCharacterParameterRepInfoArray.h"
#include "PalGameStateReplicatorBase.h"
#include "PalCharacterManagerReplicator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPalCharacterManagerReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnPep_CharacterParameterInfos, meta=(AllowPrivateAccess=true))
    FFastCharacterParameterRepInfoArray CharacterParameterInfosFast;
    
public:
    UPalCharacterManagerReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnPreReplicatedRemoveItem(const FCharacterParameterRepInfo& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnPostReplicatedChangeItem(const FCharacterParameterRepInfo& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnPostReplicatedAddItem(const FCharacterParameterRepInfo& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnPep_CharacterParameterInfos();
    
};

