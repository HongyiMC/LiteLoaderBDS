// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class PlayerInventory {

public:
    MCAPI bool add(class ItemStack&, bool);
    MCAPI void addListener(class ContainerContentChangeListener*);
    MCAPI bool canAdd(class ItemStack const&) const;
    MCAPI void clearSlot(int, enum ContainerID);
    MCAPI void clearVanishEnchantedItemsOnDeath();
    MCAPI int getContainerSize(enum ContainerID) const;
    MCAPI int getFirstEmptySlot() const;
    MCAPI int getHotbarSize() const;
    MCAPI class ItemStack const& getItem(int, enum ContainerID) const;
    MCAPI int getItemCount(class std::function<bool(class ItemStack const&)>);
    MCAPI enum ContainerID getSelectedContainerId();
    MCAPI class ItemStack const& getSelectedItem();
    MCAPI struct PlayerInventory::SlotData getSelectedSlot() const;
    MCAPI int getSlotWithItem(class ItemStack const&, bool, bool) const;
    MCAPI std::vector<class ItemStack const*> getSlots() const;
    MCAPI void removeItem(int, int, enum ContainerID);
    MCAPI void removeListener(class ContainerContentChangeListener*);
    MCAPI bool removeResource(int);
    MCAPI bool selectSlot(int, enum ContainerID);
    MCAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>);
    MCAPI void setContainerChanged(int);
    MCAPI void setItem(int, class ItemStack const&, enum ContainerID, bool);
    MCAPI void setSelectedItem(class ItemStack const&);
    MCAPI void setupDefaultInventory();
    MCAPI void swapSlots(int, int);
};