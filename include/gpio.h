#ifndef GPIO_H
#define GPIO_H

#include "main.h"

void GPIO_Init(
    GPIO_InitTypeDef *GPIO_InitStruct,
    uint16_t Pin,
    uint32_t Mode,
    uint32_t Pull,
    uint32_t Speed
);

#endif