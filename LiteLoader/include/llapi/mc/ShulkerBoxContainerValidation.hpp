/**
 * @file  MC/ShulkerBoxContainerValidation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShulkerBoxContainerValidation.
 *
 */
class ShulkerBoxContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXCONTAINERVALIDATION
public:
    class ShulkerBoxContainerValidation& operator=(class ShulkerBoxContainerValidation const &) = delete;
    ShulkerBoxContainerValidation(class ShulkerBoxContainerValidation const &) = delete;
    ShulkerBoxContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ShulkerBoxContainerValidation();
    /**
     * @hash   -21140817
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @hash   905537703
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@ShulkerBoxContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @hash   -1129239772
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -1094361934
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @hash   124016150
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @hash   -114110459
     * @vftbl  9
     * @symbol ?getContainerSize@ShulkerBoxContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;

};