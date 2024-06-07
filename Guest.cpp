#include "Guest.h"
#include <iostream>

using namespace std;

// Constructor

Guest::Guest(string name, int ID, int contact_number, Gender gender)
{
    name=name;
    ID=ID;
    contact_number=contact_number;
    gender=gender;

}
// Constructor por defecto
Guest::Guest()
{
  ID=0;
  contact_number=0;
  name="Desconocido";
    
}
// Metodos get y set
  int Guest::getID_Guest(){
    return ID;

}