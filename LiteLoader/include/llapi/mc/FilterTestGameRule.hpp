/**
 * @file  MC/FilterTestGameRule.hpp
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
 * @brief MC class FilterTestGameRule.
 *
 */
class FilterTestGameRule : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTGAMERULE
public:
    class FilterTestGameRule& operator=(class FilterTestGameRule const &) = delete;
    FilterTestGameRule(class FilterTestGameRule const &) = delete;
    FilterTestGameRule() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FilterTestGameRule();
    /**
     * @hash   1141383378
     * @vftbl  1
     * @symbol ?setup@FilterTestGameRule@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @hash   1256163450
     * @vftbl  2
     * @symbol ?evaluate@FilterTestGameRule@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   1820570568
     * @vftbl  4
     * @symbol ?getName@FilterTestGameRule@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @hash   1269865063
     * @vftbl  6
     * @symbol ?_serializeValue@FilterTestGameRule@@MEBA?AVValue@Json@@XZ
     */
    virtual class Json::Value _serializeValue() const;

};