/*
 * LED.c
 *
 *  Created on: 26.09.2014
 *      Author: reto
 */


#include "Platform.h"
#include "Led.h"


void LED_Deinit(void){
	#if PL_NOF_LEDS >=1
		LED1_Off();
	#endif

	#if PL_NOF_LEDS >=2
		LED2_Off();
	#endif

	#if PL_NOF_LEDS >=3
		LED3_Off();
	#endif

		LED1_Deinit();
		LED2_Deinit();
		LED3_Deinit();
}

/*!
 * \brief Initialization of LED
 *
 * This function initializes all the LED's which are configured
 * from the plattform settings.
 *
 * \note [any note about the function you might have]
 * \author Reto Mathis, Philip Herzog
 * \date 28.09.2014
 */
void LED_Init(void){
	LED1_Init();
	LED2_Init();
	LED3_Init();

	#if PL_NOF_LEDS >= 1
	LED1_Off();
	#endif

	#if PL_NOF_LEDS >= 2
	LED2_Off();
	#endif

	#if PL_NOF_LEDS >=3
	LED3_Off();
	#endif

}

void LED_Test(void){

	LED1_On();
	LED2_On();
	LED3_On();

	LED1_Off();
	LED2_Off();
	LED3_Off();

	LED1_Neg();
	LED2_Neg();
	LED3_Neg();

/*
 * TODO LED Error routine
 */
}



