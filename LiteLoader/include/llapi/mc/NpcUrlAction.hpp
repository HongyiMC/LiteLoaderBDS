/**
 * @file  MC/NpcUrlAction.hpp
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
 * @brief MC class NpcUrlAction.
 *
 */
class NpcUrlAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCURLACTION
public:
    class NpcUrlAction& operator=(class NpcUrlAction const &) = delete;
    NpcUrlAction(class NpcUrlAction const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NpcUrlAction();
    /**
     * @hash   -984265802
     * @vftbl  1
     * @symbol ?toJson@NpcUrlAction@@UEAA?AVValue@Json@@XZ
     */
    virtual class Json::Value toJson();
    /**
     * @hash   -1501244176
     * @symbol ??0NpcUrlAction@@QEAA@XZ
     */
    MCAPI NpcUrlAction();

};