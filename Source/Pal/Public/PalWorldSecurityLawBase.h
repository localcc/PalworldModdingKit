#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDataTableRowName_CrimeMasterData.h"
#include "PalWorldSecurityLawBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorldSecurityLawBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_CrimeMasterData CrimeId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvalid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrimeStateMaintainDurationBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotUseReleaseTimer;
    
public:
    UPalWorldSecurityLawBase();
};

