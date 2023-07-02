#pragma once

#include <units/angular_acceleration.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::radians_per_second_squared_t> {
  static constexpr auto name = _("STUBGEN_CPP_radians_per_second_squared_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::radians_per_second_squared> {
  static constexpr auto name = _("STUBGEN_CPP_radians_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::degrees_per_second_squared_t> {
  static constexpr auto name = _("STUBGEN_CPP_degrees_per_second_squared_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::degrees_per_second_squared> {
  static constexpr auto name = _("STUBGEN_CPP_degrees_per_second_squared_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
