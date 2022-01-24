#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000,                                                                         \
	      K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, \
	      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, \
	      K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, \
	            K402, K403, K404, K405, K406, K407, K408, K409, K410, K411  \
) { \
	{ K000,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112 }, \
	{ KC_NO, K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212 }, \
	{ KC_NO, K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312 }, \
	{ KC_NO, KC_NO, K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  KC_NO }  \
}

#endif