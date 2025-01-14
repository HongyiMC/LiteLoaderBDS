/**
 * @file  MC/BoostableDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoostableDefinition.
 *
 */
class BoostableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTABLEDEFINITION
public:
    class BoostableDefinition& operator=(class BoostableDefinition const &) = delete;
    BoostableDefinition(class BoostableDefinition const &) = delete;
    BoostableDefinition() = delete;
#endif

public:
    /**
     * @hash   1424741253
     * @symbol ?initialize@BoostableDefinition@@QEAAXAEAVEntityContext@@AEAVBoostableComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class BoostableComponent &);
    /**
     * @hash   -1488849262
     * @symbol ?buildSchema@BoostableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBoostableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BoostableDefinition>> &);

};