#pragma once
#include "CoreMinimal.h"
#include "FoliageType_InstancedStaticMesh.h"
#include "EPalFoliagePresetType.h"
#include "PalFoliageType_InstancedStaticMesh.generated.h"

// todo: this class should not be accessed directly, or stored in a struct without indirection
// todo: fix will come after engine edits
UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalFoliageType_InstancedStaticMesh : public UObject /* : public UFoliageType_InstancedStaticMesh  */ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFoliagePresetType PresetType;
    
public:
    UPalFoliageType_InstancedStaticMesh();
};

