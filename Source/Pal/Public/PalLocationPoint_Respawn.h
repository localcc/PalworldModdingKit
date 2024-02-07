#pragma once
#include "CoreMinimal.h"
#include "PalLocationPointStatic.h"
#include "PalLocationPoint_Respawn.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalLocationPoint_Respawn : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName RespawnPointID;
    
    UPalLocationPoint_Respawn();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

