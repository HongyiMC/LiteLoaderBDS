/**
 * @file  MC/FilterTestBiomeHumid.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterTestBiomeHumid.
 *
 */
class FilterTestBiomeHumid : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTBIOMEHUMID
public:
    class FilterTestBiomeHumid& operator=(class FilterTestBiomeHumid const &) = delete;
    FilterTestBiomeHumid(class FilterTestBiomeHumid const &) = delete;
    FilterTestBiomeHumid() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FilterTestBiomeHumid();
    /**
     * @hash   667863447
     * @vftbl  2
     * @symbol ?evaluate@FilterTestBiomeHumid@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -1684689349
     * @vftbl  4
     * @symbol ?getName@FilterTestBiomeHumid@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};