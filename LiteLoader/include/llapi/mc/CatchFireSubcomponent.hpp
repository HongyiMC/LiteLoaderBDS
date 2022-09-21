/**
 * @file  MC/CatchFireSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CatchFireSubcomponent.
 *
 */
class CatchFireSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CATCHFIRESUBCOMPONENT
public:
    class CatchFireSubcomponent& operator=(class CatchFireSubcomponent const &) = delete;
    CatchFireSubcomponent(class CatchFireSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CatchFireSubcomponent();
    /**
     * @hash   -580057526
     * @vftbl  1
     * @symbol ?readfromJSON@CatchFireSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1044443567
     * @vftbl  2
     * @symbol ?writetoJSON@CatchFireSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   -764151020
     * @vftbl  3
     * @symbol ?doOnHitEffect@CatchFireSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -130421809
     * @vftbl  4
     * @symbol ?getName@CatchFireSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   662370602
     * @symbol ??0CatchFireSubcomponent@@QEAA@XZ
     */
    MCAPI CatchFireSubcomponent();

};