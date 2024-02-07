#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommonSession_SearchResult.generated.h"

UCLASS(Blueprintable)
class COMMONUSER_API UCommonSession_SearchResult : public UObject {
    GENERATED_BODY()
public:
    UCommonSession_SearchResult();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStringSetting(FName Key, FString& Value, bool& bFoundValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPingInMs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOpenPublicConnections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOpenPrivateConnections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPublicConnections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIntSetting(FName Key, int32& Value, bool& bFoundValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDescription() const;
    
};

