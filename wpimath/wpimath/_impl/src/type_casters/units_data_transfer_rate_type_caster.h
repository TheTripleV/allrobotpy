#pragma once

#include <units/data_transfer_rate.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::exabytes_per_second_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_exabytes_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::exabytes_per_second> {
  static constexpr auto name =
      _("STUBGEN_CPP_exabytes_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::exabits_per_second_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_exabits_per_second_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::exabits_per_second> {
  static constexpr auto name =
      _("STUBGEN_CPP_exabits_per_second_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
