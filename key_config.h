#ifndef _KEY_CONFIG__
#define _KEY_CONFIG__

#ifdef __cplusplus
extern "C"
{
#endif

#define EINT_KEY_0                          126
#define EINT_KEY_1                          127

#define CFG_SUPPORT_PRESS_RELEASE           1
#define CFG_NO_SUPPORT_PRESS_RELEASE        0

#define CFG_NO_SUPPORT_SLONG                0
#define CFG_SUPPORT_SLONG                   1

#define CFG_NO_SUPPORT_SLONG_REPEAT         0
#define CFG_SUPPORT_SLONG_REPEAT            1

#define CFG_NO_SUPPORT_MULTIPLE_CLICK       0
#define CFG_SUPPORT_MULTIPLE_CLICK_SHORT    1
#define CFG_SUPPORT_MULTIPLE_CLICK_DOUBLE   2
#define CFG_SUPPORT_MULTIPLE_CLICK_TRIPLE   3

#define CFG_NO_SUPPORT_LONG_PRESS           0
#define CFG_SUPPORT_LONG_PRESS_1            1
#define CFG_SUPPORT_LONG_PRESS_2            2
#define CFG_SUPPORT_LONG_PRESS_3            3

#define CFG_NO_SUPPORT_LONG_REPEAT          0
#define CFG_SUPPORT_LONG_REPEAT             1

/*the default time,uint:ms*/
#define default_t_p                         300   //the multiple click press time
#define default_t_r                         200   //the multiple click release time for waiting next click
#define default_t_end                       300   //the silence time when only  support someone click
#define default_t_repeat                    200   //the repeat time inlcude slong repeat and long repeat
#define default_t_l_p1                      500   //the longpress 1 time               , long1 = default_t_l_p1
#define default_t_l_p2                      1000  //the longpress 1 -> longpress 2 time, long2 = default_t_l_p1 + default_t_l_p2
#define default_t_l_p3                      1500  //the longpress 2 -> longpress 3 time, long3 = default_t_l_p1 + default_t_l_p2 + default_t_l_p3
#define default_t_slong                     500   //the slong time

/*
key_data:       key name value definition
t_prss:         multiple press time
t_release:      multiple release time for next click
t_silence:      multiple silence time
t_repeat:       repeat time
t_long_press_1: long1 press time
t_long_press_2: long2 press time
t_long_press_3: long3 press time
t_slong:        slong time
press_release:  supported press and release event or not
slong:          supported song event or not
slong_repeat:   supported song repeat or not
long_level:     supported longpress level
long_repeat:    supported longpress repeat or not
multiple_click: supported multiple clicks or not
*/

#define CONFIG_KEY_0 \
    EINT_KEY_0,\
    {default_t_p,\
    default_t_r,\
    default_t_end,\
    default_t_repeat,\
    default_t_l_p1,\
    default_t_l_p2,\
    default_t_l_p3,\
    default_t_slong},\
    {CFG_SUPPORT_PRESS_RELEASE,\
    CFG_SUPPORT_SLONG,\
    CFG_SUPPORT_SLONG_REPEAT,\
    CFG_SUPPORT_LONG_PRESS_3,\
    CFG_SUPPORT_LONG_REPEAT,\
    CFG_SUPPORT_MULTIPLE_CLICK_TRIPLE}

#define CONFIG_KEY_1 \
    EINT_KEY_1,\
    {default_t_p,\
    default_t_r,\
    default_t_end,\
    default_t_repeat,\
    default_t_l_p1,\
    default_t_l_p2,\
    default_t_l_p3,\
    default_t_slong},\
    {CFG_SUPPORT_PRESS_RELEASE,\
    CFG_SUPPORT_SLONG,\
    CFG_SUPPORT_SLONG_REPEAT,\
    CFG_SUPPORT_LONG_PRESS_3,\
    CFG_SUPPORT_LONG_REPEAT,\
    CFG_SUPPORT_MULTIPLE_CLICK_TRIPLE}

#define EINT_KEY_MAPPING                        \
                        {CONFIG_KEY_0},         \
                        {CONFIG_KEY_1},


#define KEY_MAPPING {                           \
                        EINT_KEY_MAPPING        \
}


#define EINT_KEY_NUMBER             2

#define KEY_SUPPORT_NUMBER          EINT_KEY_NUMBER


#ifdef __cplusplus
}
#endif

#endif
