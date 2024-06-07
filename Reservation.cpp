#include <iostream>
#include "Reservation.h"

using namespace std;

// Constructor
Reservation::Reservation(Guest **guests, int num_guests, Date check_in_date, Date check_out_date)
{
    guests=guests;
    num_guests=num_guests;
    check_in_date=check_in_date;
    check_out_date=check_out_date;

}

// Constructor por defecto
Reservation::Reservation()
{
    num_guests=0;
    

}

int Reservation::get_numberGuests(){
    return num_guests;

}

void Reservation::set_Room(Room *roomadd){
    room=roomadd;
}

int Reservation::get_numberReservation(){
    return number;
}


// Metodo para aniadir un cliente a la reserva
bool Reservation::addGuest(Guest *guest)
{
   return true; 

}

// // Metodo para eliminar un cliente de la reserva
// bool Reservation::deleteGuest(Guest *guest)
// {
//     return true;
// }

// Metodos get y set

// Destructor
// Reservation::~Reservation()
// {
// }
