/**
 * @file  MC/GlideMoveControlDescription.hpp
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
 * @brief MC class GlideMoveControlDescription.
 *
 */
class GlideMoveControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDEMOVECONTROLDESCRIPTION
public:
    class GlideMoveControlDescription& operator=(class GlideMoveControlDescription const &) = delete;
    GlideMoveControlDescription(class GlideMoveControlDescription const &) = delete;
    GlideMoveControlDescription() = delete;
#endif

public:
    /**
     * @hash   1090911487
     * @vftbl  0
     * @symbol ?getJsonName@GlideMoveControlDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~GlideMoveControlDescription();
    /**
     * @hash   -2099756284
     * @vftbl  2
     * @symbol ?deserializeData@GlideMoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -167871106
     * @vftbl  3
     * @symbol ?serializeData@GlideMoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};