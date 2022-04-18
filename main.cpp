#include "pico/stdlib.h"


int main()
{
    const uint button_pin = 14;
    const uint led_pin = 15;

    gpio_init(led_pin);
    gpio_init(button_pin);

    // LED direction OUT (We send data)
    gpio_set_dir(led_pin, GPIO_OUT);
    // Button direction IN (We receive data)
    gpio_set_dir(button_pin, GPIO_IN);

    gpio_pull_down(button_pin);

    for(;;)
    {
        // Button was pressed
        if (gpio_get(button_pin))
        {
            gpio_put(led_pin, true);
        }

        gpio_put(led_pin, false);
    }
}