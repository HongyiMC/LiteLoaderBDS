/**
 * @file  MC/BinaryStream.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ReadOnlyBinaryStream.hpp"
#include "Vec3.hpp"
#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BinaryStream.
 *
 */
class BinaryStream : public ReadOnlyBinaryStream {

#define AFTER_EXTRA
// Add Member There
public:
    std::string writeBuf, *pwBuf;

    LIAPI void reserve(size_t size);
    LIAPI std::string& getRaw();
    template <typename T>
    inline void writeType(T const&) = delete;
    template <>
    MCAPI void writeType(struct CommandOriginData const&);
    template <>
    MCAPI void writeType(std::vector<std::unique_ptr<class DataItem>> const&);
    template <>
    MCAPI void writeType(class NetworkItemStackDescriptor const&);
    template <>
    MCAPI void writeType(class MoveActorAbsoluteData const&);
    template <>
    inline void writeType(class mce::UUID const& uuid)
    {
        for (const unsigned char b : dAccess<unsigned char[16]>(&uuid, 0))
        {
            writeByte(b);
        }
    }
    template <>
    MCAPI void writeType(class NetworkItemInstanceDescriptor const&);
    template <>
    MCAPI void writeType(struct ItemStackRequestSlotInfo const&);
    template <>
    MCAPI void writeType(class RecipeIngredient const&);
    template <>
    inline void writeType(class Vec3 const& vec3)
    {
        writeFloat(vec3.x);
        writeFloat(vec3.y);
        writeFloat(vec3.z);
    }
    LIAPI void writeCompoundTag(class CompoundTag const& tag);


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BINARYSTREAM
public:
    class BinaryStream& operator=(class BinaryStream const &) = delete;
    BinaryStream(class BinaryStream const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BinaryStream();
    /**
     * @hash   241851181
     * @symbol ??0BinaryStream@@QEAA@XZ
     */
    MCAPI BinaryStream();
    /**
     * @hash   -1463122541
     * @symbol ??0BinaryStream@@QEAA@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI BinaryStream(std::string &, bool);
    /**
     * @hash   -1475237684
     * @symbol ?getAndReleaseData@BinaryStream@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getAndReleaseData();
    /**
     * @hash   1015605107
     * @symbol ?reset@BinaryStream@@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   -1405431892
     * @symbol ?writeBool@BinaryStream@@QEAAX_N@Z
     */
    MCAPI void writeBool(bool);
    /**
     * @hash   -1954845207
     * @symbol ?writeByte@BinaryStream@@QEAAXE@Z
     */
    MCAPI void writeByte(unsigned char);
    /**
     * @hash   710213632
     * @symbol ?writeDouble@BinaryStream@@QEAAXN@Z
     */
    MCAPI void writeDouble(double);
    /**
     * @hash   -970002748
     * @symbol ?writeFloat@BinaryStream@@QEAAXM@Z
     */
    MCAPI void writeFloat(float);
    /**
     * @hash   1762806376
     * @symbol ?writeSignedBigEndianInt@BinaryStream@@QEAAXH@Z
     */
    MCAPI void writeSignedBigEndianInt(int);
    /**
     * @hash   -496815370
     * @symbol ?writeSignedInt@BinaryStream@@QEAAXH@Z
     */
    MCAPI void writeSignedInt(int);
    /**
     * @hash   -1690849923
     * @symbol ?writeSignedInt64@BinaryStream@@QEAAX_J@Z
     */
    MCAPI void writeSignedInt64(__int64);
    /**
     * @hash   -659114053
     * @symbol ?writeSignedShort@BinaryStream@@QEAAXF@Z
     */
    MCAPI void writeSignedShort(short);
    /**
     * @hash   -1034685018
     * @symbol ?writeString@BinaryStream@@QEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI void writeString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -464881207
     * @symbol ?writeUnsignedChar@BinaryStream@@QEAAXE@Z
     */
    MCAPI void writeUnsignedChar(unsigned char);
    /**
     * @hash   1493757888
     * @symbol ?writeUnsignedInt@BinaryStream@@QEAAXI@Z
     */
    MCAPI void writeUnsignedInt(unsigned int);
    /**
     * @hash   -1693800423
     * @symbol ?writeUnsignedInt64@BinaryStream@@QEAAX_K@Z
     */
    MCAPI void writeUnsignedInt64(unsigned __int64);
    /**
     * @hash   992740805
     * @symbol ?writeUnsignedShort@BinaryStream@@QEAAXG@Z
     */
    MCAPI void writeUnsignedShort(unsigned short);
    /**
     * @hash   -1017688942
     * @symbol ?writeUnsignedVarInt@BinaryStream@@QEAAXI@Z
     */
    MCAPI void writeUnsignedVarInt(unsigned int);
    /**
     * @hash   -1135332379
     * @symbol ?writeUnsignedVarInt64@BinaryStream@@QEAAX_K@Z
     */
    MCAPI void writeUnsignedVarInt64(unsigned __int64);
    /**
     * @hash   -1961151560
     * @symbol ?writeVarInt@BinaryStream@@QEAAXH@Z
     */
    MCAPI void writeVarInt(int);
    /**
     * @hash   505253893
     * @symbol ?writeVarInt64@BinaryStream@@QEAAX_J@Z
     */
    MCAPI void writeVarInt64(__int64);

//private:
    /**
     * @hash   -560868227
     * @symbol ?write@BinaryStream@@AEAAXPEBX_K@Z
     */
    MCAPI void write(void const *, unsigned __int64);

private:

};