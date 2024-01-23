#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterListForImportanceManager.h"
#include "EPalCharacterImportanceType.h"
#include "PalCharacterImportanceManager.generated.h"

class APalCharacter;
class APalNPCSpawnerBase;
class APalPlayerCharacter;

UCLASS(Blueprintable)
class PAL_API UPalCharacterImportanceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> PlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> PlayerList_ForOutsideGet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalCharacterImportanceType, FCharacterListForImportanceManager> CharacterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalNPCSpawnerBase*> SpawnerList;
    
public:
    UPalCharacterImportanceManager();
    UFUNCTION(BlueprintCallable)
    void GetImportantNPC(TArray<APalCharacter*>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void GetAllPlayer(TArray<APalCharacter*>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void GetAllPalCharacter(TArray<APalCharacter*>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void GetAllNPC(TArray<APalCharacter*>& OutArray);
    
};

