#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalPalStorageManageRightType.h"
#include "Templates/SubclassOf.h"
#include "PalUIPalStorageManageRightModel.generated.h"

class UPalUIBaseCampWorkerListModel;
class UPalUIOtomoListModel;
class UPalUIPalStorageManageRightModel;

UCLASS(Blueprintable)
class UPalUIPalStorageManageRightModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePageDelegate, UPalUIPalStorageManageRightModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePageDelegate OnUpdatePageDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerBaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalPalStorageManageRightType CurrentPageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIBaseCampWorkerListModel> BaseCampWorkerListClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIBaseCampWorkerListModel* BaseCampWorkerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIOtomoListModel> OtomoListClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIOtomoListModel* OtomoList;
    
public:
    UPalUIPalStorageManageRightModel();
    UFUNCTION(BlueprintCallable)
    void ToPrevPage();
    
    UFUNCTION(BlueprintCallable)
    void ToNextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveToPrev() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveToNext() const;
    
};

