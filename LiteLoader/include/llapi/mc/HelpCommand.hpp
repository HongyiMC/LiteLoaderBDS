/**
 * @file  MC/HelpCommand.hpp
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
 * @brief MC class HelpCommand.
 *
 */
class HelpCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HELPCOMMAND
public:
    class HelpCommand& operator=(class HelpCommand const &) = delete;
    HelpCommand(class HelpCommand const &) = delete;
    HelpCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HelpCommand();
    /**
     * @hash   168414761
     * @vftbl  1
     * @symbol ?execute@HelpCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1323758368
     * @symbol ?setup@HelpCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -758126048
     * @symbol ?getCommandHelp@HelpCommand@@AEBAXAEBVCommandRegistry@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void getCommandHelp(class CommandRegistry const &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1898027952
     * @symbol ?getHelpPage@HelpCommand@@AEBAXAEBVCommandRegistry@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void getHelpPage(class CommandRegistry const &, class CommandOrigin const &, class CommandOutput &) const;

private:

};