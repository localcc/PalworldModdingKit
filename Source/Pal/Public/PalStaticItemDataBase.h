#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalDropItemType.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "Templates/SubclassOf.h"
#include "PalStaticItemDataBase.generated.h"

class AActor;
class UPalDynamicItemDataBase;
class UStaticMesh;
class UTexture2D;

// DefaultToInstanced and EditInlineNew is necessary for editing DA_StaticItemDataAsset in the Editor. Thank you Zylox and Narknon!
UCLASS(DefaultToInstanced, Blueprintable, EditInlineNew)
class UPalStaticItemDataBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemBaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalItemTypeA TypeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalItemTypeB TypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalDynamicItemDataBase> DynamicItemDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> actorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMeshPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> VisualBlueprintClassSoft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDropItemType DropItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Durability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassiveSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassiveSkill2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassiveSkill3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassiveSkill4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorruptionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideNameMsgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideDescMsgID;
    
public:
    UPalStaticItemDataBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool UseItem(UPalDynamicItemDataBase* DynamicItemData, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorruptible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDynamicItemClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TSoftClassPtr<AActor> GetVisualBlueprintClass(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPassiveSkill4() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPassiveSkill3() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPassiveSkill2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPassiveSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNameMsgId(FName& OutMsgID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxStackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UPalDynamicItemDataBase> GetDynamicItemDataClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDescriptionMsgId(FName& OutMsgID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllPassiveSkill(TArray<FName>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AActor> GetActorClass() const;
    
};

