/**
 * @file  MC/CSHA1.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CSHA1.
 *
 */
class CSHA1 {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CSHA1
public:
    class CSHA1& operator=(class CSHA1 const &) = delete;
    CSHA1(class CSHA1 const &) = delete;
#endif

public:
    /**
     * @hash   -1090286732
     * @symbol ??0CSHA1@@QEAA@XZ
     */
    MCAPI CSHA1();
    /**
     * @hash   -1499282303
     * @symbol ?Final@CSHA1@@QEAAXXZ
     */
    MCAPI void Final();
    /**
     * @hash   -1962001505
     * @symbol ?GetHash@CSHA1@@QEBAPEAEXZ
     */
    MCAPI unsigned char * GetHash() const;
    /**
     * @hash   -1633394301
     * @symbol ?Reset@CSHA1@@QEAAXXZ
     */
    MCAPI void Reset();
    /**
     * @hash   -1283846830
     * @symbol ?Update@CSHA1@@QEAAXPEBEI@Z
     */
    MCAPI void Update(unsigned char const *, unsigned int);
    /**
     * @hash   1151153076
     * @symbol ??1CSHA1@@QEAA@XZ
     */
    MCAPI ~CSHA1();

//private:
    /**
     * @hash   2097734480
     * @symbol ?Transform@CSHA1@@AEAAXPEAIPEBE@Z
     */
    MCAPI void Transform(unsigned int *, unsigned char const *);

private:

};