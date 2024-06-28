#pragma once
#include "CoreMinimal.h"
#include "PalSkinDataBase.h"
#include "PalSkinDataSkeletalMesh.generated.h"

class UAnimInstance;
class USkeletalMesh;

UCLASS(Blueprintable)
class UPalSkinDataSkeletalMesh : public UPalSkinDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HairAttachSocketName;
    
    UPalSkinDataSkeletalMesh();

};

