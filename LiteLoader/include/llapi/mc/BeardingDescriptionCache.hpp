/**
 * @file  MC/BeardingDescriptionCache.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BeardingDescriptionCache.
 *
 */
class BeardingDescriptionCache {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDINGDESCRIPTIONCACHE
public:
    class BeardingDescriptionCache& operator=(class BeardingDescriptionCache const &) = delete;
    BeardingDescriptionCache(class BeardingDescriptionCache const &) = delete;
    BeardingDescriptionCache() = delete;
#endif

public:
    /**
     * @hash   555046624
     * @symbol ??0BeardingDescriptionCache@@QEAA@AEBVBoundingBox@@H@Z
     */
    MCAPI BeardingDescriptionCache(class BoundingBox const &, int);

};