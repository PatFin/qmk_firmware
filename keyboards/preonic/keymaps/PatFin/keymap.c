#include QMK_KEYBOARD_H

/* Names for the french accentuated characters */
enum unicode_names {
                    ag,
                    ac,
                    at,
                    Ag,
                    Ac,
                    At,
                    eg,
                    et,
                    ec,
                    ea,
                    Eg,
                    Et,
                    Ec,
                    Ea,
                    ic,
                    it,
                    Ic,
                    It,
                    oc,
                    og,
                    ot,
                    Oc,
                    Og,
                    Ot,
                    ug,
                    uc,
                    ut,
                    Ug,
                    Uc,
                    Ut,
                    cc,
                    Cc,
};

/* Mapping from the names defined above to their unicode value */
const uint32_t PROGMEM unicode_map[] = {[ag] = 0x00e0, // à
                                        [ac] = 0x00e2, // â
                                        [at] = 0x00e4, // ä
                                        [Ag] = 0x00c0, // À
                                        [Ac] = 0x00c2, // Â
                                        [At] = 0x00c4, // Ä
                                        [eg] = 0x00e8, // è
                                        [et] = 0x00eb, // ë
                                        [ec] = 0x00ea, // ê
                                        [ea] = 0x00e9, // é
                                        [Eg] = 0x00c8, // È
                                        [Et] = 0x00cb, // Ë
                                        [Ec] = 0x00ca, // Ê
                                        [Ea] = 0x00c9, // É
                                        [ic] = 0x00ee, // î
                                        [it] = 0x00ef, // ï
                                        [Ic] = 0x00ce, // Î
                                        [It] = 0x00cf, // Î
                                        [oc] = 0x00f4, // ô
                                        [og] = 0x00f2, // ò
                                        [ot] = 0x00f6, // ö
                                        [Oc] = 0x00d4, // Ô
                                        [Og] = 0x00d2, // Ò
                                        [Ot] = 0x00d6, // Ö
                                        [ug] = 0x00f9, // ù
                                        [uc] = 0x00fb, // û
                                        [ut] = 0x00fc, // ü
                                        [Ug] = 0x00d9, // Ù
                                        [Uc] = 0x00db, // Û
                                        [Ut] = 0x00dc, // Ü
                                        [cc] = 0x00e7, // ç
                                        [Cc] = 0x00c7, // Ç
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


   /* Qwerty
    * ,-----------------------------------------------------------------------------------.
    * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Ctrl |  Fn  |  GUI |L-Alt | Lower|    Space    |Raise |Naviga|Mouse |Numpad|R-Ctrl|
    * `-----------------------------------------------------------------------------------'
    */
	[0] = LAYOUT_preonic_1x2uC(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
                               KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                               KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
                               KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                               KC_LCTL, MO(3), KC_LGUI, KC_LALT, OSL(5), KC_SPC, OSL(4), TT(1), TT(2), TG(6), KC_RCTL),

   /* Navigation cluster
    * ,-----------------------------------------------------------------------------------.
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      | Home |  Up  | End  |PageUP|      |      |      |      |      |      |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * |      |      | Left | Down |Right |Pg_DWN|      |      |      |      |      |      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|      |      |      |      |      |      |      |      |      |      |Shift |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Ctrl |  Fn  |  GUI |L-Alt |      |             |      |Naviga|Mouse |Numpad|R-Ctrl|
    * `-----------------------------------------------------------------------------------'
    */
    [1] = LAYOUT_preonic_1x2uC(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_NO, KC_NO, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

   /* Mouse layer
    * ,-----------------------------------------------------------------------------------.
    * |      |      |      | Btn3 | Btn4 | Btn5 |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      | Btn1 |Ms_Up | Btn2 |RollUp|      |      |      |      |      |      |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * |      |      |Ms_Lft|Ms_Dwn|Ms_Rgt|RollDw|      |      |      |      |      |      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|      |Accel0|Accel1|Accel2|      |      |      |      |      |      |Shift |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Ctrl |      |      |      |      |             |      |      |Mouse |      |R-Ctrl|
    * `-----------------------------------------------------------------------------------'
    */
    [2] = LAYOUT_preonic_1x2uC(KC_NO, KC_NO, KC_NO, KC_BTN3, KC_BTN4, KC_BTN5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_NO, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_TRNS, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
                               KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_TRNS),
   /* Function layer
    * ,-----------------------------------------------------------------------------------.
    * | F12  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      | Mute |VolDwn|VolUp | Prev | Play | Next |      |      |Brigt+|Brigt-|      |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Caps |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * |      |      |      |      |RGBTgl|BKLTgl|      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |  Fn  |      |L-Alt |      |             |      |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
	[3] = LAYOUT_preonic_1x2uC(KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
                               KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO,
                               KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, BL_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_NO, KC_TRNS, KC_NO, LM(3, MOD_LALT), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
   /* Raised layer: symbols
    * ,-----------------------------------------------------------------------------------.
    * |      |   !  |  @   |  #   |  $   |  %   |  ^   |  &   |  *   |  (   |   )  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |  =   |      |      |  -   |  _   |   +  |  {   |   }  |      |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * |      |      |      |      |      |      |  /   |  |   |   \  |  [   |   ]  |      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |   <  |  >   |   ?  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |Raise |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
	[4] = LAYOUT_preonic_1x2uC(KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_EQL, KC_NO, KC_NO, KC_PMNS, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_PIPE, KC_BSLS, KC_LBRC, KC_RBRC, KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_QUES, KC_NO, KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),

   /* Lowered layer: French accentuated characters.
    * Uppercase letters are achived by pressing and keepin the shift key pressed before pressing
    * the "lower" key and pressing the desired character.
    *
    * For accentuated characters, the variants are disposed around the normal QWERTY layout
    * position of the letter:
    * = The circumflex accent ("accent circonflexe") is placed on the key's normal position
    * = The acute accent ("accent aigu") is on the key to the left of the normal key position.
    *   This only concerns the "e" character as it is the only one in French language to bear
    *   such an accent.
    * = The grave accent ("accent grave") is placed on the key to the right of the normal letter
    *   position
    * = The trema ("tréma") is placed on the key below the normal key position
    *
    * THE ONLY EXCEPTION to these rules is the "ù" key which should be placed on the "i" key.
    * As the "i" key is already occupied by "î", the "ù" key has been mapped to the "m" key
    * (two keys below the normal "u" key). The accentuated variants of character "u" are
    * therefore in a single column.
    *
    * Finally, the "ç" key is mapped on the normal "c" key.
    *
    * As the sending of unicode characters relies on key combinations that are OS-specific,
    * you will need to change the UNICODE input mode from the keyboard to match that of your
    * Operating System. This is achieved by cycling through the input modes (Linux with iBus
    * / MAC / Windows with WinCompose ) using the TAB key of this layer. If you do not need
    * a particular input method (i.e. if you only ever use one or two operating system), you
    * can choose to disable that particular input method in file Config.h by modifying what
    * "UNICODE_SELECTED_MODES" is defined to.
    *
    * ,-----------------------------------------------------------------------------------.
    * |      |      |   "  |   '  |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |UC_MOD|      |   é  |   ê  |   è  |      |      |   û  |   î  |   ô  |   ò  |      |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * |      |   â  |   à  |   ë  |      |      |      |   ü  |   ï  |   ö  |      |      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * |      |   ä  |      |   ç  |      |      |      |   ù  |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |Lower |             |      |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
	[5] = LAYOUT_preonic_1x2uC(KC_NO, KC_NO, KC_NO, KC_DQUO, KC_QUOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               UC_MOD, KC_NO, XP(ea,Ea), XP(ec,Ec), XP(eg,Eg), KC_NO, KC_NO, XP(uc,Uc), XP(ic,Ic), XP(oc,Oc), XP(og,Og), KC_NO,
                               KC_CAPS, XP(ac,Ac), XP(ag,Ag), XP(et,Et), KC_NO, KC_NO, KC_NO, XP(ut,Ut), XP(it,It), XP(ot,Ot), KC_NO, KC_NO,
                               KC_NO, XP(at,At), KC_NO, XP(cc, Cc), KC_NO, KC_NO, KC_NO, XP(ug,Ug), KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

   /* Numpad layer:
    * This layer introduces a numpad centered on key "J" (serves as 5 in the numpad).
    * The navigation cluster with the arrow keys on keys ESDF present in layer "navigation"
    * are also present for easy navigation in spreadsheets.
    * ,-----------------------------------------------------------------------------------.
    * |      |      |      |      |      |   %  |   =  |   /  |   *  |  -   |      | Supr |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Tab  |      | Home |  Up  |  End |PageUp|   7  |   8  |   9  |  +   |      | Del  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Esc  |      | Left | Down | Right|PgDown|   4  |   5  |   6  |  +   |      |Enter |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * |Shift |      |      |      |      |      |   1  |   2  |   3  |Enter |      |Shift |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Ctrl |      |      |      |      |      0      |   .  |   .  |Enter |Numpad| Ctrl |
    * `-----------------------------------------------------------------------------------'
    */
    [6] = LAYOUT_preonic_1x2uC(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PERC, KC_PEQL, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_TRNS,
                               KC_TRNS, KC_NO, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_TRNS,
                               KC_TRNS, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_NO, KC_TRNS,
                               KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PENT, KC_NO, KC_TRNS,
                               KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_PDOT, KC_PDOT, KC_PENT, KC_TRNS, KC_TRNS)
};
