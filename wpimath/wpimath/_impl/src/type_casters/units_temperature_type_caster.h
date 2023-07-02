#pragma once

#include <units/temperature.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::kelvin_t> {
  static constexpr auto name = _("STUBGEN_CPP_kelvin_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kelvin> {
  static constexpr auto name = _("STUBGEN_CPP_kelvin_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::celsius_t> {
  static constexpr auto name = _("STUBGEN_CPP_celsius_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::celsius> {
  static constexpr auto name = _("STUBGEN_CPP_celsius_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::fahrenheit_t> {
  static constexpr auto name = _("STUBGEN_CPP_fahrenheit_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::fahrenheit> {
  static constexpr auto name = _("STUBGEN_CPP_fahrenheit_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::reaumur_t> {
  static constexpr auto name = _("STUBGEN_CPP_reaumur_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::reaumur> {
  static constexpr auto name = _("STUBGEN_CPP_reaumur_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::rankine_t> {
  static constexpr auto name = _("STUBGEN_CPP_rankine_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::rankine> {
  static constexpr auto name = _("STUBGEN_CPP_rankine_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
