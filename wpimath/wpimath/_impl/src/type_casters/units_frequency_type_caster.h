#pragma once

#include <units/frequency.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::hertz_t> {
  static constexpr auto name = _("STUBGEN_CPP_hertz_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::hertz> {
  static constexpr auto name = _("STUBGEN_CPP_hertz_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanohertz_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanohertz_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanohertz> {
  static constexpr auto name = _("STUBGEN_CPP_nanohertz_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microhertz_t> {
  static constexpr auto name = _("STUBGEN_CPP_microhertz_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microhertz> {
  static constexpr auto name = _("STUBGEN_CPP_microhertz_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millihertz_t> {
  static constexpr auto name = _("STUBGEN_CPP_millihertz_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millihertz> {
  static constexpr auto name = _("STUBGEN_CPP_millihertz_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilohertz_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilohertz_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilohertz> {
  static constexpr auto name = _("STUBGEN_CPP_kilohertz_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
