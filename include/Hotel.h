#ifndef _HOTEL_H
#define _HOTEL_H

#include <iostream>
#include "Room.h"
#include "Staff.h"


using namespace std;

class Hotel
{

private:
    string name;
    string address;
    int num_stars;

    int max_staff;
    int max_rooms;

    int num_staff;
    int num_rooms;

     Staff **staff_members;
     Room **rooms;

public:
    // Cosntructor
    Hotel(string name, string address, int num_stars);

    // Contrsuctor por defecto
    Hotel();
    // Metodos get y set

    // Metodo para aniadir trabajdores
    bool addStaffMember(Staff *new_member);
    // Metodo para aniadir una habitacion
    bool addRoom(Room *new_room);



    // Metodos para eliminar
     bool deleteStaffMember(Staff *member_to_delete);
     bool deleteRoom(Room *room_to_delete);


     // aniadir reserva
     bool addReservation(Reservation* reservation);
//Cancelar Reserva
bool cancelReservation(Reservation* reservation);

     ~Hotel();
};

#endif
