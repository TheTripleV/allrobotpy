#pragma once

#include <units/energy.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::joule_t> {
  static constexpr auto name = _("STUBGEN_CPP_joules_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::joules> {
  static constexpr auto name = _("STUBGEN_CPP_joules_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanojoule_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanojoules_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanojoules> {
  static constexpr auto name = _("STUBGEN_CPP_nanojoules_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microjoule_t> {
  static constexpr auto name = _("STUBGEN_CPP_microjoules_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microjoules> {
  static constexpr auto name = _("STUBGEN_CPP_microjoules_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millijoule_t> {
  static constexpr auto name = _("STUBGEN_CPP_millijoules_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millijoules> {
  static constexpr auto name = _("STUBGEN_CPP_millijoules_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilojoule_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilojoules_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilojoules> {
  static constexpr auto name = _("STUBGEN_CPP_kilojoules_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::calorie_t> {
  static constexpr auto name = _("STUBGEN_CPP_calories_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::calories> {
  static constexpr auto name = _("STUBGEN_CPP_calories_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanocalorie_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanocalories_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanocalories> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanocalories_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microcalorie_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_microcalories_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microcalories> {
  static constexpr auto name =
      _("STUBGEN_CPP_microcalories_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millicalorie_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_millicalories_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millicalories> {
  static constexpr auto name =
      _("STUBGEN_CPP_millicalories_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilocalorie_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilocalories_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilocalories> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilocalories_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilowatt_hour_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilowatt_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilowatt_hours> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilowatt_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::watt_hour_t> {
  static constexpr auto name = _("STUBGEN_CPP_watt_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::watt_hours> {
  static constexpr auto name = _("STUBGEN_CPP_watt_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::british_thermal_unit_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_british_thermal_units_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::british_thermal_units> {
  static constexpr auto name =
      _("STUBGEN_CPP_british_thermal_units_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::british_thermal_unit_iso_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_british_thermal_units_iso_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::british_thermal_units_iso> {
  static constexpr auto name =
      _("STUBGEN_CPP_british_thermal_units_iso_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::british_thermal_unit_59_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_british_thermal_units_59_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::british_thermal_units_59> {
  static constexpr auto name =
      _("STUBGEN_CPP_british_thermal_units_59_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::therm_t> {
  static constexpr auto name = _("STUBGEN_CPP_therms_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::therms> {
  static constexpr auto name = _("STUBGEN_CPP_therms_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::foot_pound_t> {
  static constexpr auto name = _("STUBGEN_CPP_foot_pounds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::foot_pounds> {
  static constexpr auto name = _("STUBGEN_CPP_foot_pounds_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
