#pragma once

#include <units/time.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::second_t> {
  static constexpr auto name = _("STUBGEN_CPP_seconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::seconds> {
  static constexpr auto name = _("STUBGEN_CPP_seconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanosecond_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanoseconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanoseconds> {
  static constexpr auto name = _("STUBGEN_CPP_nanoseconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microsecond_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_microseconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microseconds> {
  static constexpr auto name =
      _("STUBGEN_CPP_microseconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millisecond_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_milliseconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliseconds> {
  static constexpr auto name =
      _("STUBGEN_CPP_milliseconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilosecond_t> {
  static constexpr auto name = _("STUBGEN_CPP_kiloseconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kiloseconds> {
  static constexpr auto name = _("STUBGEN_CPP_kiloseconds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::minute_t> {
  static constexpr auto name = _("STUBGEN_CPP_minutes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::minutes> {
  static constexpr auto name = _("STUBGEN_CPP_minutes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::hour_t> {
  static constexpr auto name = _("STUBGEN_CPP_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::hours> {
  static constexpr auto name = _("STUBGEN_CPP_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::day_t> {
  static constexpr auto name = _("STUBGEN_CPP_days_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::days> {
  static constexpr auto name = _("STUBGEN_CPP_days_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::week_t> {
  static constexpr auto name = _("STUBGEN_CPP_weeks_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::weeks> {
  static constexpr auto name = _("STUBGEN_CPP_weeks_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::year_t> {
  static constexpr auto name = _("STUBGEN_CPP_years_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::years> {
  static constexpr auto name = _("STUBGEN_CPP_years_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::julian_year_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_julian_years_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::julian_years> {
  static constexpr auto name =
      _("STUBGEN_CPP_julian_years_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::gregorian_year_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_gregorian_years_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::gregorian_years> {
  static constexpr auto name =
      _("STUBGEN_CPP_gregorian_years_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
