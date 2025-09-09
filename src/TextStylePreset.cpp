#include "TextStylePreset.h"

TextStylePreset::TextStylePreset(const PMString& font, int size, PMColor color)
    : fontName(font), fontSize(size), fontColor(color) {}

void TextStylePreset::ApplyTo(ITextModel* model, int32 pos) {
    // Pseudo-implementation for SDK (actual API will differ)
    model->SetFontAt(pos, fontName);
    model->SetFontSizeAt(pos, fontSize);
    model->SetTextColorAt(pos, fontColor);
}
