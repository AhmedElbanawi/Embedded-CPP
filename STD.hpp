#ifndef STD_HPP
#define STD_HPP

namespace STD{

    namespace TYPES{

        typedef unsigned char uint8;

    };

    namespace MCAL{

        constexpr STD::TYPES::uint8 PORTC = 0x35;

        constexpr STD::TYPES::uint8 PIN0 = 1<<0;
        constexpr STD::TYPES::uint8 PIN1 = 1<<1;
        constexpr STD::TYPES::uint8 PIN2 = 1<<2;
        constexpr STD::TYPES::uint8 PIN3 = 1<<3;
        constexpr STD::TYPES::uint8 PIN4 = 1<<4;
        constexpr STD::TYPES::uint8 PIN5 = 1<<5;
        constexpr STD::TYPES::uint8 PIN6 = 1<<6;
        constexpr STD::TYPES::uint8 PIN7 = 1<<7; 

        typedef enum{

            DIO_LOW=0,

            DIO_HIGH

        }DIO_STATE;
        

    };

};

#endif