/**
 * @file  MC/BlockRotationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockRotationComponent.
 *
 */
struct BlockRotationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKROTATIONCOMPONENT
public:
    struct BlockRotationComponent& operator=(struct BlockRotationComponent const &) = delete;
    BlockRotationComponent(struct BlockRotationComponent const &) = delete;
    BlockRotationComponent() = delete;
#endif

public:
    /**
     * @hash   1403491781
     * @symbol ??0BlockRotationComponent@@QEAA@AEBVVec3@@@Z
     */
    MCAPI BlockRotationComponent(class Vec3 const &);
    /**
     * @hash   -487878590
     * @symbol ?setRotationDegrees@BlockRotationComponent@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void setRotationDegrees(class Vec3 const &);

};