#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnGetResultDelegate.h"
#include "OutputErrorDelegateDelegate.h"
#include "SpreadSheetImpoter.generated.h"

class UDataTable;
class USpreadSheetImpoter;

UCLASS(Blueprintable)
class SPREADSHEETTOCSV_API USpreadSheetImpoter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetResult OnGetResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputErrorDelegate ErrorLogger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TargetDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IgnoreRowIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AutoUniqueIdColumnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowNameHashColumnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MetaTagText_IgnoreRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> BlueprintName2ObjectPathColumnNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlueprintNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoticeMessageAtNewRecordImported;
    
    USpreadSheetImpoter();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToCsvStringForLocalizedText(const FString& pickCultureName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToCsvString();
    
    UFUNCTION(BlueprintCallable)
    void PostProcessImport(bool& bAppliedPostProcess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistNewRecord() const;
    
    UFUNCTION(BlueprintCallable)
    static USpreadSheetImpoter* GetRequest(const FName sheetId, const FName sheetName, const FName Key);
    
    UFUNCTION(BlueprintCallable)
    bool FromString(const FString& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CreateSheetUrlString(const FName sheetId, const FName sheetNameId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USpreadSheetImpoter* Create();
    
};

