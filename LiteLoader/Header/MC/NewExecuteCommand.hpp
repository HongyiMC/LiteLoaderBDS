// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NewExecuteCommand {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEWEXECUTECOMMAND
public:
    class NewExecuteCommand& operator=(class NewExecuteCommand const&) = delete;
    NewExecuteCommand(class NewExecuteCommand const&) = delete;
    NewExecuteCommand() = delete;
#endif

public:
    /*0*/ virtual ~NewExecuteCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI static void setup(class CommandRegistry&, int);

protected:

private:

};