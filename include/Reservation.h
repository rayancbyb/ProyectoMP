#ifndef _RESERVATION_H
#define _RESERVATION_H

#include <iostream>
#include "Guest.h"
#include "Room.h"
#include "Date.h"

using namespace std;     

class Reservation
{
private:
    int number;          // El número de reserva
    Room *room;          // Puntero a la habitación correspondiente
    int num_guests;      // El número de clientes de la reserva
    Guest **guests;      // La lista de cientes de la reserva
    Date check_in_date;  // La fecha de entrada
    Date check_out_date; // La fecha de salida

public:
    // Constructor
    Reservation(Guest **guests, int num_guests, Date check_in_date, Date check_out_date);

    // Constructor por defecto
    Reservation();

    // Metodo para aniadir un cliente a la reserva
    bool addGuest(Guest *guest);

    // Metodo para eliminar un cliente de la reserva
    bool deleteGuest(Guest *guest);

    // Metodos get y set
    int get_numberGuests();
    void set_Room(Room *roomadd);
    int get_numberReservation();


    // Destructor
    ~Reservation();
};
#endif