/**
 * @file  MC/ActorInNetherTest.hpp
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
 * @brief MC class ActorInNetherTest.
 *
 */
class ActorInNetherTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINNETHERTEST
public:
    class ActorInNetherTest& operator=(class ActorInNetherTest const &) = delete;
    ActorInNetherTest(class ActorInNetherTest const &) = delete;
    ActorInNetherTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorInNetherTest();
    /**
     * @hash   1876296806
     * @vftbl  2
     * @symbol ?evaluate@ActorInNetherTest@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   896226604
     * @vftbl  4
     * @symbol ?getName@ActorInNetherTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};