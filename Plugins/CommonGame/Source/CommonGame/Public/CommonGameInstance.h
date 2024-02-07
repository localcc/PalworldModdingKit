#pragma once
#include "CoreMinimal.h"
#include "ECommonUserAvailability.h"
#include "ECommonUserPrivilege.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "CommonGameInstance.generated.h"

class UCommonSession_SearchResult;
class UCommonUserInfo;

UCLASS(Abstract, Blueprintable, NonTransient)
class COMMONGAME_API UCommonGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonSession_SearchResult* RequestedSession;
    
public:
    UCommonGameInstance();

    UFUNCTION(BlueprintCallable)
    void HandleSystemMessage(FGameplayTag MessageType, FText Title, FText Message);
    
    UFUNCTION(BlueprintCallable)
    void HandlePrivilegeChanged(const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);
    
};

