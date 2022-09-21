/**
 * @file  MC/OnPlacedTriggerDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnPlacedTriggerDescription.
 *
 */
class OnPlacedTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONPLACEDTRIGGERDESCRIPTION
public:
    class OnPlacedTriggerDescription& operator=(class OnPlacedTriggerDescription const &) = delete;
    OnPlacedTriggerDescription(class OnPlacedTriggerDescription const &) = delete;
    OnPlacedTriggerDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OnPlacedTriggerDescription();
    /**
     * @hash   -1296853543
     * @vftbl  1
     * @symbol ?getName@OnPlacedTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -891410305
     * @symbol ?NameID@OnPlacedTriggerDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;

};