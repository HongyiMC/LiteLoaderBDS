/**
 * @file  MC/RemovePassengersSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RemovePassengersSystemImpl.
 *
 */
class RemovePassengersSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEPASSENGERSSYSTEMIMPL
public:
    class RemovePassengersSystemImpl& operator=(class RemovePassengersSystemImpl const &) = delete;
    RemovePassengersSystemImpl(class RemovePassengersSystemImpl const &) = delete;
    RemovePassengersSystemImpl() = delete;
#endif

public:
    /**
     * @hash   -121559694
     * @symbol ?_removePassengersSystem@RemovePassengersSystemImpl@@SAXV?$ViewedEntityContextT@VStrictEntityContext@@URemovePassengersComponent@@UVehicleComponent@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UVehicleComponent@@V?$FlagComponent@URecalculateControlledByLocalInstanceRequestFlag@@@@@@@Z
     */
    MCAPI static void _removePassengersSystem(class ViewedEntityContextT<class StrictEntityContext, struct RemovePassengersComponent, struct VehicleComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>>);

};