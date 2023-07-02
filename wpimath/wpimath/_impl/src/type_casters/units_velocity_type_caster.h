#pragma once

#include <units/velocity.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::meters_per_second_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_meters_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::meters_per_second> {
  static constexpr auto name =
      _("STUBGEN_CPP_meters_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::feet_per_second_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_feet_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::feet_per_second> {
  static constexpr auto name =
      _("STUBGEN_CPP_feet_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::miles_per_hour_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_miles_per_hour_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::miles_per_hour> {
  static constexpr auto name =
      _("STUBGEN_CPP_miles_per_hour_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilometers_per_hour_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilometers_per_hour_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilometers_per_hour> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilometers_per_hour_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::knot_t> {
  static constexpr auto name = _("STUBGEN_CPP_knots_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::knots> {
  static constexpr auto name = _("STUBGEN_CPP_knots_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
