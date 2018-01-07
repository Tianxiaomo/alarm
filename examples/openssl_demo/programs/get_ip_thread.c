#include "http.h"
#include "get_ip_thread.h"

void get_ip_thread(void *p){
    printf("hello,this is get ip task");
    printf("%s",http_get("http://pv.sohu.com/cityjson?ie=utf-8"));
    vTaskDelete(NULL);
}

