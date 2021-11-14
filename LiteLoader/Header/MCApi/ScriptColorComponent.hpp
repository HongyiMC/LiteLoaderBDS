// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptActorComponent.hpp"
class ScriptColorComponent : public ScriptActorComponent {
public:
    virtual ~ScriptColorComponent();
    virtual class Scripting::Result<int> getValue();
    virtual class Scripting::Result<void> setValue(int const&);

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptColorComponent> bind(struct Scripting::Version);
};