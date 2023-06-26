
 

// This file is autogenerated. DO NOT EDIT

#pragma once
#include <robotpy_build.h>


#include <wpi/sendable/Sendable.h>

#include <wpi/sendable/SendableBuilder.h>




namespace rpygen {

using namespace wpi;



template <typename CfgBase = EmptyTrampolineCfg>
struct PyTrampolineCfg_wpi__Sendable :
    CfgBase
{
    using Base = wpi::Sendable;

    using override_base_InitSendable_RTSendableBuilder = wpi::Sendable;
};


template <typename PyTrampolineBase, typename PyTrampolineCfg>
struct PyTrampoline_wpi__Sendable : PyTrampolineBase, virtual py::trampoline_self_life_support {
    using PyTrampolineBase::PyTrampolineBase;



#ifndef RPYGEN_DISABLE_InitSendable_RTSendableBuilder
    void InitSendable(wpi::SendableBuilder& builder) override {
        auto custom_fn = [&](py::function fn) {
  auto builderHandle = py::cast(builder, py::return_value_policy::reference);
  fn(builderHandle);
};
        using LookupBase = typename PyTrampolineCfg::Base;
        RPYBUILD_OVERRIDE_PURE_CUSTOM_NAME(Sendable, PYBIND11_TYPE(void), LookupBase,
            "initSendable", InitSendable, builder);
    }
#endif




};

}; // namespace rpygen
