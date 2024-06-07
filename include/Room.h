#ifndef _ROOM_H
#define _ROOM_H

#include <iostream>

using namespace std;

enum RoomType
{
    INDIVIDUAL=1,
    DOUBLE=2,
    SUITE=6
};

class Room
{
private:
    int number;         // El número de habitación
    RoomType type;      // El tipo de habitación: individual, double or suite
    double price_night; // El precio de la habitación por noche

public:
    // Constructor
    Room(int number, RoomType type, double price_night);


    // Constructor por defecto
    Room();

    // Metodos get y set
      int get_numberRoom();

      RoomType get_RoomType();


};

#endif