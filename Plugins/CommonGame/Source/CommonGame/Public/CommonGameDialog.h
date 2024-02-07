#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "CommonGameDialog.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONGAME_API UCommonGameDialog : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UCommonGameDialog();

};

