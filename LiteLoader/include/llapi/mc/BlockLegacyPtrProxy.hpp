/**
 * @file  MC/BlockLegacyPtrProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockLegacyPtrProxy.
 *
 */
struct BlockLegacyPtrProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLEGACYPTRPROXY
public:
    struct BlockLegacyPtrProxy& operator=(struct BlockLegacyPtrProxy const &) = delete;
    BlockLegacyPtrProxy(struct BlockLegacyPtrProxy const &) = delete;
    BlockLegacyPtrProxy() = delete;
#endif

public:
    /**
     * @hash   -947550048
     * @symbol ?setter@BlockLegacyPtrProxy@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setter(std::string const &);
    /**
     * @hash   -2090397990
     * @symbol ?toBlockLegacyPtr@BlockLegacyPtrProxy@@SAXAEAVBlockLegacyPtr@@AEBU1@@Z
     */
    MCAPI static void toBlockLegacyPtr(class BlockLegacyPtr &, struct BlockLegacyPtrProxy const &);
    /**
     * @hash   -1142819304
     * @symbol ?toString@BlockLegacyPtrProxy@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBU1@@Z
     */
    MCAPI static std::string toString(struct BlockLegacyPtrProxy const &);

};