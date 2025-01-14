/**
 * @file  MC/DragonStrafePlayerDefinition.hpp
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
 * @brief MC class DragonStrafePlayerDefinition.
 *
 */
class DragonStrafePlayerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONSTRAFEPLAYERDEFINITION
public:
    class DragonStrafePlayerDefinition& operator=(class DragonStrafePlayerDefinition const &) = delete;
    DragonStrafePlayerDefinition(class DragonStrafePlayerDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -291498030
     * @symbol ??0DragonStrafePlayerDefinition@@QEAA@XZ
     */
    MCAPI DragonStrafePlayerDefinition();
    /**
     * @hash   -1011799285
     * @symbol ?initialize@DragonStrafePlayerDefinition@@QEAAXAEAVEntityContext@@AEAVDragonStrafePlayerGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class DragonStrafePlayerGoal &);
    /**
     * @hash   -1732787381
     * @symbol ?buildSchema@DragonStrafePlayerDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDragonStrafePlayerDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonStrafePlayerDefinition>> &);

};