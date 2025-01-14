/**
 * @file  MC/MobEffectChangeDescription.hpp
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
 * @brief MC class MobEffectChangeDescription.
 *
 */
class MobEffectChangeDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTCHANGEDESCRIPTION
public:
    class MobEffectChangeDescription& operator=(class MobEffectChangeDescription const &) = delete;
    MobEffectChangeDescription(class MobEffectChangeDescription const &) = delete;
    MobEffectChangeDescription() = delete;
#endif

public:
    /**
     * @hash   -280694615
     * @vftbl  0
     * @symbol ?getJsonName@MobEffectChangeDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~MobEffectChangeDescription();
    /**
     * @hash   603036010
     * @vftbl  2
     * @symbol ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1491241932
     * @vftbl  3
     * @symbol ?serializeData@MobEffectChangeDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};