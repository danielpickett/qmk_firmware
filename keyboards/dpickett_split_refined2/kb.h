#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002,                                                                         \
	                  K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, \
	                  K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, \
	                  K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, \
	                        K404, K405, K406, K407, K408, K409, K410, K411, K412, K413  \
) { \
	{ K000,  K001,  K002,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114 }, \
	{ KC_NO, KC_NO, KC_NO, K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214 }, \
	{ KC_NO, KC_NO, KC_NO, K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  KC_NO }  \
}

#endif