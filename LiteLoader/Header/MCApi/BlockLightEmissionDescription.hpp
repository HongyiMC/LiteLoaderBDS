// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BlockLightEmissionDescription {
public:
    virtual ~BlockLightEmissionDescription();
    virtual std::string const& getName();
    virtual void initializeComponent(class EntityContext&);
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag();
    virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI static std::string const NameID;
    MCAPI static void bindType();
};