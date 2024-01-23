#pragma once
#include "CoreMinimal.h"
#include "EPalIncidentTalkType.h"
#include "PalIncidentDynamicParameter.h"
#include "PalIncidentDynamicParameterTalk.generated.h"

UCLASS(Blueprintable)
class UPalIncidentDynamicParameterTalk : public UPalIncidentDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalIncidentTalkType TalkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequestItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRequestSucceed;
    
    UPalIncidentDynamicParameterTalk();
};

