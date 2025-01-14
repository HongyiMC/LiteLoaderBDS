/**
 * @file  MC/PhotoTransferPacket.hpp
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
 * @brief MC class PhotoTransferPacket.
 *
 */
class PhotoTransferPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHOTOTRANSFERPACKET
public:
    class PhotoTransferPacket& operator=(class PhotoTransferPacket const &) = delete;
    PhotoTransferPacket(class PhotoTransferPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PhotoTransferPacket();
    /**
     * @hash   2113502793
     * @vftbl  1
     * @symbol ?getId@PhotoTransferPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1025779466
     * @vftbl  2
     * @symbol ?getName@PhotoTransferPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1613036335
     * @vftbl  3
     * @symbol ?write@PhotoTransferPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1098769167
     * @vftbl  6
     * @symbol ?_read@PhotoTransferPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -112461999
     * @symbol ??0PhotoTransferPacket@@QEAA@XZ
     */
    MCAPI PhotoTransferPacket();

};