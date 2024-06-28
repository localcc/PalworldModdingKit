#pragma once
#include "CoreMinimal.h"
#include "PalSkinDataBase.h"
#include "PalSkinDataArmor.generated.h"

class UAnimInstance;
class USkeletalMesh;

UCLASS(Blueprintable)
class UPalSkinDataArmor : public UPalSkinDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<USkeletalMesh>> ArmorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UAnimInstance>> ArmorAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> HairAttachSocketNameMap;
    
    UPalSkinDataArmor();

};

