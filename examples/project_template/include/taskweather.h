#ifndef _TASK_H_  
#define _TASK_H_  

#include "esp_common.h"

#define DelayWeather 10000/portTICK_RATE_MS
#define URLWEATHER "http://http://api.yytianqi.com"

#define FORECAST_7_D "/forecast7d"
#define OBSERVE "/observe"
#define WEATHERHOURS "/weatherhours"
#define WEATHERINDEX "/weatherindex"
#define AIR "/air"
#define AQI "/aqi"
#define GETSUNINFO "getsuninfo"
#define ALARMINFO "/alarminfo"

//forecast7d?city=123.113.202.176&

#define KEYWEATHER "key=eio96htompnekgpg"

//#define 

void user_task();

#endif