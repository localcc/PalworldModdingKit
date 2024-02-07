#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameUIManagerSubsystem.generated.h"

class UGameUIPolicy;

UCLASS(Abstract, Blueprintable, Config=Game)
class COMMONGAME_API UGameUIManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameUIPolicy* CurrentPolicy;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameUIPolicy> DefaultUIPolicyClass;
    
public:
    UGameUIManagerSubsystem();

};

