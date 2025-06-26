#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalCharacterSlotId.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DeliveryPal.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_DeliveryPal : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalMonsterData> RequirePalIdArray_OR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PassiveSkillData> RequirePassiveIdArray_OR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWorkSuitability> RequireWorkSuitabilityArray_OR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 requireNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DeliveredCount, meta=(AllowPrivateAccess=true))
    int32 DeliveredCount;
    
public:
    UPalQuestBlock_DeliveryPal();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DeliveredCount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidDeliveryPal(const FPalCharacterSlotId& CheckSlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainDeliveryNum() const;
    
    UFUNCTION(BlueprintCallable)
    void Delivery(const TArray<FPalCharacterSlotId>& DeliveryPalSlotIdArray);
    
};

