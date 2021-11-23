// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MobEventsAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MobEvents {
#include "Extra/MobEventsAPI.hpp"
public:
    virtual ~MobEvents();

public:
    MCAPI MobEvents(class LevelStorage&);
    MCAPI bool areEventsEnabled() const;
    MCAPI void deserialize(class CompoundTag const&);
    MCAPI class MobEvent const& getEvent(enum MobEventsIndex) const;
    MCAPI enum MobEventsIndex getIndexFromName(std::string const&) const;
    MCAPI bool isEnabled(enum MobEventsIndex) const;
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;
    MCAPI void setEnabled(enum MobEventsIndex, bool);
    MCAPI void setEventsEnabled(bool);
    MCAPI void setMarketplaceDefaults();
    MCAPI void tick();
    MCAPI void writeToLevelStorage();

    MCAPI static std::string const EVENTS_ENABLED_STRING;
};