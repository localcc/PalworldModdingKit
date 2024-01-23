#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayerGenderParams.h"
#include "PalPlayerGenderChanger.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalPlayerGenderChanger : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGenderParams MaleCharacterParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerGenderParams FemaleCharacterParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEpmtyFamaleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFamale;
    
public:
    UPalPlayerGenderChanger();
};

