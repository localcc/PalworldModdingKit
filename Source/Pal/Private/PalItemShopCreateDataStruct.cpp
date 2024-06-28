#include "PalItemShopCreateDataStruct.h"

FPalItemShopCreateDataStruct::FPalItemShopCreateDataStruct() {
    this->ProductType = EPalItemShopProductType::Invalid;
    this->OverridePrice = 0;
    this->BuyRate = 0.00f;
    this->SellRate = 0.00f;
    this->Stock = 0;
}

