/**
 * @file  MC/IntTag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IntTag.
 *
 */
class IntTag : public Tag {

#define AFTER_EXTRA
// Add Member There
int val;

public:
    LIAPI int& value();
    LIAPI IntTag& operator=(int val);
    LIAPI static std::unique_ptr<IntTag> create(int val = 0);
    LIAPI bool set(int val);
    LIAPI int get();
    LIAPI operator int() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTTAG
public:
    class IntTag& operator=(class IntTag const &) = delete;
    IntTag(class IntTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~IntTag();
    /**
     * @hash   2101311004
     * @vftbl  2
     * @symbol ?write@IntTag@@UEBAXAEAVIDataOutput@@@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   1330879739
     * @vftbl  3
     * @symbol ?load@IntTag@@UEAAXAEAVIDataInput@@@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   -2108625541
     * @vftbl  4
     * @symbol ?toString@IntTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   -188072288
     * @vftbl  5
     * @symbol ?getId@IntTag@@UEBA?AW4Type@Tag@@XZ
     */
    virtual enum Tag::Type getId() const;
    /**
     * @hash   1112301249
     * @vftbl  6
     * @symbol ?equals@IntTag@@UEBA_NAEBVTag@@@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   1266882029
     * @vftbl  9
     * @symbol ?copy@IntTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   -1120773549
     * @vftbl  10
     * @symbol ?hash@IntTag@@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @hash   1568055895
     * @symbol ??0IntTag@@QEAA@XZ
     */
    MCAPI IntTag();
    /**
     * @hash   776689252
     * @symbol ??0IntTag@@QEAA@H@Z
     */
    MCAPI IntTag(int);

};