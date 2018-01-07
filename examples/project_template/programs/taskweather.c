#include "taskweather.h"
#include "http.h"

void get_weather_task(void *pvParameters)
{
    printf("hello,this is get weather task");
    while(1){
		vTaskDelay(DelayWeather);
		printf("websocket_task\n");
        //printf("%s",http_get("http://api.yytianqi.com/forecast7d?city=123.113.202.176&key=eio96htompnekgpg"));
        printf("%s",http_get("https://free-api.heweather.com/s6/weather/forecast?location=shanghai&key=dea2f74f82314806b66ce788fb7120e5"));
    }
    vTaskDelete(NULL);
}

void user_task(){
    xTaskCreate(get_weather_task, "get_weather_task", 256, NULL, 2, NULL);
}

