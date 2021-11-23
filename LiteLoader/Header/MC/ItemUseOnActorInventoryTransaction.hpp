// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ItemUseOnActorInventoryTransactionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ItemUseOnActorInventoryTransaction {
#include "Extra/ItemUseOnActorInventoryTransactionAPI.hpp"
public:
    virtual ~ItemUseOnActorInventoryTransaction();
    virtual void read(class ReadOnlyBinaryStream&);
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_3();
    virtual int /*enum InventoryTransactionError*/ handle(class Player&, bool);
    virtual void unk_vfn_5();

public:
    MCAPI class ItemUseOnActorInventoryTransaction& setSelectedItem(class ItemStack const&);
};