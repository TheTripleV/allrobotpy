#pragma once

#include <units/current.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::ampere_t> {
  static constexpr auto name = _("STUBGEN_CPP_amperes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::amperes> {
  static constexpr auto name = _("STUBGEN_CPP_amperes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanoampere_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanoamperes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanoamperes> {
  static constexpr auto name = _("STUBGEN_CPP_nanoamperes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microampere_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_microamperes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microamperes> {
  static constexpr auto name =
      _("STUBGEN_CPP_microamperes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliampere_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_milliamperes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliamperes> {
  static constexpr auto name =
      _("STUBGEN_CPP_milliamperes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kiloampere_t> {
  static constexpr auto name = _("STUBGEN_CPP_kiloamperes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kiloamperes> {
  static constexpr auto name = _("STUBGEN_CPP_kiloamperes_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
