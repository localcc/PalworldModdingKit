#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PalInstanceID.h"
#include "PalNetArchive.h"
#include "PalNetworkMulticastGateComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkMulticastGateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkMulticastGateComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendToServer_void(int32 ID, UObject* Instance, FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendToServer_object(int32 ID, UObject* Instance, FName FunctionName, UObject* Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendToServer_int32(int32 ID, UObject* Instance, FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendToServer_FVector(int32 ID, UObject* Instance, FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendToServer_FPalNetArchive(int32 ID, UObject* Instance, FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendToServer_FPalInstanceID(int32 ID, UObject* Instance, FName FunctionName, FPalInstanceID Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendToServer_float(int32 ID, UObject* Instance, FName FunctionName, float Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendToServer_FGuid(int32 ID, UObject* Instance, FName FunctionName, FGuid Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendToServer_bool(int32 ID, UObject* Instance, FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendToALL_void(int32 ID, UObject* Instance, FName FunctionName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendToALL_object(int32 ID, UObject* Instance, FName FunctionName, UObject* Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendToALL_int32(int32 ID, UObject* Instance, FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendToALL_FVector(int32 ID, UObject* Instance, FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendToALL_FPalNetArchive(int32 ID, UObject* Instance, FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendToALL_FPalInstanceID(int32 ID, UObject* Instance, FName FunctionName, FPalInstanceID Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendToALL_float(int32 ID, UObject* Instance, FName FunctionName, float Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendToALL_FGuid(int32 ID, UObject* Instance, FName FunctionName, FGuid Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendToALL_bool(int32 ID, UObject* Instance, FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SendInternal_void(UObject* Instance, FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void SendInternal_object(UObject* Instance, FName FunctionName, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void SendInternal_int32(UObject* Instance, FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SendInternal_FVector(UObject* Instance, FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SendInternal_FPalNetArchive(UObject* Instance, FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable)
    void SendInternal_FPalInstanceID(UObject* Instance, FName FunctionName, FPalInstanceID Value);
    
    UFUNCTION(BlueprintCallable)
    void SendInternal_float(UObject* Instance, FName FunctionName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SendInternal_FGuid(UObject* Instance, FName FunctionName, FGuid Value);
    
    UFUNCTION(BlueprintCallable)
    void SendInternal_bool(UObject* Instance, FName FunctionName, bool Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void Send_void(UObject* Instance, FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void Send_object(UObject* Instance, FName FunctionName, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void Send_int32(UObject* Instance, FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void Send_FVector(UObject* Instance, FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void Send_FPalNetArchive(UObject* Instance, FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable)
    void Send_FPalInstanceID(UObject* Instance, FName FunctionName, FPalInstanceID Value);
    
    UFUNCTION(BlueprintCallable)
    void Send_float(UObject* Instance, FName FunctionName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void Send_FGuid(UObject* Instance, FName FunctionName, FGuid Value);
    
    UFUNCTION(BlueprintCallable)
    void Send_bool(UObject* Instance, FName FunctionName, bool Value);
    
};

