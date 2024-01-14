#include <stdio.h>
#include "esp_log.h"

void app_main(void)
{
    esp_log_level_set("LOG", ESP_LOG_INFO);
    ESP_LOGE("LOG", "This is an error");
    ESP_LOGW("LOG", "This is a warning");
    ESP_LOGI("LOG", "This is an info");
    ESP_LOGD("LOG", "This is a debug");
    ESP_LOGV("LOG", "This is a verbose");
int nuber = 0;
    ESP_LOGE("TAG 2", "This is an error", nuber++);
    ESP_LOGW("TAG 2", "This is a warning", nuber++);
    ESP_LOGI("TAG 2", "This is an info", nuber++);
    ESP_LOGD("TAG 2", "This is a debug", nuber++);
    ESP_LOGV("TAG 2", "This is a verbose", nuber++);   
}