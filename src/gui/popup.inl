/*
 * NAppGUI Cross-platform C SDK
 * 2015-2021 Francisco Garcia Collado
 * MIT Licence
 * https://nappgui.com/en/legal/license.html
 *
 * File: popup.inl
 *
 */

/* Pop-up button */

#include "gui.ixx"

__EXTERN_C

void _popup_destroy(PopUp **popup);

void _popup_dimension(PopUp *popup, const uint32_t i, real32_t *dim0, real32_t *dim1);

void _popup_locale(PopUp *popup);

uint32_t _popup_size(const PopUp *popup);

void _popup_set_dtype(PopUp *popup, const dtype_t type);

void _popup_enum(PopUp *popup, const DBind *dbind, const enum_t value);

void _popup_uint32(PopUp *popup, const uint32_t value);

void _popup_add_enum_item(PopUp *popup, const char_t *text);

__END_C