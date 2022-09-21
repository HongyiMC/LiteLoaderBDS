/**
 * @file  MC/FilterTestBiome.hpp
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
 * @brief MC class FilterTestBiome.
 *
 */
class FilterTestBiome : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTBIOME
public:
    class FilterTestBiome& operator=(class FilterTestBiome const &) = delete;
    FilterTestBiome(class FilterTestBiome const &) = delete;
    FilterTestBiome() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FilterTestBiome();
    /**
     * @hash   416279864
     * @vftbl  2
     * @symbol ?evaluate@FilterTestBiome@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -958799446
     * @vftbl  4
     * @symbol ?getName@FilterTestBiome@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};