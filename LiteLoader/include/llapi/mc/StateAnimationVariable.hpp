/**
 * @file  MC/StateAnimationVariable.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StateAnimationVariable.
 *
 */
class StateAnimationVariable {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STATEANIMATIONVARIABLE
public:
    class StateAnimationVariable& operator=(class StateAnimationVariable const &) = delete;
    StateAnimationVariable(class StateAnimationVariable const &) = delete;
    StateAnimationVariable() = delete;
#endif

public:
    /**
     * @hash   -525136629
     * @symbol ?addKeyFrame@StateAnimationVariable@@QEAAXMM@Z
     */
    MCAPI void addKeyFrame(float, float);

};