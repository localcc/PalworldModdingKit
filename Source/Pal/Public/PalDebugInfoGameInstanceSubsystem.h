#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PalDebugInfoGameInstanceSubsystem.generated.h"

class UFont;

UCLASS(Blueprintable)
class PAL_API UPalDebugInfoGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* FontObject;
    
public:
    UPalDebugInfoGameInstanceSubsystem();
};

