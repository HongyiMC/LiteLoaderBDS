/**
 * @file  MC/EffectCommand.hpp
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
 * @brief MC class EffectCommand.
 *
 */
class EffectCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EFFECTCOMMAND
public:
    class EffectCommand& operator=(class EffectCommand const &) = delete;
    EffectCommand(class EffectCommand const &) = delete;
    EffectCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EffectCommand();
    /**
     * @hash   -606766263
     * @vftbl  1
     * @symbol ?execute@EffectCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   751893440
     * @symbol ?setup@EffectCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -2045323802
     * @symbol ?clear@EffectCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void clear(class CommandOrigin const &, class CommandOutput &) const;

private:

};