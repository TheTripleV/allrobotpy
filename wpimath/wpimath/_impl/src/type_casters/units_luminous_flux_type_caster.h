#pragma once

#include <units/luminous_flux.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::lumen_t> {
  static constexpr auto name = _("STUBGEN_CPP_lumens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::lumens> {
  static constexpr auto name = _("STUBGEN_CPP_lumens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanolumen_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanolumens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanolumens> {
  static constexpr auto name = _("STUBGEN_CPP_nanolumens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microlumen_t> {
  static constexpr auto name = _("STUBGEN_CPP_microlumens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microlumens> {
  static constexpr auto name = _("STUBGEN_CPP_microlumens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millilumen_t> {
  static constexpr auto name = _("STUBGEN_CPP_millilumens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millilumens> {
  static constexpr auto name = _("STUBGEN_CPP_millilumens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilolumen_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilolumens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilolumens> {
  static constexpr auto name = _("STUBGEN_CPP_kilolumens_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
