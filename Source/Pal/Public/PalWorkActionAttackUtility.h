#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalFoliageIdentifiableInfo.h"
#include "PalWorkActionAttackUtility.generated.h"

class AActor;
class APalCharacter;
class UAnimMontage;

UCLASS(Blueprintable)
class UPalWorkActionAttackUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalWorkActionAttackUtility();

    UFUNCTION(BlueprintCallable)
    static void ProcessDamageWorkActionAttack_Foliage(APalCharacter* Invoker, const FPalFoliageIdentifiableInfo& TargetFoliage, const FVector LocationOffset);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessDamageWorkActionAttack(APalCharacter* Invoker, AActor* TargetActor, const FVector LocationOffset, const float CollisionRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasWorkActionAttackNotify(const UAnimMontage* TargetMontage);
    
};

