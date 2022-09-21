/**
 * @file  MC/ActorIsRidingTest.hpp
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
 * @brief MC class ActorIsRidingTest.
 *
 */
class ActorIsRidingTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISRIDINGTEST
public:
    class ActorIsRidingTest& operator=(class ActorIsRidingTest const &) = delete;
    ActorIsRidingTest(class ActorIsRidingTest const &) = delete;
    ActorIsRidingTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorIsRidingTest();
    /**
     * @hash   502549672
     * @vftbl  2
     * @symbol ?evaluate@ActorIsRidingTest@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   1329101146
     * @vftbl  4
     * @symbol ?getName@ActorIsRidingTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};