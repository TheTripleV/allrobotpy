#pragma once

#include <units/luminous_intensity.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::candela_t> {
  static constexpr auto name = _("STUBGEN_CPP_candelas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::candelas> {
  static constexpr auto name = _("STUBGEN_CPP_candelas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanocandela_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanocandelas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanocandelas> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanocandelas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microcandela_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_microcandelas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microcandelas> {
  static constexpr auto name =
      _("STUBGEN_CPP_microcandelas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millicandela_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_millicandelas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millicandelas> {
  static constexpr auto name =
      _("STUBGEN_CPP_millicandelas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilocandela_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilocandelas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilocandelas> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilocandelas_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
