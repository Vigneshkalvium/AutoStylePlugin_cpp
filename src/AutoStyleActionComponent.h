#pragma once
#include "IActionComponent.h"

class AutoStyleActionComponent : public CPMUnknown<IActionComponent> {
public:
    AutoStyleActionComponent(IPMUnknown* boss);
    void DoAction(IActiveContext* activeContext, ActionID actionID, GSysPoint point, IPMUnknown* widget);
};
