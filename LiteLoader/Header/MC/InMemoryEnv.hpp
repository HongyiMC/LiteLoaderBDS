// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/InMemoryEnvAPI.hpp"
#undef EXTRA_INCLUDE_PART
class InMemoryEnv {
#include "Extra/InMemoryEnvAPI.hpp"
public:
    virtual ~InMemoryEnv();
    virtual class leveldb::Status NewSequentialFile(std::string const&, class leveldb::SequentialFile**);
    virtual class leveldb::Status NewRandomAccessFile(std::string const&, class leveldb::RandomAccessFile**);
    virtual class leveldb::Status NewWritableFile(std::string const&, class leveldb::WritableFile**);
    virtual class leveldb::Status NewAppendableFile(std::string const&, class leveldb::WritableFile**);
    virtual bool FileExists(std::string const&);
    virtual class leveldb::Status GetChildren(std::string const&, std::vector<std::string>*);
    virtual class leveldb::Status DeleteFileA(std::string const&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual class leveldb::Status RenameFile(std::string const&, std::string const&);
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_19();
    virtual void flushToPermanentStorage();


private:
    MCAPI void _flushWithTransaction();
};