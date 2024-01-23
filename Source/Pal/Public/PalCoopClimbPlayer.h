#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EHumanBone.h"
#include "PalCoopClimbPlayer.generated.h"

class APalCharacter;
class UPalAnimInstance;

UCLASS(Blueprintable)
class PAL_API UPalCoopClimbPlayer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartStandAnimeDelegate);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalAnimInstance* PlayerAnime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHumanBone> BoneChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TargetWorldTf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Complete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartStandAnimeDelegate StartStandAnimeDelegate;
    
    UPalCoopClimbPlayer();
    UFUNCTION(BlueprintCallable)
    FTransform UpdateTransform(FTransform Climber, float ProgressSpeed, float LeapPosSpeed, float LeapRotateSpeed, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void InitializeNode(EHumanBone EntryBone, APalCharacter* PlayerCharacter, FTransform Climber);
    
};

