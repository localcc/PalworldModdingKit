#include "ThreadSafeFunctionLibrary.h"

UThreadSafeFunctionLibrary::UThreadSafeFunctionLibrary() {
}

void UThreadSafeFunctionLibrary::SetThreadSafeInt32(FThreadSafeInt32& ThreadSafeInt, int32 Value) {
}

void UThreadSafeFunctionLibrary::SetThreadSafeBoolean(FThreadSafeBoolean& ThreadSafeBool, bool Value) {
}

int32 UThreadSafeFunctionLibrary::GetThreadSafeInt32(const FThreadSafeInt32& ThreadSafeInt) {
    return 0;
}

bool UThreadSafeFunctionLibrary::GetThreadSafeBoolean(const FThreadSafeBoolean& ThreadSafeBool) {
    return false;
}


