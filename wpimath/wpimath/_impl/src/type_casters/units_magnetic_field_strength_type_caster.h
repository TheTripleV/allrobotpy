#pragma once

#include <units/magnetic_field_strength.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::tesla_t> {
  static constexpr auto name = _("STUBGEN_CPP_teslas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::teslas> {
  static constexpr auto name = _("STUBGEN_CPP_teslas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanotesla_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanoteslas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanoteslas> {
  static constexpr auto name = _("STUBGEN_CPP_nanoteslas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microtesla_t> {
  static constexpr auto name = _("STUBGEN_CPP_microteslas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microteslas> {
  static constexpr auto name = _("STUBGEN_CPP_microteslas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millitesla_t> {
  static constexpr auto name = _("STUBGEN_CPP_milliteslas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliteslas> {
  static constexpr auto name = _("STUBGEN_CPP_milliteslas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilotesla_t> {
  static constexpr auto name = _("STUBGEN_CPP_kiloteslas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kiloteslas> {
  static constexpr auto name = _("STUBGEN_CPP_kiloteslas_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::gauss_t> {
  static constexpr auto name = _("STUBGEN_CPP_gauss_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::gauss> {
  static constexpr auto name = _("STUBGEN_CPP_gauss_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
