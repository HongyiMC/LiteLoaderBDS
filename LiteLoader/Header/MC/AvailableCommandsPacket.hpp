// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AvailableCommandsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLECOMMANDSPACKET
public:
    class AvailableCommandsPacket& operator=(class AvailableCommandsPacket const&) = delete;
    AvailableCommandsPacket(class AvailableCommandsPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~AvailableCommandsPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~AvailableCommandsPacket(){
         (AvailableCommandsPacket::*rv)();
        *((void**)&rv) = dlsym("??1AvailableCommandsPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI AvailableCommandsPacket(std::vector<std::string> const&, std::vector<std::string> const&, std::vector<struct AvailableCommandsPacket::EnumData>&&, std::vector<struct AvailableCommandsPacket::ConstrainedValueData>&&, std::vector<struct AvailableCommandsPacket::CommandData>&&, std::vector<struct AvailableCommandsPacket::SoftEnumData>&&);
    MCAPI AvailableCommandsPacket();

protected:

private:

};