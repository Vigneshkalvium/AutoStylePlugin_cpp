#include "IActionComponent.h"
#include "AutoStyleActionComponent.h"

class AutoStylePlugin : public CPMUnknown<IActionComponent> {
public:
    AutoStylePlugin(IPMUnknown* boss) : CPMUnknown<IActionComponent>(boss) {}

    virtual void DoAction(IActiveContext* ctx, ActionID actionId, GSysPoint clickPos, IPMUnknown* widget) {
        AutoStyleActionComponent action(this);
        action.DoAction(ctx, actionId, clickPos, widget);
    }
};

CREATE_PMINTERFACE(AutoStylePlugin, kAutoStylePluginImpl)
