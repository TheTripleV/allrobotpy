#pragma once

#include <units/power.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::watt_t> {
  static constexpr auto name = _("STUBGEN_CPP_watts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::watts> {
  static constexpr auto name = _("STUBGEN_CPP_watts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanowatt_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanowatts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanowatts> {
  static constexpr auto name = _("STUBGEN_CPP_nanowatts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microwatt_t> {
  static constexpr auto name = _("STUBGEN_CPP_microwatts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microwatts> {
  static constexpr auto name = _("STUBGEN_CPP_microwatts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliwatt_t> {
  static constexpr auto name = _("STUBGEN_CPP_milliwatts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliwatts> {
  static constexpr auto name = _("STUBGEN_CPP_milliwatts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilowatt_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilowatts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilowatts> {
  static constexpr auto name = _("STUBGEN_CPP_kilowatts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::horsepower_t> {
  static constexpr auto name = _("STUBGEN_CPP_horsepower_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::horsepower> {
  static constexpr auto name = _("STUBGEN_CPP_horsepower_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
