/**
 * @file  MC/ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING.
 *
 */
class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTRESULTS_DEPRECATEDASKTYLAING
public:
    class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING& operator=(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &) = delete;
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTRESULTS_DEPRECATEDASKTYLAING
    /**
     * @hash   -580581467
     * @symbol ?_read@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@MEAA_NAEAVReadOnlyBinaryStream@@@Z
     */
    MCVAPI bool _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -783082755
     * @symbol ?_write@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@MEBAXAEAVBinaryStream@@@Z
     */
    MCVAPI void _write(class BinaryStream &) const;
    /**
     * @hash   1316997801
     * @symbol ?postLoadItems_DEPRECATEDASKTYLAING@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@UEAAXAEAVBlockPalette@@_N@Z
     */
    MCVAPI void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette &, bool);
#endif
    /**
     * @hash   1467736183
     * @symbol ??0ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@QEAA@XZ
     */
    MCAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();
    /**
     * @hash   -1534886003
     * @symbol ?getNumCrafts@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@QEBAEXZ
     */
    MCAPI unsigned char getNumCrafts() const;
    /**
     * @hash   1725156058
     * @symbol ?getResults@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@QEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     */
    MCAPI std::vector<class ItemInstance> const & getResults() const;

};