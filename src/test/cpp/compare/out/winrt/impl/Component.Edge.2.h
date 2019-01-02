﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.000000.0
#pragma once
#include "winrt/impl/Component.Edge.1.h"
namespace winrt::Component::Edge
{
    struct WINRT_EBO EmptyClass : Component::Edge::IEmptyClass
    {
        EmptyClass(std::nullptr_t) noexcept {}
        EmptyClass(void* ptr, take_ownership_from_abi_t) noexcept : Component::Edge::IEmptyClass(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO OneClass : Component::Edge::IOneClass
    {
        OneClass(std::nullptr_t) noexcept {}
        OneClass(void* ptr, take_ownership_from_abi_t) noexcept : Component::Edge::IOneClass(ptr, take_ownership_from_abi) {}
        OneClass(int32_t a);
        static void StaticMethod(int32_t a);
    };
    struct StaticClass
    {
        StaticClass() = delete;
        static void StaticMethod();
    };
    struct WINRT_EBO ThreeClass : Component::Edge::IThreeClass
    {
        ThreeClass(std::nullptr_t) noexcept {}
        ThreeClass(void* ptr, take_ownership_from_abi_t) noexcept : Component::Edge::IThreeClass(ptr, take_ownership_from_abi) {}
        ThreeClass(int32_t a, int32_t b, int32_t c);
        static void StaticMethod(int32_t a, int32_t b, int32_t c);
    };
    struct WINRT_EBO TwoClass : Component::Edge::ITwoClass
    {
        TwoClass(std::nullptr_t) noexcept {}
        TwoClass(void* ptr, take_ownership_from_abi_t) noexcept : Component::Edge::ITwoClass(ptr, take_ownership_from_abi) {}
        TwoClass(int32_t a, int32_t b);
        static void StaticMethod(int32_t a, int32_t b);
    };
    struct WINRT_EBO ZeroClass : Component::Edge::IZeroClass
    {
        ZeroClass(std::nullptr_t) noexcept {}
        ZeroClass(void* ptr, take_ownership_from_abi_t) noexcept : Component::Edge::IZeroClass(ptr, take_ownership_from_abi) {}
        ZeroClass();
        static void StaticMethod();
    };
}
