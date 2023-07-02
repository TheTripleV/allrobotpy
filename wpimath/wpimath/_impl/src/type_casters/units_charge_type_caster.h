#pragma once

#include <units/charge.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::coulomb_t> {
  static constexpr auto name = _("STUBGEN_CPP_coulombs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::coulombs> {
  static constexpr auto name = _("STUBGEN_CPP_coulombs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanocoulomb_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanocoulombs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanocoulombs> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanocoulombs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microcoulomb_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_microcoulombs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microcoulombs> {
  static constexpr auto name =
      _("STUBGEN_CPP_microcoulombs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millicoulomb_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_millicoulombs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millicoulombs> {
  static constexpr auto name =
      _("STUBGEN_CPP_millicoulombs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilocoulomb_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilocoulombs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilocoulombs> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilocoulombs_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ampere_hour_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_ampere_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::ampere_hours> {
  static constexpr auto name =
      _("STUBGEN_CPP_ampere_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanoampere_hour_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanoampere_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanoampere_hours> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanoampere_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microampere_hour_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_microampere_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microampere_hours> {
  static constexpr auto name =
      _("STUBGEN_CPP_microampere_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliampere_hour_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_milliampere_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milliampere_hours> {
  static constexpr auto name =
      _("STUBGEN_CPP_milliampere_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kiloampere_hour_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_kiloampere_hours_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kiloampere_hours> {
  static constexpr auto name =
      _("STUBGEN_CPP_kiloampere_hours_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
