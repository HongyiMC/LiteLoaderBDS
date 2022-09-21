/**
 * @file  MC/ScreenHandlerHUD.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScreenHandlerHUD.
 *
 */
class ScreenHandlerHUD {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERHUD
public:
    class ScreenHandlerHUD& operator=(class ScreenHandlerHUD const &) = delete;
    ScreenHandlerHUD(class ScreenHandlerHUD const &) = delete;
    ScreenHandlerHUD() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScreenHandlerHUD();
    /**
     * @hash   1442899735
     * @vftbl  1
     * @symbol ?handleAction@ScreenHandlerHUD@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z
     */
    virtual enum ItemStackNetResult handleAction(class ItemStackRequestAction const &);

};