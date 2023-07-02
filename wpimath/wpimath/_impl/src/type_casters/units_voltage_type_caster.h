#pragma once

#include <units/voltage.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::volt_t> {
  static constexpr auto name = _("STUBGEN_CPP_volts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::volts> {
  static constexpr auto name = _("STUBGEN_CPP_volts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanovolt_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanovolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanovolts> {
  static constexpr auto name = _("STUBGEN_CPP_nanovolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microvolt_t> {
  static constexpr auto name = _("STUBGEN_CPP_microvolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microvolts> {
  static constexpr auto name = _("STUBGEN_CPP_microvolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millivolt_t> {
  static constexpr auto name = _("STUBGEN_CPP_millivolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millivolts> {
  static constexpr auto name = _("STUBGEN_CPP_millivolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilovolt_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilovolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilovolts> {
  static constexpr auto name = _("STUBGEN_CPP_kilovolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::statvolt_t> {
  static constexpr auto name = _("STUBGEN_CPP_statvolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::statvolts> {
  static constexpr auto name = _("STUBGEN_CPP_statvolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::abvolt_t> {
  static constexpr auto name = _("STUBGEN_CPP_abvolts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::abvolts> {
  static constexpr auto name = _("STUBGEN_CPP_abvolts_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
