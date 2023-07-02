#pragma once

#include <units/mass.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::gram_t> {
  static constexpr auto name = _("STUBGEN_CPP_grams_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::grams> {
  static constexpr auto name = _("STUBGEN_CPP_grams_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanogram_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanograms_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanograms> {
  static constexpr auto name = _("STUBGEN_CPP_nanograms_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microgram_t> {
  static constexpr auto name = _("STUBGEN_CPP_micrograms_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::micrograms> {
  static constexpr auto name = _("STUBGEN_CPP_micrograms_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milligram_t> {
  static constexpr auto name = _("STUBGEN_CPP_milligrams_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milligrams> {
  static constexpr auto name = _("STUBGEN_CPP_milligrams_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilogram_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilograms_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilograms> {
  static constexpr auto name = _("STUBGEN_CPP_kilograms_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::metric_ton_t> {
  static constexpr auto name = _("STUBGEN_CPP_metric_tons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::metric_tons> {
  static constexpr auto name = _("STUBGEN_CPP_metric_tons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pound_t> {
  static constexpr auto name = _("STUBGEN_CPP_pounds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pounds> {
  static constexpr auto name = _("STUBGEN_CPP_pounds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::long_ton_t> {
  static constexpr auto name = _("STUBGEN_CPP_long_tons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::long_tons> {
  static constexpr auto name = _("STUBGEN_CPP_long_tons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::short_ton_t> {
  static constexpr auto name = _("STUBGEN_CPP_short_tons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::short_tons> {
  static constexpr auto name = _("STUBGEN_CPP_short_tons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::stone_t> {
  static constexpr auto name = _("STUBGEN_CPP_stone_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::stone> {
  static constexpr auto name = _("STUBGEN_CPP_stone_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ounce_t> {
  static constexpr auto name = _("STUBGEN_CPP_ounces_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ounces> {
  static constexpr auto name = _("STUBGEN_CPP_ounces_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::carat_t> {
  static constexpr auto name = _("STUBGEN_CPP_carats_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::carats> {
  static constexpr auto name = _("STUBGEN_CPP_carats_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::slug_t> {
  static constexpr auto name = _("STUBGEN_CPP_slugs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::slugs> {
  static constexpr auto name = _("STUBGEN_CPP_slugs_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
