#include "sys.h"
#include "delay.h"
#include "led.h"
#include "usart.h"
#include "adc.h"

int main(void)
{ 
	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	delay_init(84);		
	LED_Init();
	uart_init(9600,2);
	Adc_Init(SCANMODE);
	
	while(1)
	{
		
		printf("%d",adc_dma_tab[0]);
		printf("%d",adc_dma_tab[1]);
		printf("%d",adc_dma_tab[2]);
		printf("%d",adc_dma_tab[3]);
		printf("%d",adc_dma_tab[4]);
		printf("%d",adc_dma_tab[5]);
          
	        
	}		    
}         
          

