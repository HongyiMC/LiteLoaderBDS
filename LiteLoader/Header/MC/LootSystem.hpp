// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/LootSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LootSystem : public ITickingSystem {
#include "Extra/LootSystemAPI.hpp"
public:
    virtual ~LootSystem();
    virtual void registerEvents(class entt::dispatcher&);
    virtual void unk_vfn_2();
};