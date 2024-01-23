#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NetworkSpawnActorDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FNetworkSpawnActorDelegate, FGuid, SpawnGUID, AActor*, SpawnActor);

