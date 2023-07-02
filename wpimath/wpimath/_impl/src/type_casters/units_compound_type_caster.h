#pragma once

#include <units/angle.h>
#include <units/angular_velocity.h>
#include <units/length.h>
#include <units/time.h>
#include <units/voltage.h>

namespace pybind11 {
namespace detail {

template <>
struct handle_type_name<units::unit_t<
    units::compound_unit<units::radian, units::inverse<units::meter>>>> {
  static constexpr auto name = _("STUBGEN_CPP_radians_per_meter_IS_PY_float_STUBGEN");
};

template <>
struct handle_type_name<units::unit_t<units::compound_unit<
    units::radians_per_second, units::inverse<units::volt>>>> {
  static constexpr auto name = _("STUBGEN_CPP_radians_per_second_per_volt_IS_PY_float_STUBGEN");
};

template <>
struct handle_type_name<units::unit_t<units::inverse<units::seconds>>> {
  static constexpr auto name = _("STUBGEN_CPP_units_per_second_IS_PY_float_STUBGEN");
};

template <>
struct handle_type_name<
    units::unit_t<units::inverse<units::squared<units::seconds>>>> {
  static constexpr auto name = _("STUBGEN_CPP_units_per_second_squared_IS_PY_float_STUBGEN");
};

using volt_seconds = units::compound_unit<units::volts, units::seconds>;
using volt_seconds_squared = units::compound_unit<volt_seconds, units::seconds>;

template <> struct handle_type_name<units::unit_t<volt_seconds>> {
  static constexpr auto name = _("STUBGEN_CPP_volt_seconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::unit_t<volt_seconds_squared>> {
  static constexpr auto name = _("STUBGEN_CPP_volt_seconds_squared_IS_PY_float_STUBGEN");
};

template <>
struct handle_type_name<units::unit_t<
    units::compound_unit<volt_seconds, units::inverse<units::meter>>>> {
  static constexpr auto name = _("STUBGEN_CPP_volt_seconds_per_meter_IS_PY_float_STUBGEN");
};
template <>
struct handle_type_name<units::unit_t<
    units::compound_unit<volt_seconds_squared, units::inverse<units::meter>>>> {
  static constexpr auto name = _("STUBGEN_CPP_volt_seconds_squared_per_meter_IS_PY_float_STUBGEN");
};
template <>
struct handle_type_name<units::unit_t<
    units::compound_unit<volt_seconds, units::inverse<units::feet>>>> {
  static constexpr auto name = _("STUBGEN_CPP_volt_seconds_per_feet_IS_PY_float_STUBGEN");
};
template <>
struct handle_type_name<units::unit_t<
    units::compound_unit<volt_seconds_squared, units::inverse<units::feet>>>> {
  static constexpr auto name = _("STUBGEN_CPP_volt_seconds_squared_per_feet_IS_PY_float_STUBGEN");
};
template <>
struct handle_type_name<units::unit_t<
    units::compound_unit<volt_seconds, units::inverse<units::radian>>>> {
  static constexpr auto name = _("STUBGEN_CPP_volt_seconds_per_radian_IS_PY_float_STUBGEN");
};
template <>
struct handle_type_name<units::unit_t<units::compound_unit<
    volt_seconds_squared, units::inverse<units::radian>>>> {
  static constexpr auto name = _("STUBGEN_CPP_volt_seconds_squared_per_radian_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
