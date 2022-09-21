/**
 * @file  MC/OnStartLandingDefinition.hpp
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
 * @brief MC structure OnStartLandingDefinition.
 *
 */
struct OnStartLandingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTARTLANDINGDEFINITION
public:
    struct OnStartLandingDefinition& operator=(struct OnStartLandingDefinition const &) = delete;
    OnStartLandingDefinition(struct OnStartLandingDefinition const &) = delete;
    OnStartLandingDefinition() = delete;
#endif

public:
    /**
     * @hash   1508421514
     * @symbol ?buildSchema@OnStartLandingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UOnStartLandingDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnStartLandingDefinition>> &);

};