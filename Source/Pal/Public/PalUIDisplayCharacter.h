#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalUIDisplayCharacter.generated.h"

class UPalSkeletalMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class PAL_API APalUIDisplayCharacter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalSkeletalMeshComponent* PalSkeletalMeshComponent;
    
    APalUIDisplayCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void GetHairBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void GetEyeBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void GetBrowBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void GetBodyBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharacterMakeInfoFromPlayerData();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharacterMakeInfo(const FPalPlayerDataCharacterMakeInfo& MakeInfo);
    
};

