#include "AutoStyleActionComponent.h"
#include "ISelectionManager.h"
#include "ITextModel.h"
#include "TextStylePreset.h"
#include "DebugLogger.h" // Custom debug

AutoStyleActionComponent::AutoStyleActionComponent(IPMUnknown* boss)
    : CPMUnknown<IActionComponent>(boss) {}

void AutoStyleActionComponent::DoAction(IActiveContext* context, ActionID actionID,
                                        GSysPoint, IPMUnknown* widget) {
    DebugLogger::Log("AutoStyle invoked.");
    InterfacePtr<ISelectionManager> selectionMgr(context->GetContextSelectionManager());
    if (!selectionMgr) {
        DebugLogger::Log("No SelectionManager found.");
        return;
    }

    InterfacePtr<ITextModel> textModel(selectionMgr->QueryTextModel());
    if (!textModel) {
        DebugLogger::Log("No TextModel found.");
        return;
    }

    int32 start = selectionMgr->GetSelectionStart();
    int32 end = selectionMgr->GetSelectionEnd();

    TextStylePreset stylePreset("Arial", 14, kBlackColor);

    for (int32 idx = start; idx < end; ++idx) {
        stylePreset.ApplyTo(textModel, idx);
    }
    DebugLogger::Log("Style applied to selection.");
}
