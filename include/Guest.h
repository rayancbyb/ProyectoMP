#ifndef _GUEST_H
#define _GUEST_H

#include <iostream>
using namespace std;
enum Gender
{
    FEMALE,
    MALE
};

class Guest
{
private:
    string name;        // El nombre del cliente
    int ID;             // El número ID del cliente
    int contact_number; // El teléfono para contactar con el cliente
    Gender gender;      // El género del cliente

public:
    // Constructor
    Guest(string name, int ID, int contact_number, Gender gender);
    // Constructor por defecto
    Guest();

    // Metodos get y set
     int getID_Guest();
};

#endif