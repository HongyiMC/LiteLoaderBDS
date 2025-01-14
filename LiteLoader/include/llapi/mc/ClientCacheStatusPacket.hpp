/**
 * @file  MC/ClientCacheStatusPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientCacheStatusPacket.
 *
 */
class ClientCacheStatusPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTCACHESTATUSPACKET
public:
    class ClientCacheStatusPacket& operator=(class ClientCacheStatusPacket const &) = delete;
    ClientCacheStatusPacket(class ClientCacheStatusPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ClientCacheStatusPacket();
    /**
     * @hash   -1375184403
     * @vftbl  1
     * @symbol ?getId@ClientCacheStatusPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1725942630
     * @vftbl  2
     * @symbol ?getName@ClientCacheStatusPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1054855133
     * @vftbl  3
     * @symbol ?write@ClientCacheStatusPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1642982243
     * @vftbl  6
     * @symbol ?_read@ClientCacheStatusPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -104240003
     * @symbol ??0ClientCacheStatusPacket@@QEAA@XZ
     */
    MCAPI ClientCacheStatusPacket();

};