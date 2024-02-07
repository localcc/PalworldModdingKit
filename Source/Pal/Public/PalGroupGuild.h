#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalFastGuildPlayerInfoRepInfoArray.h"
#include "PalGroupGuildBase.h"
#include "PalGroupGuild.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalGroupGuild : public UPalGroupGuildBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastGuildPlayerInfoRepInfoArray PlayerInfoRepInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid AdminPlayerUId;
    
public:
    UPalGroupGuild();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnChangedGuildMemberNickName(UPalIndividualCharacterParameter* Parameter, const FString& NickName);
    
};

