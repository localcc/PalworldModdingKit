#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FixedPoint64.h"
#include "FixedPoint64MathLibrary.generated.h"

UCLASS(Blueprintable)
class UFixedPoint64MathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFixedPoint64MathLibrary();

    UFUNCTION(BlueprintPure)
    static FFixedPoint64 Subtract_FixedPoint64Integer(FFixedPoint64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 Subtract_FixedPoint64Float(FFixedPoint64 A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 Subtract_FixedPoint64FixedPoint64(FFixedPoint64 A, FFixedPoint64 B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_FixedPoint64Integer(FFixedPoint64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_FixedPoint64Float(FFixedPoint64 A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_FixedPoint64FixedPoint64(FFixedPoint64 A, FFixedPoint64 B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint64 Multiply_FixedPoint64Integer(FFixedPoint64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 Multiply_FixedPoint64Float(FFixedPoint64 A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 Multiply_FixedPoint64FixedPoint64(FFixedPoint64 A, FFixedPoint64 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_FixedPoint64Integer(FFixedPoint64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual_FixedPoint64Float(FFixedPoint64 A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual_FixedPoint64FixedPoint64(FFixedPoint64 A, FFixedPoint64 B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_FixedPoint64Integer(FFixedPoint64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less_FixedPoint64Float(FFixedPoint64 A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less_FixedPoint64FixedPoint64(FFixedPoint64 A, FFixedPoint64 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_FixedPoint64Integer(FFixedPoint64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual_FixedPoint64Float(FFixedPoint64 A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual_FixedPoint64FixedPoint64(FFixedPoint64 A, FFixedPoint64 B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_FixedPoint64Integer(FFixedPoint64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater_FixedPoint64Float(FFixedPoint64 A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater_FixedPoint64FixedPoint64(FFixedPoint64 A, FFixedPoint64 B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_FixedPoint64Integer(FFixedPoint64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_FixedPoint64Float(FFixedPoint64 A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_FixedPoint64FixedPoint64(FFixedPoint64 A, FFixedPoint64 B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint64 Divide_FixedPoint64Integer(FFixedPoint64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 Divide_FixedPoint64Float(FFixedPoint64 A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 Divide_FixedPoint64FixedPoint64(FFixedPoint64 A, FFixedPoint64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 Convert_IntToFixedPoint64(int32 Value);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint64 Convert_Int64ToFixedPoint64(int64 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 Convert_FloatToFixedPoint64(float Value);
    
    UFUNCTION(BlueprintPure)
    static int64 Convert_FixedPoint64ToInt64(FFixedPoint64 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Convert_FixedPoint64ToInt(FFixedPoint64 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Convert_FixedPoint64ToFloat(FFixedPoint64 Value);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint64 Add_FixedPoint64Integer(FFixedPoint64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 Add_FixedPoint64Float(FFixedPoint64 A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 Add_FixedPoint64FixedPoint64(FFixedPoint64 A, FFixedPoint64 B);
    
};

