#pragma once

#include <units/force.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::newton_t> {
  static constexpr auto name = _("STUBGEN_CPP_newtons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::newtons> {
  static constexpr auto name = _("STUBGEN_CPP_newtons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanonewton_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanonewtons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanonewtons> {
  static constexpr auto name = _("STUBGEN_CPP_nanonewtons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::micronewton_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_micronewtons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::micronewtons> {
  static constexpr auto name =
      _("STUBGEN_CPP_micronewtons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millinewton_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_millinewtons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millinewtons> {
  static constexpr auto name =
      _("STUBGEN_CPP_millinewtons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilonewton_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilonewtons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilonewtons> {
  static constexpr auto name = _("STUBGEN_CPP_kilonewtons_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pound_t> {
  static constexpr auto name = _("STUBGEN_CPP_pounds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pounds> {
  static constexpr auto name = _("STUBGEN_CPP_pounds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::dyne_t> {
  static constexpr auto name = _("STUBGEN_CPP_dynes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::dynes> {
  static constexpr auto name = _("STUBGEN_CPP_dynes_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilopond_t> {
  static constexpr auto name = _("STUBGEN_CPP_kiloponds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kiloponds> {
  static constexpr auto name = _("STUBGEN_CPP_kiloponds_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::poundal_t> {
  static constexpr auto name = _("STUBGEN_CPP_poundals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::poundals> {
  static constexpr auto name = _("STUBGEN_CPP_poundals_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
