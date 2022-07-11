#ifndef DIO_HPP
#define DIO_HPP

template<typename port_addr_type,
         typename port_val_type,
         const port_addr_type address,
         const port_val_type val>

class DIO{
    
public:

    
        

    DIO();
    ~DIO();

    void Set_Pin_Output(void);

    void Set_Pin_Input_Free(void);

    void Set_Pin_Input_Pullup(void);

    void Set_Pin_High(void);

    void Set_Pin_Low(void);

    void Set_Pin_Toggle(void);

    STD::MCAL::DIO_STATE Read(void);


private:

    static constexpr port_addr_type addr_dir = address - 1;

    static constexpr port_addr_type addr_read = address - 2;

};

#endif