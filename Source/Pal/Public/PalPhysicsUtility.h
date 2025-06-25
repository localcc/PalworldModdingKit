#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/HitResult.h"
#include "EPalTraceTypeQuery.h"
#include "PalPhysicsUtility.generated.h"

class UActorComponent;
class UObject;

UCLASS(Blueprintable)
class UPalPhysicsUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalPhysicsUtility();
    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigation(UActorComponent* Component, bool bAffect);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceSingleByPalTraceType(const UObject* WorldContextObject, FVector Start, FVector End, EPalTraceTypeQuery PalTraceType, bool bTraceComplex, bool bReturnPhysicalMaterial, bool bReturnTraceIndex, FHitResult& HitResult, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
};

