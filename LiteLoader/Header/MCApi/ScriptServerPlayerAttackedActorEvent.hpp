// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptServerPlayerAttackedActorEvent {
public:
    virtual ~ScriptServerPlayerAttackedActorEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&);

public:
    MCAPI void setAttackedActorId(struct ActorUniqueID const&);
    MCAPI void setPlayerId(struct ActorUniqueID const&);

private:
    MCAPI static class HashedString const mHash;
};