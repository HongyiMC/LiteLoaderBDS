// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructureFeature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/MineshaftFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MineshaftFeature : public StructureFeature {
#include "Extra/MineshaftFeatureAPI.hpp"
public:
    virtual ~MineshaftFeature();
    virtual bool isFeatureChunk(class Dimension const&, class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int);
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
};