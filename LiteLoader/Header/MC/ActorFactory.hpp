// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ActorFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorFactory {
#include "Extra/ActorFactoryAPI.hpp"

public:
    MCAPI ActorFactory(class gsl::not_null<class Bedrock::NonOwnerPointer<class Level>>);
    MCAPI void applyEntityInitializer(struct ActorDefinitionIdentifier const&, class EntityContext&) const;
    MCAPI void clearDefinitionGroup();
    MCAPI class OwnerPtrT<struct EntityRefTraits> createBornEntity(struct ActorDefinitionIdentifier const&, class BlockPos const&);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createBornEntity(struct ActorDefinitionIdentifier const&, class Actor*);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createEntity(std::string const&, struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&, class Vec2 const&);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSpawnedEntity(struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&, class Vec2 const&);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSummonedEntity(struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createTransformedEntity(struct ActorDefinitionIdentifier const&, class Actor*);
    MCAPI class ActorGoalFactory& getGoalFactory();
    MCAPI class OwnerPtrT<struct EntityRefTraits> loadEntity(class CompoundTag*, class DataLoadHelper&, class DimensionHeightRange const&, class LevelChunk const*);
    MCAPI void setDefinitionGroup(class ActorDefinitionGroup*);
    MCAPI void setEntityInitializer(class std::shared_ptr<class IEntityInitializer>);
    MCAPI ~ActorFactory();

    MCAPI static class Actor* fixLegacyEntity(class BlockSource&, class CompoundTag const*);

private:
    MCAPI void _buildSummonableActorList(class Experiments const&, class std::function<void(std::string const&, struct ActorFactoryData const&)>) const;
    MCAPI class OwnerPtrT<struct EntityRefTraits> _constructActor(struct ActorDefinitionIdentifier const&, class Vec3 const&, class Vec2 const&) const;
    MCAPI void _initPropertiesOnActor(class Actor&) const;
    MCAPI void _loadDefinitionGroups(class ActorDefinitionGroup*);
    MCAPI void _loadDefinitionsHelper();
    MCAPI bool _validateActorData(class CompoundTag&, struct ActorDefinitionIdentifier&, class Vec3&, class LevelChunk const*) const;

    MCAPI static std::vector<struct VanillaActorData> builtinEntityMappings;
};