/**
 * @file  MC/SubChunkBlockStorageUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace SubChunkBlockStorageUtil.
 *
 */
namespace SubChunkBlockStorageUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -581980779
     * @symbol ?makeDeserialized@SubChunkBlockStorageUtil@@YA?AV?$unique_ptr@V?$SubChunkStorage@VBlock@@@@U?$default_delete@V?$SubChunkStorage@VBlock@@@@@std@@@std@@AEAVIDataInput@@AEBVBlockPalette@@AEBV?$function@$$A6APEBVBlock@@_K@Z@3@AEBV?$function@$$A6APEBVBlock@@AEBVCompoundTag@@@Z@3@W4SubChunkFormat@@@Z
     */
    MCAPI std::unique_ptr<class SubChunkStorage<class Block>> makeDeserialized(class IDataInput &, class BlockPalette const &, class std::function<class Block const * (unsigned __int64)> const &, class std::function<class Block const * (class CompoundTag const &)> const &, enum SubChunkFormat);

};