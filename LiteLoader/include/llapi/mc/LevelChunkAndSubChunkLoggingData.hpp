/**
 * @file  MC/LevelChunkAndSubChunkLoggingData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure LevelChunkAndSubChunkLoggingData.
 *
 */
struct LevelChunkAndSubChunkLoggingData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKANDSUBCHUNKLOGGINGDATA
public:
    struct LevelChunkAndSubChunkLoggingData& operator=(struct LevelChunkAndSubChunkLoggingData const &) = delete;
    LevelChunkAndSubChunkLoggingData(struct LevelChunkAndSubChunkLoggingData const &) = delete;
    LevelChunkAndSubChunkLoggingData() = delete;
#endif

public:
    /**
     * @hash   481661743
     * @symbol ?logLevelChunkEvent@LevelChunkAndSubChunkLoggingData@@SAXAEBVChunkPos@@PEBD_N@Z
     */
    MCAPI static void logLevelChunkEvent(class ChunkPos const &, char const *, bool);
    /**
     * @hash   -102398305
     * @symbol ?logSubChunkEvent@LevelChunkAndSubChunkLoggingData@@SAXAEBVSubChunkPos@@PEBD_N@Z
     */
    MCAPI static void logSubChunkEvent(class SubChunkPos const &, char const *, bool);

};