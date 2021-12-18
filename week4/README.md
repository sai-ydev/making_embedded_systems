# Week 4 Submission

> On your final project board, make blinky for yourself. Then add a button to turn the LED on and off. Bonus points for making the button cause an interrupt. Triple bonus points for debouncing the button signal.

My code sample makes use of interrupts to change the program state. I am using a timer to implement the debounce logic. 

> What are the hardware registers that cause the LED to turn on and off?

The LED is interfaced to `PA5`. The LED is set as an output using `GPIOA_ODR`.The pin states are changed in the `GPIOA` register. 

> What are the button registers that you read? 

The button is interfaced to `PC13`. The interrupt is setup using the `GPIO_EXTI` register. It is possible to memory directly but I haven't attempted it. I plan to re-attempt the example using STM32Cube,
