// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/KillCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class KillCommand {
#include "Extra/KillCommandAPI.hpp"
public:
    virtual ~KillCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};