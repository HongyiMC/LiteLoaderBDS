/**
 * @file  MC/EndCityStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndCityStart.
 *
 */
class EndCityStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDCITYSTART
public:
    class EndCityStart& operator=(class EndCityStart const &) = delete;
    EndCityStart(class EndCityStart const &) = delete;
    EndCityStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EndCityStart();
    /**
     * @hash   1511675566
     * @vftbl  2
     * @symbol ?isValid@EndCityStart@@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   574790771
     * @symbol ??0EndCityStart@@QEAA@AEAVDimension@@AEAVRandom@@AEBVChunkPos@@@Z
     */
    MCAPI EndCityStart(class Dimension &, class Random &, class ChunkPos const &);
    /**
     * @hash   -284946494
     * @symbol ?getYPositionForFeature@EndCityStart@@SAHAEBVChunkPos@@AEAVDimension@@@Z
     */
    MCAPI static int getYPositionForFeature(class ChunkPos const &, class Dimension &);

};