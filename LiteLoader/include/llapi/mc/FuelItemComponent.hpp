/**
 * @file  MC/FuelItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FuelItemComponent.
 *
 */
class FuelItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUELITEMCOMPONENT
public:
    class FuelItemComponent& operator=(class FuelItemComponent const &) = delete;
    FuelItemComponent(class FuelItemComponent const &) = delete;
    FuelItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FuelItemComponent();
    /**
     * @hash   -1119473603
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VFuelItemComponent@@@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   86313903
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VFuelItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   622644305
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VFuelItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -755547889
     * @symbol ?bindType@FuelItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -1505971488
     * @symbol ?getIdentifier@FuelItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};