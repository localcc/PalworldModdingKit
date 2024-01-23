#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetHierarchical.h"
#include "PalUserWidgetStackableUI.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPalUserWidgetStackableUI : public UPalUserWidgetHierarchical {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseAkEvent;
    
public:
    UPalUserWidgetStackableUI();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClose();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkAudioEvent* GetOpenAkEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkAudioEvent* GetCloseAkEvent() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

