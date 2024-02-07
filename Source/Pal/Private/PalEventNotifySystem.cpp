#include "PalEventNotifySystem.h"
#include "Templates/SubclassOf.h"

UPalEventNotifySystem::UPalEventNotifySystem() {
}

UPalEventNotifyBase* UPalEventNotifySystem::GetEventNotify(TSubclassOf<UPalEventNotifyBase> Class) const {
    return NULL;
}


