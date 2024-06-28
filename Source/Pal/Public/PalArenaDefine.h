#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalArenaDefine.generated.h"

UCLASS(Blueprintable)
class UPalArenaDefine : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalArenaDefine();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid OutsiderPlayerUid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ArenaPlayerMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ArenaPartyPalMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ArenaOutBattleFlag();
    
};

