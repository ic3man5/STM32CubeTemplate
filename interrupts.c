#include "stm32f3xx_hal.h"

void NMI_Handler()
{
}

void HardFault_Handler()
{
  while (1);
}

void MemManage_Handler()
{
}

void BusFault_Handler()
{
}

void UsageFault_Handler()
{
}

void SVC_Handler()
{
}

void DebugMon_Handler()
{
}

void PendSV_Handler()
{
}

void SysTick_Handler()
{
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
}
