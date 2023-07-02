#pragma once

#include <units/pressure.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::pascal_t> {
  static constexpr auto name = _("STUBGEN_CPP_pascals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pascals> {
  static constexpr auto name = _("STUBGEN_CPP_pascals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanopascal_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanopascals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanopascals> {
  static constexpr auto name = _("STUBGEN_CPP_nanopascals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::micropascal_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_micropascals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::micropascals> {
  static constexpr auto name =
      _("STUBGEN_CPP_micropascals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millipascal_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_millipascals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millipascals> {
  static constexpr auto name =
      _("STUBGEN_CPP_millipascals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilopascal_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilopascals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilopascals> {
  static constexpr auto name = _("STUBGEN_CPP_kilopascals_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::bar_t> {
  static constexpr auto name = _("STUBGEN_CPP_bars_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::bars> {
  static constexpr auto name = _("STUBGEN_CPP_bars_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::mbar_t> {
  static constexpr auto name = _("STUBGEN_CPP_mbars_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::mbars> {
  static constexpr auto name = _("STUBGEN_CPP_mbars_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::atmosphere_t> {
  static constexpr auto name = _("STUBGEN_CPP_atmospheres_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::atmospheres> {
  static constexpr auto name = _("STUBGEN_CPP_atmospheres_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pounds_per_square_inch_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_pounds_per_square_inch_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::pounds_per_square_inch> {
  static constexpr auto name =
      _("STUBGEN_CPP_pounds_per_square_inch_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::torr_t> {
  static constexpr auto name = _("STUBGEN_CPP_torrs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::torrs> {
  static constexpr auto name = _("STUBGEN_CPP_torrs_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
