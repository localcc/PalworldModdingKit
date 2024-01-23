#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "NiagaraSystemWidget.generated.h"

class ANiagaraUIActor;
class UMaterialInterface;
class UNiagaraSystem;
class UNiagaraUIComponent;

UCLASS(Blueprintable)
class NIAGARAUIRENDERER_API UNiagaraSystemWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraSystemReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMaterialInterface*, UMaterialInterface*> MaterialRemapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TickWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DesiredWidgetSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FakeDepthScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeDepthScaleDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDebugSystemInWorld;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableWarnings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANiagaraUIActor* NiagaraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraUIComponent* NiagaraComponent;
    
public:
    UNiagaraSystemWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateTickWhenPaused(bool NewTickWhenPaused);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNiagaraSystemReference(UNiagaraSystem* NewNiagaraSystem);
    
    UFUNCTION(BlueprintCallable)
    void SetRemapMaterial(UMaterialInterface* OriginalMaterial, UMaterialInterface* RemapMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredWidgetSize(FVector2D NewDesiredSize);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetRemapMaterial(UMaterialInterface* OriginalMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraUIComponent* GetNiagaraComponent();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateSystem();
    
    UFUNCTION(BlueprintCallable)
    void ActivateSystem(bool Reset);
    
};

