#pragma once

#include <units/area.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::square_meter_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_square_meters_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::square_meters> {
  static constexpr auto name =
      _("STUBGEN_CPP_square_meters_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::square_foot_t> {
  static constexpr auto name = _("STUBGEN_CPP_square_feet_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::square_feet> {
  static constexpr auto name = _("STUBGEN_CPP_square_feet_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::square_inch_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_square_inches_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::square_inches> {
  static constexpr auto name =
      _("STUBGEN_CPP_square_inches_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::square_mile_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_square_miles_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::square_miles> {
  static constexpr auto name =
      _("STUBGEN_CPP_square_miles_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::square_kilometer_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_square_kilometers_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::square_kilometers> {
  static constexpr auto name =
      _("STUBGEN_CPP_square_kilometers_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::hectare_t> {
  static constexpr auto name = _("STUBGEN_CPP_hectares_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::hectares> {
  static constexpr auto name = _("STUBGEN_CPP_hectares_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::acre_t> {
  static constexpr auto name = _("STUBGEN_CPP_acres_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::acres> {
  static constexpr auto name = _("STUBGEN_CPP_acres_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
