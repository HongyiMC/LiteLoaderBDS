/**
 * @file  MC/SpringFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpringFeature.
 *
 */
class SpringFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPRINGFEATURE
public:
    class SpringFeature& operator=(class SpringFeature const &) = delete;
    SpringFeature(class SpringFeature const &) = delete;
    SpringFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SpringFeature();
    /**
     * @hash   -1624559869
     * @vftbl  3
     * @symbol ?place@SpringFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   1135701222
     * @symbol ??0SpringFeature@@QEAA@AEBVBlock@@@Z
     */
    MCAPI SpringFeature(class Block const &);

//private:
    /**
     * @hash   -1255981921
     * @symbol ?isValidSpringBorderBlock@SpringFeature@@AEBA_NAEBVBlockLegacy@@AEAVBlockSource@@@Z
     */
    MCAPI bool isValidSpringBorderBlock(class BlockLegacy const &, class BlockSource &) const;

private:

};