/**
 * @file  MC/MoveControlSwayDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveControlSwayDescription.
 *
 */
class MoveControlSwayDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLSWAYDESCRIPTION
public:
    class MoveControlSwayDescription& operator=(class MoveControlSwayDescription const &) = delete;
    MoveControlSwayDescription(class MoveControlSwayDescription const &) = delete;
    MoveControlSwayDescription() = delete;
#endif

public:
    /**
     * @hash   1923914016
     * @vftbl  0
     * @symbol ?getJsonName@MoveControlSwayDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~MoveControlSwayDescription();
    /**
     * @hash   60762339
     * @vftbl  2
     * @symbol ?deserializeData@MoveControlSwayDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1249886403
     * @vftbl  3
     * @symbol ?serializeData@MoveControlSwayDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};