#include "gpio.h"

void GPIO_Init(
    GPIO_InitTypeDef *GPIO_InitStruct,
    uint16_t Pin,
    uint32_t Mode,
    uint32_t Pull,
    uint32_t Speed
) {
    GPIO_InitStruct->Pin = Pin;
    GPIO_InitStruct->Mode = Mode;
    GPIO_InitStruct->Pull = Pull;
    GPIO_InitStruct->Speed = Speed;
}