/**
 * @file  MC/EnvironmentRequirement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure EnvironmentRequirement.
 *
 */
struct EnvironmentRequirement {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENVIRONMENTREQUIREMENT
public:
    struct EnvironmentRequirement& operator=(struct EnvironmentRequirement const &) = delete;
    EnvironmentRequirement(struct EnvironmentRequirement const &) = delete;
    EnvironmentRequirement() = delete;
#endif

public:
    /**
     * @hash   -239427864
     * @symbol ?addBlockDescriptor@EnvironmentRequirement@@QEAAXAEBVBlockDescriptor@@@Z
     */
    MCAPI void addBlockDescriptor(class BlockDescriptor const &);
    /**
     * @hash   -2025017478
     * @symbol ??1EnvironmentRequirement@@QEAA@XZ
     */
    MCAPI ~EnvironmentRequirement();

};