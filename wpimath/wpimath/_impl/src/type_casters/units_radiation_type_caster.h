#pragma once

#include <units/radiation.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::becquerel_t> {
  static constexpr auto name = _("STUBGEN_CPP_becquerels_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::becquerels> {
  static constexpr auto name = _("STUBGEN_CPP_becquerels_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanobecquerel_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanobecquerels_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanobecquerels> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanobecquerels_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microbecquerel_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_microbecquerels_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microbecquerels> {
  static constexpr auto name =
      _("STUBGEN_CPP_microbecquerels_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millibecquerel_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_millibecquerels_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millibecquerels> {
  static constexpr auto name =
      _("STUBGEN_CPP_millibecquerels_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilobecquerel_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilobecquerels_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilobecquerels> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilobecquerels_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::gray_t> {
  static constexpr auto name = _("STUBGEN_CPP_grays_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::grays> {
  static constexpr auto name = _("STUBGEN_CPP_grays_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanogray_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanograys_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanograys> {
  static constexpr auto name = _("STUBGEN_CPP_nanograys_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microgray_t> {
  static constexpr auto name = _("STUBGEN_CPP_micrograys_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::micrograys> {
  static constexpr auto name = _("STUBGEN_CPP_micrograys_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milligray_t> {
  static constexpr auto name = _("STUBGEN_CPP_milligrays_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::milligrays> {
  static constexpr auto name = _("STUBGEN_CPP_milligrays_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilogray_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilograys_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilograys> {
  static constexpr auto name = _("STUBGEN_CPP_kilograys_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::sievert_t> {
  static constexpr auto name = _("STUBGEN_CPP_sieverts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::sieverts> {
  static constexpr auto name = _("STUBGEN_CPP_sieverts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanosievert_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanosieverts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanosieverts> {
  static constexpr auto name =
      _("STUBGEN_CPP_nanosieverts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microsievert_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_microsieverts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microsieverts> {
  static constexpr auto name =
      _("STUBGEN_CPP_microsieverts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millisievert_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_millisieverts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millisieverts> {
  static constexpr auto name =
      _("STUBGEN_CPP_millisieverts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilosievert_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilosieverts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilosieverts> {
  static constexpr auto name =
      _("STUBGEN_CPP_kilosieverts_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::curie_t> {
  static constexpr auto name = _("STUBGEN_CPP_curies_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::curies> {
  static constexpr auto name = _("STUBGEN_CPP_curies_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::rutherford_t> {
  static constexpr auto name = _("STUBGEN_CPP_rutherfords_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::rutherfords> {
  static constexpr auto name = _("STUBGEN_CPP_rutherfords_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::rad_t> {
  static constexpr auto name = _("STUBGEN_CPP_rads_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::rads> {
  static constexpr auto name = _("STUBGEN_CPP_rads_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
