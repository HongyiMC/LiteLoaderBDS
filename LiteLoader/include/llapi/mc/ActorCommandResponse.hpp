/**
 * @file  MC/ActorCommandResponse.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorCommandResponse.
 *
 */
class ActorCommandResponse {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCOMMANDRESPONSE
public:
    class ActorCommandResponse& operator=(class ActorCommandResponse const &) = delete;
    ActorCommandResponse(class ActorCommandResponse const &) = delete;
    ActorCommandResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorCommandResponse();
    /**
     * @hash   987732690
     * @vftbl  1
     * @symbol ?getName@ActorCommandResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -936594772
     * @vftbl  2
     * @symbol ?executeAction@ActorCommandResponse@@UEBAXAEAVRenderParams@@@Z
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @hash   -379597048
     * @vftbl  3
     * @symbol ?buildSchema@ActorCommandResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VActorEventResponse@@$$V@@@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>> &, class Factory<class ActorEventResponse> const &) const;

};