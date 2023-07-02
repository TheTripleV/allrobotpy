#pragma once

#include <units/density.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::kilograms_per_cubic_meter_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilograms_per_cubic_meter_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilograms_per_cubic_meter> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilograms_per_cubic_meter_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::grams_per_milliliter_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_grams_per_milliliter_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::grams_per_milliliter> {
  static constexpr auto name =
      _("STUBGEN_CPP_grams_per_milliliter_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilograms_per_liter_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilograms_per_liter_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilograms_per_liter> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilograms_per_liter_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ounces_per_cubic_foot_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_ounces_per_cubic_foot_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ounces_per_cubic_foot> {
  static constexpr auto name =
      _("STUBGEN_CPP_ounces_per_cubic_foot_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ounces_per_cubic_inch_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_ounces_per_cubic_inch_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ounces_per_cubic_inch> {
  static constexpr auto name =
      _("STUBGEN_CPP_ounces_per_cubic_inch_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ounces_per_gallon_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_ounces_per_gallon_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ounces_per_gallon> {
  static constexpr auto name =
      _("STUBGEN_CPP_ounces_per_gallon_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pounds_per_cubic_foot_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_pounds_per_cubic_foot_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pounds_per_cubic_foot> {
  static constexpr auto name =
      _("STUBGEN_CPP_pounds_per_cubic_foot_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pounds_per_cubic_inch_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_pounds_per_cubic_inch_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pounds_per_cubic_inch> {
  static constexpr auto name =
      _("STUBGEN_CPP_pounds_per_cubic_inch_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pounds_per_gallon_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_pounds_per_gallon_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pounds_per_gallon> {
  static constexpr auto name =
      _("STUBGEN_CPP_pounds_per_gallon_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::slugs_per_cubic_foot_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_slugs_per_cubic_foot_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::slugs_per_cubic_foot> {
  static constexpr auto name =
      _("STUBGEN_CPP_slugs_per_cubic_foot_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
