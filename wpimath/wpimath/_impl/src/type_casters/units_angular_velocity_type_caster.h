#pragma once

#include <units/angular_velocity.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::radians_per_second_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_radians_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::radians_per_second> {
  static constexpr auto name =
      _("STUBGEN_CPP_radians_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::degrees_per_second_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_degrees_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::degrees_per_second> {
  static constexpr auto name =
      _("STUBGEN_CPP_degrees_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::turns_per_second_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_turns_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::turns_per_second> {
  static constexpr auto name =
      _("STUBGEN_CPP_turns_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::revolutions_per_minute_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_revolutions_per_minute_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::revolutions_per_minute> {
  static constexpr auto name =
      _("STUBGEN_CPP_revolutions_per_minute_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliarcseconds_per_year_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_milliarcseconds_per_year_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliarcseconds_per_year> {
  static constexpr auto name =
      _("STUBGEN_CPP_milliarcseconds_per_year_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
