#pragma once

#include <units/torque.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::newton_meter_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_newton_meters_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::newton_meters> {
  static constexpr auto name =
      _("STUBGEN_CPP_newton_meters_IS_PY_float_STUBGEN");
};

// template <> struct handle_type_name<units::foot_pound_t> {
//   static constexpr auto name = _("STUBGEN_CPP_foot_pounds_IS_PY_float_STUBGEN");
// };

// template <> struct handle_type_name<units::foot_pounds> {
//   static constexpr auto name = _("STUBGEN_CPP_foot_pounds_IS_PY_float_STUBGEN");
// };

template <> struct handle_type_name<units::foot_poundal_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_foot_poundals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::foot_poundals> {
  static constexpr auto name =
      _("STUBGEN_CPP_foot_poundals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::inch_pound_t> {
  static constexpr auto name = _("STUBGEN_CPP_inch_pounds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::inch_pounds> {
  static constexpr auto name = _("STUBGEN_CPP_inch_pounds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::meter_kilogram_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_meter_kilograms_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::meter_kilograms> {
  static constexpr auto name =
      _("STUBGEN_CPP_meter_kilograms_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
