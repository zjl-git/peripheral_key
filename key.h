#ifndef _KEY__
#define _KEY__

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

#define KEY_TYPE_MASK                       0xF0
#define KEY_CLICK_TYPE_MASK                 0x00
#define KEY_LONG_PRESS_TYPE_MASK            0x20
#define KEY_LONG_PRESS_RELEASE_TYPE_MASK    0x50

typedef enum {
    KEY_RELEASE                 = 0x00,
    KEY_SHORT_CLICK             = KEY_CLICK_TYPE_MASK | 1,
    KEY_DOUBLE_CLICK            = KEY_CLICK_TYPE_MASK | 2,
    KEY_TRIPLE_CLICK            = KEY_CLICK_TYPE_MASK | 3,
    KEY_LONG_PRESS_1            = KEY_LONG_PRESS_TYPE_MASK | 1,
    KEY_LONG_PRESS_2            = KEY_LONG_PRESS_TYPE_MASK | 2,
    KEY_LONG_PRESS_3            = KEY_LONG_PRESS_TYPE_MASK | 3,
    KEY_SLONG                   = 0x30,
    KEY_DLONG                   = 0x31,
    KEY_REPEAT                  = 0x38,
    KEY_PRESS                   = 0x40,
    KEY_LONG_PRESS_RELEASE_1    = KEY_LONG_PRESS_RELEASE_TYPE_MASK | 1,
    KEY_LONG_PRESS_RELEASE_2    = KEY_LONG_PRESS_RELEASE_TYPE_MASK | 2,
    KEY_LONG_PRESS_RELEASE_3    = KEY_LONG_PRESS_RELEASE_TYPE_MASK | 3,
    KEY_SLONG_RELEASE           = 0x60,
    KEY_DLONG_RELEASE           = 0x61,
    KEY_INVALID                 = 0xFF,
} key_event;

/*support configuration structure of the key framework*/
typedef struct {
    uint8_t press_release;      /*1:support press and release event*/
    uint8_t slong;              /*1:support short long event*/
    uint8_t slong_repeat;       /*1:support short long repeat event*/
    uint8_t long_level;         /*support long press level, max level is 3*/
    uint8_t long_repeat;        /*1:support long repeat*/
    uint8_t multiple_click;     /*support multiple clicks, max level is 3*/
} key_support_event;

/*time configuration structure of the key framework, the unit is ms*/
typedef struct {
    uint32_t t_press;
    uint32_t t_release;
    uint32_t t_silence;
    uint32_t t_repeat;
    uint32_t t_long_press_1;
    uint32_t t_long_press_2;
    uint32_t t_long_press_3;
    uint32_t t_slong;
} key_event_time;

/*configuration struction of the key framework*/
typedef struct {
    uint32_t            key_data;
    key_event_time      time;
    key_support_event   support;
} key_config;

#ifdef __cplusplus
}
#endif

#endif
