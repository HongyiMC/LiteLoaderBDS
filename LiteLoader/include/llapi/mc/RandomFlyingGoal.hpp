/**
 * @file  MC/RandomFlyingGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomFlyingGoal.
 *
 */
class RandomFlyingGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMFLYINGGOAL
public:
    class RandomFlyingGoal& operator=(class RandomFlyingGoal const &) = delete;
    RandomFlyingGoal(class RandomFlyingGoal const &) = delete;
    RandomFlyingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RandomFlyingGoal();
    /**
     * @hash   941509355
     * @vftbl  1
     * @symbol ?canUse@RandomFlyingGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1041958075
     * @vftbl  7
     * @symbol ?appendDebugInfo@RandomFlyingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   -343151160
     * @vftbl  10
     * @symbol ?_setWantedPosition@RandomFlyingGoal@@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
    /**
     * @hash   327734238
     * @symbol ??0RandomFlyingGoal@@QEAA@AEAVMob@@MHH_N@Z
     */
    MCAPI RandomFlyingGoal(class Mob &, float, int, int, bool);

//private:
    /**
     * @hash   2130739020
     * @symbol ?_getTreePos@RandomFlyingGoal@@AEBA_NAEAVVec3@@@Z
     */
    MCAPI bool _getTreePos(class Vec3 &) const;

private:

};