/**
 * @file  MC/TradeItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure TradeItem.
 *
 */
struct TradeItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEITEM
public:
    struct TradeItem& operator=(struct TradeItem const &) = delete;
    TradeItem(struct TradeItem const &) = delete;
    TradeItem() = delete;
#endif

public:
    /**
     * @hash   1302835198
     * @symbol ??4TradeItem@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct TradeItem & operator=(struct TradeItem &&);
    /**
     * @hash   -2024131661
     * @symbol ??1TradeItem@@QEAA@XZ
     */
    MCAPI ~TradeItem();

};