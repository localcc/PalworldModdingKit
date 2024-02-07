#pragma once
#include "CoreMinimal.h"
#include "CommonInputBaseTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "CommonUIExtensions.generated.h"

class APlayerController;
class UCommonActivatableWidget;
class ULocalPlayer;
class UUserWidget;

UCLASS(Blueprintable)
class COMMONGAME_API UCommonUIExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCommonUIExtensions();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static FName SuspendInputForPlayer(APlayerController* PlayerController, FName SuspendReason);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ResumeInputForPlayer(APlayerController* PlayerController, FName SuspendToken);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PushStreamedContentToLayer_ForPlayer(const ULocalPlayer* LocalPlayer, FGameplayTag LayerName, TSoftClassPtr<UCommonActivatableWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UCommonActivatableWidget* PushContentToLayer_ForPlayer(const ULocalPlayer* LocalPlayer, FGameplayTag LayerName, TSubclassOf<UCommonActivatableWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PopContentFromLayer(UCommonActivatableWidget* ActivatableWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool IsOwningPlayerUsingTouch(const UUserWidget* WidgetContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool IsOwningPlayerUsingGamepad(const UUserWidget* WidgetContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static ECommonInputType GetOwningPlayerInputType(const UUserWidget* WidgetContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static ULocalPlayer* GetLocalPlayerFromController(APlayerController* PlayerController);
    
};

