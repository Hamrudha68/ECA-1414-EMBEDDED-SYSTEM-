
#include <LPC214x.h>

// Pin Configuration
#define SWITCH_PIN (1 << 14)  // P0.14
#define LED_PIN    (1 << 16)  // P0.16

// GPIO Initialization
void GPIO_Init(void)
{
    // Configure switch pin as input
    IO0DIR &= ~SWITCH_PIN;

    // Configure LED pin as output
    IO0DIR |= LED_PIN;

    // Initially turn OFF LED
    IO0CLR = LED_PIN;
}

// Read Switch Status
int Read_Switch(void)
{
    if(IO0PIN & SWITCH_PIN)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Turn ON LED
void LED_ON(void)
{
    IO0SET = LED_PIN;
}

// Turn OFF LED
void LED_OFF(void)
{
    IO0CLR = LED_PIN;
}

// Main Program
int main(void)
{
    int switch_status;

    // Initialize GPIO
    GPIO_Init();

    while(1)
    {
        // Read switch input
        switch_status = Read_Switch();

        // Control LED based on switch
        if(switch_status == 1)
        {
            LED_ON();
        }
        else
        {
            LED_OFF();
        }
    }

    return 0;
}
