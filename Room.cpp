#include "Room.h"
#include <iostream>

using namespace std;

// Constructor

Room::Room(int number, RoomType type, double price_night)
{
    number=number;
    type=type;
    price_night=price_night;
}

// Constructor por defecto
Room::Room()
{
    number=0;
    
    price_night=0;
}


// Metodos get y set
int Room::get_numberRoom(){
    return number;

}

RoomType Room::get_RoomType(){
   return type;
}