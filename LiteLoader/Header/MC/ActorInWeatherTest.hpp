// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ActorInWeatherTestAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorInWeatherTest : public FilterTest {
#include "Extra/ActorInWeatherTestAPI.hpp"
public:
    virtual ~ActorInWeatherTest();
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
    virtual class Json::Value _serializeValue();
};