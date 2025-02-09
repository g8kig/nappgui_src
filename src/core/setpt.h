/*
 * NAppGUI Cross-platform C SDK
 * 2015-2025 Francisco Garcia Collado
 * MIT Licence
 * https://nappgui.com/en/legal/license.html
 *
 * File: setpt.h
 * https://nappgui.com/en/core/setpt.html
 *
 */

/* Pointer sets */

#define setpt_create(func_compare, type, ktype) \
    (FUNC_CHECK_COMPARE_KEY(func_compare, type, ktype), \
     setpt_##type##_create((FPtr_compare)func_compare, (uint16_t)sizeof(type *), cast_const(#ktype, char_t)))

#define setpt_destroy(set, func_destroy, type) \
    setpt_##type##_destroy(set, func_destroy)

#define setpt_size(set, type) \
    setpt_##type##_size(set)

#define setpt_get(set, key, type, ktype) \
    ((void)((key) == cast_const(key, ktype)), \
     setpt_##type##_get(set, cast_const(key, void), cast_const(#ktype, char_t)))

#define setpt_get_const(set, key, type, ktype) \
    ((void)((key) == cast_const(key, ktype)), \
     setpt_##type##_get_const(set, cast_const(key, void), cast_const(#ktype, char_t)))

#define setpt_insert(set, key, ptr, type, ktype) \
    ((void)((key) == cast_const(key, ktype)), \
     setpt_##type##_insert(set, cast_const(key, void), ptr, cast_const(#ktype, char_t)))

#define setpt_delete(set, key, func_destroy, type, ktype) \
    ((void)((key) == cast_const(key, ktype)), \
     setpt_##type##_delete(set, cast_const(key, void), func_destroy, cast_const(#ktype, char_t)))

#define setpt_first(set, type) \
    setpt_##type##_first(set)

#define setpt_first_const(set, type) \
    setpt_##type##_first_const(set)

#define setpt_last(set, type) \
    setpt_##type##_last(set)

#define setpt_last_const(set, type) \
    setpt_##type##_last_const(set)

#define setpt_next(set, type) \
    setpt_##type##_next(set)

#define setpt_next_const(set, type) \
    setpt_##type##_next_const(set)

#define setpt_prev(set, type) \
    setpt_##type##_prev(set)

#define setpt_prev_const(set, type) \
    setpt_##type##_prev_const(set)

#define setpt_foreach(elem, set, type) \
    { \
        type *elem = setpt_first(set, type); \
        uint32_t elem##_i = 0, elem##_total = setpt_size(set, type); \
        while (elem != NULL) \
        {

#define setpt_foreach_const(elem, set, type) \
    { \
        const type *elem = setpt_first_const(set, type); \
        uint32_t elem##_i = 0, elem##_total = setpt_size(set, type); \
        while (elem != NULL) \
        {

#define setpt_fornext(elem, set, type) \
    elem = setpt_next(set, type); \
    elem##_i += 1; \
    unref(elem##_total); \
    } \
    }

#define setpt_fornext_const(elem, set, type) \
    elem = setpt_next_const(set, type); \
    elem##_i += 1; \
    unref(elem##_total); \
    } \
    }

#define setpt_forback(elem, set, type) \
    { \
        type *elem = setpt_last(set, type); \
        uint32_t elem##_total = setpt_size(set, type), elem##_i = elem##_total - 1; \
        while (elem != NULL) \
        {

#define setpt_forback_const(elem, set, type) \
    { \
        type *elem = setpt_last_const(set, type); \
        uint32_t elem##_total = setpt_size(set, type), elem##_i = elem##_total - 1; \
        while (elem != NULL) \
        {

#define setpt_forprev(set, type) \
    elem = setpt_prev((set), type); \
    elem##_i -= 1; \
    unref(elem##_total); \
    } \
    }

#define setpt_forprev_const(set, type) \
    elem = setpt_prev_const((set), type); \
    elem##_i -= 1; \
    unref(elem##_total); \
    } \
    }
