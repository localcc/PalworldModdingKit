#include "PalRadarChartWidgetBase.h"

UPalRadarChartWidgetBase::UPalRadarChartWidgetBase() {
    this->drawType = EPalRadarChartDrawType::Polygon;
    this->parameterNum = 3;
    this->isMinMaxValuePerParam = false;
    this->parameterValueMin.AddDefaulted(1);
    this->parameterValueMax.AddDefaulted(1);
    this->borderSize = 1.00f;
    this->isCheckParameterMaxValue = true;
}

void UPalRadarChartWidgetBase::SetParameterValue(int32 Index, int32 Value) {
}

int32 UPalRadarChartWidgetBase::GetMinValue(int32 Index) {
    return 0;
}

int32 UPalRadarChartWidgetBase::GetMaxValue(int32 Index) {
    return 0;
}

void UPalRadarChartWidgetBase::BuildVertexData() {
}


