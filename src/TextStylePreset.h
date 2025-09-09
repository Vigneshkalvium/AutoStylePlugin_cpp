#pragma once
#include "PMString.h"
#include "ITextModel.h"

class TextStylePreset {
public:
    TextStylePreset(const PMString& font, int size, PMColor color);

    void ApplyTo(ITextModel* model, int32 pos);

private:
    PMString fontName;
    int fontSize;
    PMColor fontColor;
};
