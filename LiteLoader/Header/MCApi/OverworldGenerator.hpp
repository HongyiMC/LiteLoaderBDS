// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class OverworldGenerator {

public:
    MCAPI void buildSurfaces(struct OverworldGenerator::ThreadData&, class BlockVolume&, class LevelChunk&, class ChunkPos const&, class SurfaceLevelCache const&);
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(class ChunkPos const&, class WorldGenCache const&, class NoodleCavifier*, class OreVeinifier*) const;

private:
    MCAPI void _prepareStructureBlueprints(class ChunkPos const&, class BiomeSource const&, class IPreliminarySurfaceProvider const&);

    MCAPI static float const SNOW_CUTOFF;
    MCAPI static float const SNOW_SCALE;

protected:
    MCAPI class std::shared_ptr<class OperationNode<class Biome*, class Pos2d>> makeCommonNodeGraph(class LevelData const&, class BiomeRegistry const&) const;
};