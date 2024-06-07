#ifndef _STAFF_H
#define _STAFF_H

#include <iostream>
#include "Reservation.h"

using namespace std;

enum Role{
    MANAGER,
    EMPLOYEE
};

class Staff
{
private:
    string name;                // El nombre del miembro de personal
    int ID_number;              // El número ID del miembro de personal
    Role role;                  // El papel del miembro de personal: manager or employee
    int max_reservations;       // El máximo número de reservas que puede gestionar el miembro
    int num_reservations;       // El número de reservas que el miembro está gestionando
    Reservation **reservations; // La lista de reservas menejadas por el miembro

public:
    // Constructor
    Staff(string name, int ID_number, Role role);

    // Constructor Por defecto
    Staff();

    // Metodos get y set
    int getId_number();
    int get_num_reservations();

    int get_reservas();

    // Metodos aniadir y eliminar reservas
    bool addReservation(Reservation *reservation);
    bool deleteReservation(Reservation *reservatio);

    // Destructor
    ~Staff();
};

#endif