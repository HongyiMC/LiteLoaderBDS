/**
 * @file  MC/BlockMaterialInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockMaterialInstance.
 *
 */
struct BlockMaterialInstance {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCE
public:
    BlockMaterialInstance(struct BlockMaterialInstance const &) = delete;
    BlockMaterialInstance() = delete;
#endif

public:
    /**
     * @hash   -780466382
     * @symbol ??4BlockMaterialInstance@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct BlockMaterialInstance & operator=(struct BlockMaterialInstance &&);
    /**
     * @hash   1023171854
     * @symbol ??4BlockMaterialInstance@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct BlockMaterialInstance & operator=(struct BlockMaterialInstance const &);
    /**
     * @hash   1263705381
     * @symbol ??1BlockMaterialInstance@@QEAA@XZ
     */
    MCAPI ~BlockMaterialInstance();
    /**
     * @hash   -871856993
     * @symbol ?blockRenderLayerEnumValues@BlockMaterialInstance@@2V?$initializer_list@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockRenderLayer@@@std@@@std@@B
     */
    MCAPI static class std::initializer_list<struct std::pair<std::string, enum BlockRenderLayer>> const blockRenderLayerEnumValues;
    /**
     * @hash   828957626
     * @symbol ?renderLayerNameBiMap@BlockMaterialInstance@@2V?$BidirectionalUnorderedMap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockRenderLayer@@@@B
     */
    MCAPI static class BidirectionalUnorderedMap<std::string, enum BlockRenderLayer> const renderLayerNameBiMap;

};