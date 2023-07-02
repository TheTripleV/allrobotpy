#pragma once

#include <units/concentration.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::ppm_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_parts_per_million_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::parts_per_million> {
  static constexpr auto name =
      _("STUBGEN_CPP_parts_per_million_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ppb_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_parts_per_billion_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::parts_per_billion> {
  static constexpr auto name =
      _("STUBGEN_CPP_parts_per_billion_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ppt_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_parts_per_trillion_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::parts_per_trillion> {
  static constexpr auto name =
      _("STUBGEN_CPP_parts_per_trillion_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::percent_t> {
  static constexpr auto name = _("STUBGEN_CPP_percent_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::percent> {
  static constexpr auto name = _("STUBGEN_CPP_percent_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
