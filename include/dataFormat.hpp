#pragma once

#include <iostream>

namespace PlaceDataLib
{
    enum dataFormat
    {
        UTC,
        UNIXTIME,
        USERID,
        XPOS,
        YPOS,
        POS,
        COLORHEX
    };

    template <dataFormat>
    struct TypeSelector
    {using type = const char*;};
    template <>
    struct TypeSelector<UTC>
    {using type = const char*;};
    template <>
    struct TypeSelector<UNIXTIME>
    {using type = long;};
    template <>
    struct TypeSelector<USERID>
    {using type = const char*;};
    template <>
    struct TypeSelector<XPOS>
    {using type = int;};
    template <>
    struct TypeSelector<YPOS>
    {using type = int;};
    template <>
    struct TypeSelector<POS>
    {using type = int*;};
    template <>
    struct TypeSelector<COLORHEX>
    {using type = const char*;};
}