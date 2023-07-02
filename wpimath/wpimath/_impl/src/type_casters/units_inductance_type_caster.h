#pragma once

#include <units/inductance.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::henry_t> {
  static constexpr auto name = _("STUBGEN_CPP_henries_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::henries> {
  static constexpr auto name = _("STUBGEN_CPP_henries_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanohenry_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanohenries_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanohenries> {
  static constexpr auto name = _("STUBGEN_CPP_nanohenries_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microhenry_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_microhenries_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microhenries> {
  static constexpr auto name =
      _("STUBGEN_CPP_microhenries_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millihenry_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_millihenries_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millihenries> {
  static constexpr auto name =
      _("STUBGEN_CPP_millihenries_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilohenry_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilohenries_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilohenries> {
  static constexpr auto name = _("STUBGEN_CPP_kilohenries_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
