#include "ImGuiDPIScaleInfo.h"

FImGuiDPIScaleInfo::FImGuiDPIScaleInfo() {
    this->ScalingMethod = EImGuiDPIScaleMethod::ImGui;
    this->Scale = 0.00f;
    this->bScaleWithCurve = false;
}

