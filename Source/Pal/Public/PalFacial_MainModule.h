#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalFacialEyeType.h"
#include "EPalFacialMouthType.h"
#include "PalMorphSetting.h"
#include "PalFacial_MainModule.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class PAL_API UPalFacial_MainModule : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EyeMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MouthMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BrowMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalFacialEyeType, FPalMorphSetting> MorphSetting_Eye;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalFacialMouthType, FPalMorphSetting> MorphSetting_Mouth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalFacialEyeType, float> BlendShape_TypeEyeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalFacialMouthType, float> BlendShape_TypeMouthWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> BlendShape_EyeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> BlendShape_MouthWeight;
    
public:
    UPalFacial_MainModule();
    UFUNCTION(BlueprintCallable)
    void Setup_FacialModule(USkeletalMeshComponent* SkeletalMeshComponent);
    
};

