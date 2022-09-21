/**
 * @file  MC/FunctionCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FunctionCommand.
 *
 */
class FunctionCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUNCTIONCOMMAND
public:
    class FunctionCommand& operator=(class FunctionCommand const &) = delete;
    FunctionCommand(class FunctionCommand const &) = delete;
    FunctionCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FunctionCommand();
    /**
     * @hash   2011072368
     * @vftbl  1
     * @symbol ?execute@FunctionCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -957515488
     * @symbol ?setup@FunctionCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};