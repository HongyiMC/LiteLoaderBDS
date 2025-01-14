/**
 * @file  MC/AutomationClientConnectPacket.hpp
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
 * @brief MC class AutomationClientConnectPacket.
 *
 */
class AutomationClientConnectPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATIONCLIENTCONNECTPACKET
public:
    class AutomationClientConnectPacket& operator=(class AutomationClientConnectPacket const &) = delete;
    AutomationClientConnectPacket(class AutomationClientConnectPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AutomationClientConnectPacket();
    /**
     * @hash   1217942462
     * @vftbl  1
     * @symbol ?getId@AutomationClientConnectPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1686261355
     * @vftbl  2
     * @symbol ?getName@AutomationClientConnectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   903182012
     * @vftbl  3
     * @symbol ?write@AutomationClientConnectPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   2117720812
     * @vftbl  6
     * @symbol ?_read@AutomationClientConnectPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1925560444
     * @symbol ??0AutomationClientConnectPacket@@QEAA@XZ
     */
    MCAPI AutomationClientConnectPacket();
    /**
     * @hash   -591269719
     * @symbol ??0AutomationClientConnectPacket@@QEAA@UWebSocketPacketData@@@Z
     */
    MCAPI AutomationClientConnectPacket(struct WebSocketPacketData);

};