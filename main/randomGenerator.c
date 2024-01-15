#include <stdio.h>
#include "esp_log.h"
#include "esp_random.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "math.h"


#define TAG "DICE"

int dice_role()
{
    int random = esp_random();
    int positiveNumber = abs(random);
    int diceNuber = (positiveNumber % 6) + 1;
    return diceNuber;
}

void app_main(void)
{
    
    while (1)
    {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        ESP_LOGI(TAG, "random nuber %ld", esp_random());
    }
    
}