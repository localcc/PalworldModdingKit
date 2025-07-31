#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DependencyElementInterface.h"
#include "Templates/SubclassOf.h"
#include "PalWorldSubsystem.generated.h"

UCLASS(Blueprintable)
class UPalWorldSubsystem : public UWorldSubsystem, public IDependencyElementInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWorldSubsystem>> PrerequisiteWorldSubsystemList;
    
    UPalWorldSubsystem();


    // Fix for true pure virtual functions not being implemented
};

