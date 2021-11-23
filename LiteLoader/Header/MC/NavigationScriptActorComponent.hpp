// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/NavigationScriptActorComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NavigationScriptActorComponent : public ScriptActorComponent {
#include "Extra/NavigationScriptActorComponentAPI.hpp"
public:
    virtual ~NavigationScriptActorComponent();
    virtual class Scripting::Result<bool> getIsAmphibious();
    virtual class Scripting::Result<bool> getAvoidSun();
    virtual class Scripting::Result<bool> getCanPassDoors();
    virtual class Scripting::Result<bool> getCanOpenDoors();
    virtual class Scripting::Result<bool> getCanOpenIronDoors();
    virtual class Scripting::Result<bool> getCanBreakDoors();
    virtual class Scripting::Result<bool> getAvoidWater();
    virtual class Scripting::Result<bool> getAvoidDamageBlocks();
    virtual class Scripting::Result<bool> getCanFloat();
    virtual class Scripting::Result<bool> getCanSink();
    virtual class Scripting::Result<bool> getCanPathOverWater();
    virtual class Scripting::Result<bool> getCanPathOverLava();
    virtual class Scripting::Result<bool> getCanWalkInLava();
    virtual class Scripting::Result<bool> getAvoidPortals();
    virtual class Scripting::Result<bool> getCanWalk();
    virtual class Scripting::Result<bool> getCanSwim();
    virtual class Scripting::Result<bool> getCanBreach();
    virtual class Scripting::Result<bool> getCanJump();
    virtual class Scripting::Result<bool> getCanPathFromAir();
};