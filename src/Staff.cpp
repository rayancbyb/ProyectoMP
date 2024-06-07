#include "Staff.h"
#include <iostream>



using namespace std;

// Constructor
Staff::Staff(string name, int ID_number, Role role)
{
    name=name;
    ID_number=ID_number;
    role=role;
    num_reservations=0;
    max_reservations=128;
    reservations=new Reservation*[num_reservations];

}

// Constructor Por defecto
Staff::Staff()
{
}

// Metodos get y set
int Staff::getId_number(){
    return ID_number;

}
int Staff::get_num_reservations(){
    return num_reservations;
}

int Staff::get_reservas(){
reservations[a]->get
}

// Metodos aniadir y eliminar reservas
// bool Staff::addReservation(Reservation *reservation)
// {
//     if(num_reservations<max_reservations){
//         reservations=new Reservation*[num_reservations+1];
//         reservations[0]=reservation;
//         return true;
//     }
//     else {return false;}

// }



// bool Staff::deleteReservation(Reservation *reservation)
// {
//     return true;

// }

// Destructor
//Staff::~Staff()
//{
//}
