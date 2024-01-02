#pragma once

#ifdef AUDIO_ENABLE
//#define STARTUP_SONG SONG(PREONIC_SOUND)
    #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/
#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2


/* Set the number of taps used to set a layer on with TT from the default 5 to 2 */
#define TAPPING_TOGGLE 2

/*
 * Set the input mode for unicode characters to match the operating systems
 * Choose the line that matches your need and keep the others commented out.
 *
 * On Linux systems, you shouldn't need any particular settings for unicode input to work with iBus.
 * On MAC systems, some settings need to be activated for this feature to function.
 * Likewise on Windows, you will need to install "WinCompese". You will find more information on
 * this page:
 * https://beta.docs.qmk.fm/using-qmk/software-features/feature_unicode#2-input-modes-id-input-modes
 */
//#define UNICODE_SELECTED_MODES UC_LNX, UC_WINC, UC_MAC // Use this if you use Windows, MAC, and Linux
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX, UNICODE_MODE_WINCOMPOSE
//#define UNICODE_SELECTED_MODES UC_WINC, UC_MAC         // Use this if you use Windows and MAC
//#define UNICODE_SELECTED_MODES UC_LNX, UC_MAC          // Use this if you use MAC and Linux
//#define UNICODE_SELECTED_MODES UC_WINC                 // Use this if you only use Windows
//#define UNICODE_SELECTED_MODES UC_LNX                  // Use this if you only use Linux
//#define UNICODE_SELECTED_MODES UC_MAC                  // USe this if you only use MAC
