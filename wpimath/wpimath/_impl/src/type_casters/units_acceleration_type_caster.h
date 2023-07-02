#pragma once

#include <units/acceleration.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::meters_per_second_squared_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_meters_per_second_squared_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::meters_per_second_squared> {
  static constexpr auto name =
      _("STUBGEN_CPP_meters_per_second_squared_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::feet_per_second_squared_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_feet_per_second_squared_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::feet_per_second_squared> {
  static constexpr auto name =
      _("STUBGEN_CPP_feet_per_second_squared_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::standard_gravity_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_standard_gravity_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::standard_gravity> {
  static constexpr auto name =
      _("STUBGEN_CPP_standard_gravity_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
