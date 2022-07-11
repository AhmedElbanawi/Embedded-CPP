#include "STD.hpp"
#include "DIO.hpp"
#include "util/delay.h"

int main(void)
{

    DIO<STD::TYPES::uint8,
        STD::TYPES::uint8,
        0x35,
        1<<0> pinc0;

     pinc0.Set_Pin_Output();



    while (1)
    {
        pinc0.Set_Pin_Toggle();
        _delay_ms(50);

        
    }
    
    return 0;
}