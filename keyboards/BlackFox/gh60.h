#ifndef GH60_H
#define GH60_H

#include "quantum.h"
#include "led.h"

/* GH60 LEDs
 *   GPIO pads
 *   0 F7 WASD LEDs
 *   1 F6 ESC LED
 *   2 F5 FN LED
 *   3 F4 POKER Arrow LEDs
 *   B2 Capslock LED
 *   B0 not connected
 */
inline void gh60_caps_led_on(void)      { DDRF |=  (1<<2); PORTF &= ~(1<<2); }
inline void gh60_poker_leds_on(void)    { DDRF |=  (1<<2); PORTF &= ~(1<<2); }
inline void gh60_fn_led_on(void)    	{ DDRF |=  (1<<2); PORTF &= ~(1<<2); }
inline void gh60_esc_led_on(void)    	{ DDRF |=  (1<<2); PORTF &= ~(1<<2); }
inline void gh60_wasd_leds_on(void)     { DDRF |=  (1<<2); PORTF &= ~(1<<2); }

inline void gh60_caps_led_off(void)     { DDRF |=  (1<<2); PORTF &= ~(1<<2); }
inline void gh60_poker_leds_off(void)   { DDRF |=  (1<<2); PORTF &= ~(1<<2); }
inline void gh60_fn_led_off(void)   	{ DDRF |=  (1<<2); PORTF &= ~(1<<2); }
inline void gh60_esc_led_off(void)   	{ DDRF |=  (1<<2); PORTF &= ~(1<<2); }
inline void gh60_wasd_leds_off(void)   	{ DDRF |=  (1<<2); PORTF &= ~(1<<2); }

/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */
#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,      K1F, K1G, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,      K2E,      K2G, \
    K30, K31,      K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D,      K3F, K3G, \
    K40, K41, K42,      K44,      K46,           K49,      K4B, K4C,      K4E, K4F, K4G \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, KC_NO, K1F, K1G }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, KC_NO, K2E, KC_NO, K2G }, \
	{ K30, K31, KC_NO, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, KC_NO, K3F, K3G }, \
    { K40, K41, K42, KC_NO, K44, KC_NO, K46, KC_NO, KC_NO, K49, KC_NO, K4B, K4C, KC_NO, K4E, K4F, K4G } \
}

/* ANSI variant. No extra keys for ISO 
#define KEYMAP_ANSI( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
    K30, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,           K3D, \
    K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, KC_NO,    K2D }, \
    { K30, KC_NO,    K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, KC_NO,    K3D }, \
    { K40, K41, K42, KC_NO,    KC_NO,    K45, KC_NO,    KC_NO,    KC_NO,    KC_NO,    K4A, K4B, K4C, K4D }  \
}

 ISO variant. Remove useless ANSI keys 
#define KEYMAP_ISO( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, \
    K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, KC_NO }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, KC_NO, K3D }, \
    { K40, K41, K42, KC_NO, KC_NO, K45, KC_NO, KC_NO, KC_NO, KC_NO, K4A, K4B, K4C, K4D }  \
}


 HHKB Variant 
#define KEYMAP_HHKB( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K49,\
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
    K30, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3C, \
    K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, KC_NO,    K2D }, \
    { K30, KC_NO,    K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D }, \
    { K40, K41, K42, KC_NO,    KC_NO,    K45, KC_NO,    KC_NO,    KC_NO,    K49, K4A, K4B, K4C, K4D }  \
}

#define LAYOUT_60_ansi KEYMAP_ANSI
#define LAYOUT_60_iso KEYMAP_ISO
#define LAYOUT_60_ansi_split_bs_rshift KEYMAP_HHKB
*/
#endif
