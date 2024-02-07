#include "PalAIActionBaseCampUtility.h"

UPalAIActionBaseCampUtility::UPalAIActionBaseCampUtility() {
}

TEnumAsByte<EAIRequestPriority::Type> UPalAIActionBaseCampUtility::GetRequestSoftScriptPriority(const EPalRequestSoftScriptPriorityAdd AddPriority) {
    return EAIRequestPriority::SoftScript;
}


