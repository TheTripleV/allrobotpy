#pragma once

#include <units/data.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::exabyte_t> {
  static constexpr auto name = _("STUBGEN_CPP_exabytes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::exabytes> {
  static constexpr auto name = _("STUBGEN_CPP_exabytes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::exabit_t> {
  static constexpr auto name = _("STUBGEN_CPP_exabits_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::exabits> {
  static constexpr auto name = _("STUBGEN_CPP_exabits_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
