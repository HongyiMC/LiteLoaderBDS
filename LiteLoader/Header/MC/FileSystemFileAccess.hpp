// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FileSystemFileAccessAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FileSystemFileAccess {
#include "Extra/FileSystemFileAccessAPI.hpp"
public:
    virtual ~FileSystemFileAccess();
    virtual void* fopen(class Core::Path const&, std::string const&);
    virtual int fclose(void*);
    virtual int fseek(void*, __int64, int);
    virtual __int64 ftell(void*);
    virtual void unk_vfn_5();
    virtual class IFileWriteAccess* getWriteInterface();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();

public:
    MCAPI FileSystemFileAccess(enum FileSystemMode);
};