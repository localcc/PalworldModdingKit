#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalPsnManager.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class PAL_API UPalPsnManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCollectedOnlineIds);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangedBlockedUsers);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectedOnlineIds OnCollectedOnlineIds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedBlockedUsers OnChangedBlockedUsers;
    
    UPalPsnManager();

    UFUNCTION(BlueprintCallable)
    void WithOnlineIdForParameter(const UPalIndividualCharacterParameter* InParameter, const FString& InName, FString& outName);
    
    UFUNCTION(BlueprintCallable)
    void WithOnlineIdForHandle(const UPalIndividualCharacterHandle* InHandle, const FString& InName, FString& outName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void WithOnlineId(const FGuid& PlayerUId, const FString& InName, FString& outName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetOnlineId(const FGuid& PlayerUId, FString& OutOnlineId) const;
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayerProfile(const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowCommunicatonRestrictionSystemDialog() const;
    
    UFUNCTION(BlueprintCallable)
    void SetCompleteSetupInGame(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequiredEULA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChatDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlockedUser(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintCallable)
    void GetNickNameWithOnlineID(const FPalIndividualCharacterSaveParameter& SaveParam, FString& outName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLoggedInPlayerNames(TArray<FString>& OutNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEULALanguageCode(FString& LanguageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowUGC(const UPalIndividualCharacterParameter* InParameter) const;
    
    UFUNCTION(BlueprintCallable)
    void AgreeEULA();
    
};

