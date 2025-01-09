#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalFastGuildPlayerInfoRepInfoArray.h"
#include "PalGroupGuildBase.h"
#include "PalGuildPlayerInfo.h"
#include "PalGroupGuild.generated.h"

class UPalGuildCharacterTeamMission;
class UPalGuildItemStorage;
class UPalGuildLab;
class UPalIndividualCharacterParameter;
class UPlGuildPlayerInfoFilteringWaiter;

UCLASS(Blueprintable)
class UPalGroupGuild : public UPalGroupGuildBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastGuildPlayerInfoRepInfoArray PlayerInfoRepInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid AdminPlayerUId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPlGuildPlayerInfoFilteringWaiter*> FilteringWaiterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalGuildItemStorage* ItemStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalGuildCharacterTeamMission* CharacterTeamMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalGuildLab* Lab;
    
public:
    UPalGroupGuild();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnFilteredPlayerInfo(UPlGuildPlayerInfoFilteringWaiter* Waiter, const FPalGuildPlayerInfo& FilteredInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedGuildMemberNickName(UPalIndividualCharacterParameter* Parameter, const FString& NickName);
    
};

