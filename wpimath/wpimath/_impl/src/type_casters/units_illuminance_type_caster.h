#pragma once

#include <units/illuminance.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::lux_t> {
  static constexpr auto name = _("STUBGEN_CPP_luxes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::luxes> {
  static constexpr auto name = _("STUBGEN_CPP_luxes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanolux_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanoluxes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanoluxes> {
  static constexpr auto name = _("STUBGEN_CPP_nanoluxes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microlux_t> {
  static constexpr auto name = _("STUBGEN_CPP_microluxes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microluxes> {
  static constexpr auto name = _("STUBGEN_CPP_microluxes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millilux_t> {
  static constexpr auto name = _("STUBGEN_CPP_milliluxes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliluxes> {
  static constexpr auto name = _("STUBGEN_CPP_milliluxes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilolux_t> {
  static constexpr auto name = _("STUBGEN_CPP_kiloluxes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kiloluxes> {
  static constexpr auto name = _("STUBGEN_CPP_kiloluxes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::footcandle_t> {
  static constexpr auto name = _("STUBGEN_CPP_footcandles_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::footcandles> {
  static constexpr auto name = _("STUBGEN_CPP_footcandles_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::lumens_per_square_inch_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_lumens_per_square_inch_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::lumens_per_square_inch> {
  static constexpr auto name =
      _("STUBGEN_CPP_lumens_per_square_inch_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::phot_t> {
  static constexpr auto name = _("STUBGEN_CPP_phots_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::phots> {
  static constexpr auto name = _("STUBGEN_CPP_phots_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
