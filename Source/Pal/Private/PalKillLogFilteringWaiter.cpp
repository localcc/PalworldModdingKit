#include "PalKillLogFilteringWaiter.h"

UPalKillLogFilteringWaiter::UPalKillLogFilteringWaiter() {
    this->IsKillLog = false;
}

void UPalKillLogFilteringWaiter::OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}


