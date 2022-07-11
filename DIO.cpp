#include "STD.hpp"
#include "DIO.hpp"

template<typename port_addr_type,
         typename port_val_type,
         const port_addr_type address,
         const port_val_type val>

DIO<port_addr_type,
    port_val_type,
    address,
    val>::DIO()
{

}


template<typename port_addr_type,
         typename port_val_type,
         const port_addr_type address,
         const port_val_type val>

DIO<port_addr_type,
    port_val_type,
    address,
    val>::~DIO()
{
    
}


template<typename port_addr_type,
         typename port_val_type,
         const port_addr_type address,
         const port_val_type val>

void DIO<port_addr_type,
    port_val_type,
    address,
    val>::Set_Pin_Output(void)
{
    *reinterpret_cast<volatile port_val_type*const>(addr_dir) |= val;
}

template<typename port_addr_type,
         typename port_val_type,
         const port_addr_type address,
         const port_val_type val>

void DIO<port_addr_type,
    port_val_type,
    address,
    val>::Set_Pin_Input_Free(void)
{
    *reinterpret_cast<volatile port_val_type*const>(addr_dir) &= ~val;
    
    *reinterpret_cast<volatile port_val_type*const>(address) &= ~val;
}

template<typename port_addr_type,
         typename port_val_type,
         const port_addr_type address,
         const port_val_type val>

void DIO<port_addr_type,
    port_val_type,
    address,
    val>::Set_Pin_Input_Pullup(void)
{
    *reinterpret_cast<volatile port_val_type*const>(addr_dir) &= ~val;
    
    *reinterpret_cast<volatile port_val_type*const>(address) |= val;
}

template<typename port_addr_type,
         typename port_val_type,
         const port_addr_type address,
         const port_val_type val>

void DIO<port_addr_type,
    port_val_type,
    address,
    val>::Set_Pin_High(void)
{
    *reinterpret_cast<volatile port_val_type*const>(address) |= val;
}

template<typename port_addr_type,
         typename port_val_type,
         const port_addr_type address,
         const port_val_type val>

void DIO<port_addr_type,
    port_val_type,
    address,
    val>::Set_Pin_Low(void)
{
    *reinterpret_cast<volatile port_val_type*const>(address) &= ~val;
}

template<typename port_addr_type,
         typename port_val_type,
         const port_addr_type address,
         const port_val_type val>

void DIO<port_addr_type,
    port_val_type,
    address,
    val>::Set_Pin_Toggle(void)
{
    *reinterpret_cast<volatile port_val_type*const>(address) ^= val;
}

template<typename port_addr_type,
         typename port_val_type,
         const port_addr_type address,
         const port_val_type val>

STD::MCAL::DIO_STATE DIO<port_addr_type,
    port_val_type,
    address,
    val>::Read(void)
{
   return (*reinterpret_cast<volatile port_val_type*const>(addr_read) & val) ? STD::MCAL::DIO_HIGH : STD::MCAL::DIO_LOW;
}

template class DIO<STD::TYPES::uint8,
                   STD::TYPES::uint8,
                   STD::MCAL::PORTC,
                   STD::MCAL::PIN0>;

template class DIO<STD::TYPES::uint8,
                   STD::TYPES::uint8,
                   STD::MCAL::PORTC,
                   STD::MCAL::PIN1>;

template class DIO<STD::TYPES::uint8,
                   STD::TYPES::uint8,
                   STD::MCAL::PORTC,
                   STD::MCAL::PIN2>;
                   
template class DIO<STD::TYPES::uint8,
                   STD::TYPES::uint8,
                   STD::MCAL::PORTC,
                   STD::MCAL::PIN3>;

template class DIO<STD::TYPES::uint8,
                   STD::TYPES::uint8,
                   STD::MCAL::PORTC,
                   STD::MCAL::PIN4>;

template class DIO<STD::TYPES::uint8,
                   STD::TYPES::uint8,
                   STD::MCAL::PORTC,
                   STD::MCAL::PIN5>;

template class DIO<STD::TYPES::uint8,
                   STD::TYPES::uint8,
                   STD::MCAL::PORTC,
                   STD::MCAL::PIN6>;

template class DIO<STD::TYPES::uint8,
                   STD::TYPES::uint8,
                   STD::MCAL::PORTC,
                   STD::MCAL::PIN7>;