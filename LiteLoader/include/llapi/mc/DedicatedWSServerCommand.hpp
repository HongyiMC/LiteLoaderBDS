/**
 * @file  MC/DedicatedWSServerCommand.hpp
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
 * @brief MC class DedicatedWSServerCommand.
 *
 */
class DedicatedWSServerCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDWSSERVERCOMMAND
public:
    class DedicatedWSServerCommand& operator=(class DedicatedWSServerCommand const &) = delete;
    DedicatedWSServerCommand(class DedicatedWSServerCommand const &) = delete;
    DedicatedWSServerCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DedicatedWSServerCommand();
    /**
     * @hash   -501085898
     * @vftbl  1
     * @symbol ?execute@DedicatedWSServerCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   182851791
     * @symbol ?setup@DedicatedWSServerCommand@@SAXAEAVCommandRegistry@@AEAVIMinecraftApp@@@Z
     */
    MCAPI static void setup(class CommandRegistry &, class IMinecraftApp &);

//private:

private:
    /**
     * @hash   -2107299390
     * @symbol ?mApp@DedicatedWSServerCommand@@0PEAVIMinecraftApp@@EA
     */
    MCAPI static class IMinecraftApp * mApp;

};