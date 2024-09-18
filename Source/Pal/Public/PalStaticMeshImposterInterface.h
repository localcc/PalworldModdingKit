#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalStaticMeshImposterStaticMeshInfo.h"
#include "PalStaticMeshImposterInterface.generated.h"

class UStaticMeshComponent;

UINTERFACE(Blueprintable)
class UPalStaticMeshImposterInterface : public UInterface {
    GENERATED_BODY()
};

class IPalStaticMeshImposterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetStaticMeshComponents(TArray<UStaticMeshComponent*>& OutComponents) const;
    
};

