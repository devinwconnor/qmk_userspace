// qmk compile -kb keebio/iris/rev5 -km DevoIris
#include QMK_KEYBOARD_H



enum custom_layers {
  _COLEMAK,
  _GAMES,
  _MAPGAMES,
  _GW2,
  _NAV,
  _MEDIA,
  _NUM,
  _SYMBOLS,
  _FUNC
};

// Home Row Mods
#define HRM_R LALT_T(KC_R)
#define HRM_S LCTL_T(KC_S)
#define HRM_T LSFT_T(KC_T)
#define HRM_D LGUI_T(KC_D)

#define HRM_N RSFT_T(KC_N)
#define HRM_E RCTL_T(KC_E)
#define HRM_I LALT_T(KC_I)
#define HRM_H RGUI_T(KC_H)

//Layer Toggles
#define LS_SPC  LT(_NAV,KC_SPC)
#define LS_TAB  LT(_MEDIA,KC_TAB)
#define LS_BSPC LT(_NUM,KC_BSPC)
#define LS_ENT  LT(_SYMBOLS,KC_ENT)
#define LS_DEL  LT(_FUNC,KC_DEL) 

//MAC desktop movement
#define DM_UP    LCTL(KC_UP)
#define DM_LEFT  LCTL(KC_LEFT)
#define DM_RIGHT LCTL(KC_RIGHT)

//Editing
#define FIND  LCTL(KC_F)
#define SAVE  LCTL(KC_S)
#define COPY  LCTL(KC_C)
#define CUT   LCTL(KC_X)
#define PASTE LCTL(KC_V)
#define UNDO  LCTL(KC_Z)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  TG(_GW2),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,  KC_QUOT, TG(_GAMES),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,    KC_A,    HRM_R,   HRM_S,  HRM_T,    KC_G,                               KC_M,   HRM_N,    HRM_E,   HRM_I,   KC_O,  TG(_SE),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      TG(_DF),  KC_Z,    KC_X,    KC_C,   HRM_D,    KC_V,   KC_ESC,           KC_NO,    KC_K,   HRM_H,  KC_COMM,  KC_DOT, KC_SLSH, TG(_MAPGAMES),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_ESC,  LS_SPC,  LS_TAB,                    LS_ENT, LS_BSPC,  LS_DEL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_GAMES] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_M,    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  TG(_GAMES),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_U,    KC_LSFT,  KC_A,    KC_S,    KC_D,    KC_F,                               KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_I,    KC_LCTL,  KC_X,    KC_C,    KC_V,    KC_B,   KC_T,             KC_LALT,  KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH,  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_Z,KC_SPC,   KC_G,                     KC_ENT,  KC_BSPC, KC_DEL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_MAPGAMES] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,     KC_7,    KC_8,    KC_9,    KC_0,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_C,     KC_TAB,  KC_Q,    KC_UP,    KC_E,    KC_R,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_U,     KC_LSFT, KC_LEFT, KC_DOWN, KC_RGHT,  KC_F,                               KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_I,    KC_LCTL,  KC_X,    KC_C,    KC_V,    KC_B,   KC_T,          KC_LALT, KC_N,     KC_M,  KC_COMM,  KC_DOT, KC_SLSH, TG(_MAPGAMES),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_Z,   KC_SPC,  KC_G,                        KC_ENT,  KC_BSPC, KC_DEL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_GW2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  TG(_GW2),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_I,     KC_T,    KC_Q,    KC_W,    KC_E,    KC_R,                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_M,     KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,                               KC_H, MT(MOD_LSFT,KC_J), MT(MOD_LCTL,KC_K), MT(MOD_LALT,KC_L), MT(MOD_LGUI,KC_SCLN), KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_U,     KC_Z,    KC_X,     KC_C,    KC_V,    KC_B,   KC_GRV,          KC_LALT,   KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH,  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_Z,   KC_SPC,  KC_G,                   KC_TRNS,  KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NAV] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,    SAVE,   KC_ENT,   KC_UP,   COPY,    PASTE,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,    FIND,  KC_LEFT, KC_DOWN,  KC_RGHT,  CUT,                               KC_NO,  KC_LSFT, KC_LCTL,  KC_LALT, KC_LGUI, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,     KC_NO, KC_HOME,   UNDO,  KC_END,  KC_ENT,  KC_TRNS,          KC_TRNS,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO, 
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_ESC,  KC_SPC,  KC_TAB,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
),

   [_MEDIA] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,    KC_NO, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                               KC_NO,  KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LGUI,  KC_TRNS,          KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_MPLY,  KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

   [_NUM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,   KC_GRV,    KC_P7,   KC_P8,  KC_P9,  KC_PPLS,                           KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_SCLN,   KC_P4,   KC_P5,   KC_P6,  KC_PAST,                             KC_NO,  KC_LSFT, KC_LCTL, KC_LALT, KC_NO,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,   KC_DOT,   KC_P1,   KC_P2,   KC_P3,  KC_PSLS, KC_PMNS,         KC_EQUAL, KC_NO,   KC_LGUI,    KC_NO,  KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_EQL,   KC_P0,  KC_MINUS,                  KC_TRNS, KC_TRNS,  KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

    [_SYMBOLS] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,   KC_LCBR, KC_RCBR, KC_PERC, KC_HASH, KC_PIPE,                            KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,   KC_LPRN, KC_RPRN, KC_EXLM, KC_AT,   KC_COLN,                            KC_NO,  KC_LSFT, KC_LCTL, KC_LALT,  KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,   KC_LBRC, KC_RBRC, KC_DLR, KC_AMPR,  KC_GRV,  KC_NO,         KC_TRNS,  KC_NO,   KC_LGUI,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_ESC,  KC_SPC,  KC_TAB,                  KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

    [_FUNC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,   KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,  KC_F11,   KC_F4,    KC_F5,   KC_F6,  KC_NO,                              KC_NO,  KC_LSFT, KC_LCTL, KC_LALT,  KC_NO, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,   KC_F10,  KC_F1,    KC_F2,  KC_F3,   KC_NO,  KC_TRNS,          KC_TRNS,   KC_NO,   KC_LGUI,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
}; 

const rgblight_segment_t PROGMEM my_default_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 6, HSV_OFF},       // Light 4 LEDs, starting with LED 3
    {6, 6, HSV_OFF}
);

const rgblight_segment_t PROGMEM my_games_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 6, HSV_RED},     
    {6, 6, HSV_RED}
);

// Light LEDs 6 to 9 and 12 to 15 red when games layer is active. Hard to ignore!
const rgblight_segment_t PROGMEM my_gw2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_MAGENTA}, 
    {1, 1, HSV_GOLD},
    {2, 1, HSV_MAGENTA},
    {3, 1, HSV_YELLOW},
    {4, 1, HSV_MAGENTA},
    {5, 1, HSV_YELLOW},
    {6, 1, HSV_MAGENTA}, 
    {7, 1, HSV_GOLD},
    {8, 1, HSV_MAGENTA},
    {9, 1, HSV_YELLOW},
    {10, 1, HSV_MAGENTA},
    {11, 1, HSV_YELLOW}
);


const rgblight_segment_t PROGMEM my_mapgames_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 6, HSV_CYAN},
    {6, 6, HSV_CYAN}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_default_layer,
    my_games_layer,
    my_mapgames_layer,
    my_gw2_layer
);


void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _COLEMAK));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _GAMES));
    rgblight_set_layer_state(2, layer_state_cmp(state, _MAPGAMES));
    rgblight_set_layer_state(3, layer_state_cmp(state, _GW2));
    return state;
}

const uint16_t PROGMEM insert_combo[] = {KC_SLSH, KC_D, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(insert_combo, KC_PGDN)
};
