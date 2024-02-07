#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectSignboardModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class UPalMapObjectSignboardModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSignboardTextDelegate, const FString&, TextValue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSignboardTextDelegate OnUpdateSignboardTextDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Text, meta=(AllowPrivateAccess=true))
    FString SignboardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEditing;
    
public:
    UPalMapObjectSignboardModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestUpdateText(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestEditText(const int32 RequestPlayerId, const bool IsEditing);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateText(const FString& Text);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Text();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenEdit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSignboardText();
    
};

