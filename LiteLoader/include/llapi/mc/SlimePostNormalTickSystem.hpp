/**
 * @file  MC/SlimePostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SlimePostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEPOSTNORMALTICKSYSTEM
public:
    class SlimePostNormalTickSystem& operator=(class SlimePostNormalTickSystem const &) = delete;
    SlimePostNormalTickSystem(class SlimePostNormalTickSystem const &) = delete;
    SlimePostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@SlimePostNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doSlimePostNormalTickSystem@SlimePostNormalTickSystem@@CAXAEAVStrictEntityContext@@V?$Optional@$$CBV?$FlagComponent@USlimeWasOnGroundPreNormalTick@@@@@@AEAVActorOwnerComponent@@@Z
     */
    MCAPI static void _doSlimePostNormalTickSystem(class StrictEntityContext &, class Optional<class FlagComponent<struct SlimeWasOnGroundPreNormalTick> const>, class ActorOwnerComponent &);

private:

};