#include "ImGuiCanvasSizeInfo.h"

FImGuiCanvasSizeInfo::FImGuiCanvasSizeInfo() {
    this->SizeType = EImGuiCanvasSizeType::Custom;
    this->Width = 0;
    this->Height = 0;
    this->bExtendToViewport = false;
}

