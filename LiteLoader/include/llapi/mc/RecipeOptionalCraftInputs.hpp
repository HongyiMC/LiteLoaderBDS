/**
 * @file  MC/RecipeOptionalCraftInputs.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RecipeOptionalCraftInputs.
 *
 */
class RecipeOptionalCraftInputs {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPEOPTIONALCRAFTINPUTS
public:
    class RecipeOptionalCraftInputs& operator=(class RecipeOptionalCraftInputs const &) = delete;
    RecipeOptionalCraftInputs(class RecipeOptionalCraftInputs const &) = delete;
    RecipeOptionalCraftInputs() = delete;
#endif

public:
    /**
     * @hash   -239234199
     * @symbol ??0RecipeOptionalCraftInputs@@QEAA@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    MCAPI RecipeOptionalCraftInputs(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &, std::string const &, std::string const &);

};