#include "PalAIActionBaseCampUtility.h"

TEnumAsByte<EAIRequestPriority::Type> UPalAIActionBaseCampUtility::GetRequestSoftScriptPriority(const EPalRequestSoftScriptPriorityAdd AddPriority) {
    return EAIRequestPriority::SoftScript;
}

UPalAIActionBaseCampUtility::UPalAIActionBaseCampUtility() {
}

