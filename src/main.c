#include "main.h"
#include "led.h"
#include "gpio.h"
#include "system.h"

int main(void)
{
    SystemCoreClockUpdate();
    HAL_Init();
    __HAL_RCC_GPIOA_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_Init(
        &GPIO_InitStruct,
        GPIO_PIN_5,
        GPIO_MODE_OUTPUT_PP,
        GPIO_NOPULL,
        GPIO_SPEED_FREQ_LOW
    );

    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    while (1)
    {
        HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
        HAL_Delay(5000);
    }
}
