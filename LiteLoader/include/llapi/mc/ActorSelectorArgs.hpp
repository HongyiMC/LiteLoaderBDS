/**
 * @file  MC/ActorSelectorArgs.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorSelectorArgs.
 *
 */
struct ActorSelectorArgs {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSELECTORARGS
public:
    struct ActorSelectorArgs& operator=(struct ActorSelectorArgs const &) = delete;
    ActorSelectorArgs(struct ActorSelectorArgs const &) = delete;
#endif

public:
    /**
     * @symbol ??0ActorSelectorArgs@@QEAA@XZ
     */
    MCAPI ActorSelectorArgs();
    /**
     * @hash   1117095917
     * @symbol ??1ActorSelectorArgs@@QEAA@XZ
     */
    MCAPI ~ActorSelectorArgs();
    /**
     * @hash   1521936788
     * @symbol ?DEFAULT_LEVEL@ActorSelectorArgs@@2U?$pair@HH@std@@B
     */
    MCAPI static struct std::pair<int, int> const DEFAULT_LEVEL;
    /**
     * @hash   -704580386
     * @symbol ?DEFAULT_X_ROTATION@ActorSelectorArgs@@2U?$pair@MM@std@@B
     */
    MCAPI static struct std::pair<float, float> const DEFAULT_X_ROTATION;
    /**
     * @hash   -1217890682
     * @symbol ?DEFAULT_Y_ROTATION@ActorSelectorArgs@@2U?$pair@MM@std@@B
     */
    MCAPI static struct std::pair<float, float> const DEFAULT_Y_ROTATION;

};