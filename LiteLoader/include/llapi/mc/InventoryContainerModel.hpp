/**
 * @file  MC/InventoryContainerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryContainerModel.
 *
 */
class InventoryContainerModel : public ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYCONTAINERMODEL
public:
    class InventoryContainerModel& operator=(class InventoryContainerModel const &) = delete;
    InventoryContainerModel(class InventoryContainerModel const &) = delete;
    InventoryContainerModel() = delete;
#endif

public:
    /**
     * @hash   -970672720
     * @vftbl  0
     * @symbol ?containerContentChanged@InventoryContainerModel@@UEAAXH@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~InventoryContainerModel();
    /**
     * @hash   1602731843
     * @vftbl  2
     * @symbol ?postInit@InventoryContainerModel@@UEAAXXZ
     */
    virtual void postInit();
    /**
     * @hash   -268937375
     * @vftbl  3
     * @symbol ?releaseResources@InventoryContainerModel@@UEAAXXZ
     */
    virtual void releaseResources();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -1425298527
     * @vftbl  7
     * @symbol ?getContainerWeakRef@InventoryContainerModel@@UEBA?AVContainerWeakRef@@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   -1134356297
     * @vftbl  14
     * @symbol ?isValid@InventoryContainerModel@@UEAA_NXZ
     */
    virtual bool isValid();
    /**
     * @vftbl  15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   -1930548725
     * @vftbl  20
     * @symbol ?_getContainer@InventoryContainerModel@@EEBAPEAVContainer@@XZ
     */
    virtual class Container * _getContainer() const;
    /**
     * @hash   -941697139
     * @vftbl  21
     * @symbol ?_getContainerOffset@InventoryContainerModel@@MEBAHXZ
     */
    virtual int _getContainerOffset() const;
    /**
     * @hash   1829911
     * @vftbl  22
     * @symbol ?_onItemChanged@InventoryContainerModel@@EEAAXHAEBVItemStack@@0@Z
     */
    virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
    /**
     * @hash   -1263842549
     * @symbol ??0InventoryContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@@Z
     */
    MCAPI InventoryContainerModel(enum ContainerEnumName, int, class Player &);

//private:
    /**
     * @hash   1684940157
     * @symbol ?_refreshSlot@InventoryContainerModel@@AEAAXH@Z
     */
    MCAPI void _refreshSlot(int);

private:

};