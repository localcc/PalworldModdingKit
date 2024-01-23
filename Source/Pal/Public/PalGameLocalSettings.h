#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UDLSSMode.h"
#include "SceneUtils.h"
#include "EPalOptionGraphicsLevel.h"
#include "PalOptionAudioSettings.h"
#include "PalGameLocalSettings.generated.h"

UCLASS(Blueprintable, Config=GameUserSettings)
class UPalGameLocalSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionAudioSettings AudioSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOptionGraphicsLevel GraphicsLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOptionGraphicsLevel DefaultGraphicsLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunedBenchMark;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAppliedUserSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DedicatedServerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLSSMode DLSSMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GraphicsCommonQuality;
    
    UPalGameLocalSettings();
    UFUNCTION(BlueprintCallable)
    bool RequireBenchMarkScalaBility();
    
};

