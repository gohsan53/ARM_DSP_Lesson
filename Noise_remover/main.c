#include "stm32f4xx_hal.h"              // Keil::Device:STM32Cube HAL:Common

uint32_t freq ;

int main()
{
	HAL_Init();
	freq = HAL_RCC_GetHCLKFreq();
	
	while(1)
	{
		
	}
}


void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}