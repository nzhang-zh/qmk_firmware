#ifndef PANDA68_H
#define PANDA68_H

#include "quantum.h"

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c,                \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a,      k3c,      k3e,      \
    k40, k41, k42,           k45,                k49, k4a, k4b,      k4d, k4e, k4f  \
) { \
    { k00, k01, k02, k03,   k04,   k05, k06,   k07,   k08,   k09, k0a, k0b,   k0c,   k0d,   k0e,   k0f   }, \
    { k10, k11, k12, k13,   k14,   k15, k16,   k17,   k18,   k19, k1a, k1b,   k1c,   k1d,   k1e,   k1f   }, \
    { k20, k21, k22, k23,   k24,   k25, k26,   k27,   k28,   k29, k2a, k2b,   k2c,   KC_NO, KC_NO, KC_NO }, \
    { k30, k31, k32, k33,   k34,   k35, k36,   k37,   k38,   k39, k3a, KC_NO, k3c,   KC_NO, k3e,   KC_NO }, \
    { k40, k41, k42, KC_NO, KC_NO, k45, KC_NO, KC_NO, KC_NO, k49, k4a, k4b,   KC_NO, k4d,   k4e,   k4f   }  \
}

#endif
