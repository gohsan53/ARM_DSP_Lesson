#include "stm32f4xx_hal.h"              // Keil::Device:STM32Cube HAL:Common
#include "arm_math.h"

#define		SIG_LENGTH	320

uint32_t freq;
//uint32_t counter;

extern void SystemClock_Config(void);
extern float32_t inputSignal_f32_1kHz_15kHz[SIG_LENGTH];
void plot_input_signal(void);

float32_t inputSample;

int main()
{
	int i;
	
	HAL_Init();
	SystemClock_Config();
	freq = HAL_RCC_GetHCLKFreq();
	
	while(1)
	{
//		counter++;
//		if(counter == 0) counter = 0;
//		for(i=0; i<3000; i++){}
	}
}

void plot_input_signal(void)
{
	int i,j;
	for(i=0; i<SIG_LENGTH; i++)
	{
		inputSample = inputSignal_f32_1kHz_15kHz[i];
//		HAL_Delay(1);
		for(j=0; j<3000; j++) {}
	}
}

void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}
