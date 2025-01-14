/**
 * @file  MC/AvailableActorIdentifiersPacket.hpp
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
 * @brief MC class AvailableActorIdentifiersPacket.
 *
 */
class AvailableActorIdentifiersPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLEACTORIDENTIFIERSPACKET
public:
    class AvailableActorIdentifiersPacket& operator=(class AvailableActorIdentifiersPacket const &) = delete;
    AvailableActorIdentifiersPacket(class AvailableActorIdentifiersPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AvailableActorIdentifiersPacket();
    /**
     * @hash   1163319544
     * @vftbl  1
     * @symbol ?getId@AvailableActorIdentifiersPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1134138277
     * @vftbl  2
     * @symbol ?getName@AvailableActorIdentifiersPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   750639506
     * @vftbl  3
     * @symbol ?write@AvailableActorIdentifiersPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -653243833
     * @vftbl  4
     * @symbol ?readExtended@AvailableActorIdentifiersPacket@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @hash   -255405486
     * @vftbl  6
     * @symbol ?_read@AvailableActorIdentifiersPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1259760430
     * @symbol ??0AvailableActorIdentifiersPacket@@QEAA@XZ
     */
    MCAPI AvailableActorIdentifiersPacket();
    /**
     * @hash   526302231
     * @symbol ??0AvailableActorIdentifiersPacket@@QEAA@AEBV?$vector@UActorInfo@@V?$allocator@UActorInfo@@@std@@@std@@@Z
     */
    MCAPI AvailableActorIdentifiersPacket(std::vector<struct ActorInfo> const &);

};