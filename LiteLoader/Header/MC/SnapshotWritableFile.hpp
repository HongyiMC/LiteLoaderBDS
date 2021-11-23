// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SnapshotWritableFileAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SnapshotWritableFile {
#include "Extra/SnapshotWritableFileAPI.hpp"
public:
    virtual ~SnapshotWritableFile();
    virtual class leveldb::Status Append(class leveldb::Slice const&);
    virtual class leveldb::Status Close();
    virtual class leveldb::Status Flush();
    virtual class leveldb::Status Sync();
};