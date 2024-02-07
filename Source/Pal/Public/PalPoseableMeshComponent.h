#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "PalPoseableMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalPoseableMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPalPoseableMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBoneTransformByName(FName BoneName, const FTransform& InTransform, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneScaleByName(FName BoneName, FVector InScale3D, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneRotationByName(FName BoneName, FRotator InRotation, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneLocationByName(FName BoneName, FVector InLocation, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    void ResetBoneTransformByName(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetBoneTransformByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    FVector GetBoneScaleByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    FRotator GetBoneRotationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    FVector GetBoneLocationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    void CopyPoseFromSkeletalComponent(USkeletalMeshComponent* InComponentToCopy);
    
};

