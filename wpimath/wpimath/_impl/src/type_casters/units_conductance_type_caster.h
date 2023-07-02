#pragma once

#include <units/conductance.h>

namespace pybind11 {
namespace detail {
template <> struct handle_type_name<units::siemens_t> {
  static constexpr auto name = _("STUBGEN_CPP_siemens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::siemens> {
  static constexpr auto name = _("STUBGEN_CPP_siemens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanosiemens_t> {
  static constexpr auto name = _("STUBGEN_CPP_nanosiemens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::nanosiemens> {
  static constexpr auto name = _("STUBGEN_CPP_nanosiemens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microsiemens_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_microsiemens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::microsiemens> {
  static constexpr auto name =
      _("STUBGEN_CPP_microsiemens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millisiemens_t> {
  static constexpr auto name =
      _("STUBGEN_CPP_millisiemens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::millisiemens> {
  static constexpr auto name =
      _("STUBGEN_CPP_millisiemens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilosiemens_t> {
  static constexpr auto name = _("STUBGEN_CPP_kilosiemens_IS_PY_float_STUBGEN");
};

template <> struct handle_type_name<units::kilosiemens> {
  static constexpr auto name = _("STUBGEN_CPP_kilosiemens_IS_PY_float_STUBGEN");
};

} // namespace detail
} // namespace pybind11

#include "_units_base_type_caster.h"
