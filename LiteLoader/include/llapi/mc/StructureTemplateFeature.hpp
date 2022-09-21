/**
 * @file  MC/StructureTemplateFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureTemplateFeature.
 *
 */
class StructureTemplateFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEFEATURE
public:
    class StructureTemplateFeature& operator=(class StructureTemplateFeature const &) = delete;
    StructureTemplateFeature(class StructureTemplateFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StructureTemplateFeature();
    /**
     * @hash   495308308
     * @vftbl  1
     * @symbol ?place@StructureTemplateFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @hash   -1630321515
     * @symbol ??0StructureTemplateFeature@@QEAA@XZ
     */
    MCAPI StructureTemplateFeature();

};