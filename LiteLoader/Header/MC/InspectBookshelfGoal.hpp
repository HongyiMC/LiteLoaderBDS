// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseMoveToBlockGoal.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/InspectBookshelfGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class InspectBookshelfGoal : public BaseMoveToBlockGoal {
#include "Extra/InspectBookshelfGoalAPI.hpp"
public:
    virtual ~InspectBookshelfGoal();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    virtual bool _canReach(class BlockPos const&);
    virtual void unk_vfn_16();
    virtual bool findTargetBlock();

public:
    MCAPI InspectBookshelfGoal(class Mob&, float, int, int, int, float);
};