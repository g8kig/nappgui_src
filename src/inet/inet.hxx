/*
 * NAppGUI Cross-platform C SDK
 * 2015-2021 Francisco Garcia Collado
 * MIT Licence
 * https://nappgui.com/en/legal/license.html
 *
 * File: inet.hxx
 * https://nappgui.com/en/inet/inet.html
 *
 */

/* inet library */

#ifndef __INET_HXX__
#define __INET_HXX__

#include "core.hxx"

typedef enum _ierror_t
{
    ekINONET = 1,
    ekINOHOST,
    ekITIMEOUT,
    ekISTREAM,
    ekISERVER,
    ekINOIMPL,
    ekIUNDEF,
    ekIOK
} ierror_t;

typedef struct _url_t Url;
typedef struct _http_t Http;
typedef struct _json_t Json;
typedef struct _jsonopts_t JsonOpts;
typedef struct _base64_t Base64;

struct _jsonopts_t
{
    uint32_t not_used;
};

#endif