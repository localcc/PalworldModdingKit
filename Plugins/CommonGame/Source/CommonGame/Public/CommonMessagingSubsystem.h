#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "CommonMessagingSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class COMMONGAME_API UCommonMessagingSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UCommonMessagingSubsystem();

};

