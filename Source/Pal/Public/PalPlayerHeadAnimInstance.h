#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "PalPlayerHeadAnimInstance.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, NonTransient)
class PAL_API UPalPlayerHeadAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PlayerEyeLocationRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PlayerEyeLocationLeft;
    
public:
    UPalPlayerHeadAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetPlayerEyeLocation(USkeletalMesh* HeadMesh);
    
};

