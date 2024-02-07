#include "PalNavigationSystemV1.h"

UPalNavigationSystemV1::UPalNavigationSystemV1() {
    this->SupportedAgents.AddDefaulted(3);
    this->UpdateInvokerCounter = 0;
}


