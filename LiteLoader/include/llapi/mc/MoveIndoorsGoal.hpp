/**
 * @file  MC/MoveIndoorsGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveIndoorsGoal.
 *
 */
class MoveIndoorsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINDOORSGOAL
public:
    class MoveIndoorsGoal& operator=(class MoveIndoorsGoal const &) = delete;
    MoveIndoorsGoal(class MoveIndoorsGoal const &) = delete;
    MoveIndoorsGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveIndoorsGoal();
    /**
     * @hash   2141151486
     * @vftbl  1
     * @symbol ?canUse@MoveIndoorsGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1413184564
     * @vftbl  2
     * @symbol ?canContinueToUse@MoveIndoorsGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1935649609
     * @vftbl  4
     * @symbol ?start@MoveIndoorsGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1046313753
     * @vftbl  5
     * @symbol ?stop@MoveIndoorsGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1207628302
     * @vftbl  6
     * @symbol ?tick@MoveIndoorsGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -918444574
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveIndoorsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1144965787
     * @symbol ??0MoveIndoorsGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI MoveIndoorsGoal(class Mob &);

//private:
    /**
     * @hash   1202519689
     * @symbol ?_isInside@MoveIndoorsGoal@@AEAA_NAEBVBlockPos@@@Z
     */
    MCAPI bool _isInside(class BlockPos const &);
    /**
     * @hash   -1519540821
     * @symbol ?_startPathfinding@MoveIndoorsGoal@@AEAAXXZ
     */
    MCAPI void _startPathfinding();

private:

};