/**
 * @file  MC/Bedrock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace Bedrock.
 *
 */
namespace Bedrock {

#define AFTER_EXTRA
// Add Member There
struct PlatformRuntimeInfo {
    PlatformRuntimeInfo() = delete;
    PlatformRuntimeInfo(PlatformRuntimeInfo const&) = delete;
    PlatformRuntimeInfo(PlatformRuntimeInfo const&&) = delete;
};
class CrashTelemetryProcessor {
public:
    CrashTelemetryProcessor() = delete;
    CrashTelemetryProcessor(CrashTelemetryProcessor const&) = delete;
    CrashTelemetryProcessor(CrashTelemetryProcessor const&&) = delete;
};
struct CrashUploadStatus {
    CrashUploadStatus() = delete;
    CrashUploadStatus(CrashUploadStatus const&) = delete;
    CrashUploadStatus(CrashUploadStatus const&&) = delete;
};
template <typename T0>
class NonOwnerPointer {
public:
    std::shared_ptr<T0> mPtr;

    NonOwnerPointer(T0& a1) {
        mPtr = std::make_shared<T0>(a1);
    }
	
};
struct StorageMigration {
    enum class StorageMigrationType;
    StorageMigration() = delete;
    StorageMigration(StorageMigration const&) = delete;
    StorageMigration(StorageMigration const&&) = delete;
};




namespace PubSub {
class Subscription {
public:
    Subscription() = delete;
    Subscription(Subscription const&) = delete;
    Subscription(Subscription const&&) = delete;
};
} // namespace PubSub
namespace Threading {
enum class AsyncStatus;
template <typename T0>
class UniqueLock;

class CountReference
{
public:
    CountReference() = delete;
    CountReference(CountReference const&) = delete;
    CountReference(CountReference const&&) = delete;
};
template <typename T0>
class IAsyncResult {
public:
    IAsyncResult() = delete;
    IAsyncResult(IAsyncResult const&) = delete;
    IAsyncResult(IAsyncResult const&&) = delete;
};
template <typename T0, typename T1>
class ThreadLocalObject {
public:
    ThreadLocalObject() = delete;
    ThreadLocalObject(ThreadLocalObject const&) = delete;
    ThreadLocalObject(ThreadLocalObject const&&) = delete;
};
template <typename T>
class LockGuard
{
    MCAPI LockGuard(T);
    MCAPI ~LockGuard();
};
} // namespace Threading

class ScopeExit;
class Http {
public:
    enum class Implementation;
};
class SessionInfo
{
public:
    SessionInfo() = delete;
    SessionInfo(SessionInfo const&) = delete;
    SessionInfo(SessionInfo const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @hash   -622201798
     * @symbol ?getExceptionMessage@Bedrock@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vexception_ptr@3@@Z
     */
    MCAPI std::string getExceptionMessage(class std::exception_ptr);
    /**
     * @hash   1226254924
     * @symbol ?strtoint32@Bedrock@@YAHPEBDPEAPEADH@Z
     */
    MCAPI int strtoint32(char const *, char **, int);
    /**
     * @hash   467177554
     * @symbol ?strtouint32@Bedrock@@YAIPEBDPEAPEADH@Z
     */
    MCAPI unsigned int strtouint32(char const *, char **, int);
    /**
     * @hash   -940286991
     * @symbol ?throw_system_error@Bedrock@@YAXW4errc@std@@@Z
     */
    MCAPI void throw_system_error(enum std::errc);

};