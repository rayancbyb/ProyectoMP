#include "Hotel.h"
#include <iostream>

using namespace std;

// Constructor
Hotel::Hotel(string name, string address, int num_stars)
{
    name = name;
    address = address;
    num_stars = num_stars;
    max_staff = 8;
    max_rooms = 8;
    num_staff = 0;
    staff_members = new Staff *[max_staff];
    rooms = new Room *[max_rooms];
}

// Cosntructor por defecto
Hotel::Hotel()
{

    // esto lo puedo cambiar
    max_staff = 8;
    max_rooms = 8;
    staff_members = new Staff *[max_staff];
    rooms = new Room *[max_rooms];
}

bool Hotel::addStaffMember(Staff *new_member)
{
    //Obtengo el id del miembro 
    int IdStaff = new_member->getId_number();
    //Compruebo si ya esta agregado
    for (int i = 0; i < num_staff; i++)
    {
        if (IdStaff == staff_members[i]->getId_number())
        {
            return false;
        }
    }
    //miro si hay espacio para meterlo y lo meto sino duplico el tamano del staff como dice en el guion
    if (num_staff < max_staff)
    {
        staff_members[num_staff + 1] = new_member;
    }
    else
    {
        max_staff = max_staff * 2;
        Staff **auxiliar = new Staff *[max_staff];
        for (int i = 0; i < num_staff; ++i)
        {
            auxiliar[i] = staff_members[i];
        }
        delete[] staff_members;
        staff_members = auxiliar;
        staff_members[num_staff + 1] = new_member;
    }
    num_staff++;
    return true;
}


bool Hotel::addRoom(Room *new_room)
{
      //Obtengo el numero del cuarto
    int NumberRoom = new_room->get_numberRoom();
    //Compruebo si ya esta agregado
    for (int i = 0; i < num_rooms; i++)
    {
        if (NumberRoom == rooms[i]->get_numberRoom())
        {
            return false;
        }
    }
    //miro si hay espacio para meterlo y lo meto sino duplico el tamano del room como dice en el guion
    if (num_staff < max_staff)
    {
        rooms[num_rooms + 1] = new_room;
    }
    else
    {
        max_rooms = max_rooms * 2;
        Room **auxiliarRoom = new Room *[max_rooms];
        for (int i = 0; i < num_rooms; ++i)
        {
            auxiliarRoom[i] = rooms[i];
        }
        delete[] staff_members;
        rooms = auxiliarRoom;
        rooms[num_rooms + 1] = new_room;
    }
    num_rooms++;
    return true;
}



bool Hotel::deleteStaffMember(Staff *member_to_delete)
{
    //Obtengo el id del miembro 
    int IdStaff = member_to_delete->getId_number();
    //Compruebo si ya esta agregado
    for (int i = 0; i < num_staff; i++)
    {
        if (IdStaff == staff_members[i]->getId_number())
        {
            for (int j=i;j<num_staff;j++){

           
            staff_members[j] = staff_members[j+1] ;
             }
             num_staff--;
             if((num_staff<(max_staff/2))&& (max_staff>8)){

                max_staff = max_staff / 2;
            Staff **auxiliar = new Staff *[max_staff];
            for (int i = 0; i < num_staff; ++i)
        {
            auxiliar[i] = staff_members[i];
        }
        delete[] staff_members;
        staff_members = auxiliar;

             }
            return true;
        }
        
            
        
    }
    return false;
    
}

bool Hotel::deleteRoom(Room *room_to_delete)
{
   
    //Obtengo el id del miembro 
    int NumberRoom = room_to_delete->get_numberRoom();
    //Compruebo si ya esta agregado
    for (int i = 0; i < num_rooms; i++)
    {
        if (NumberRoom == rooms[i]->get_numberRoom())
        {
            for (int j=i;j<num_staff;j++){

           
            rooms[j] = rooms[j+1] ;
             }
             num_rooms--;
             if((num_rooms<(max_rooms/2))&& (max_rooms>8)){

                max_rooms = max_rooms / 2;
            Room **auxiliarRoom = new Room *[max_rooms];
            for (int i = 0; i < num_rooms; ++i)
        {
            auxiliarRoom[i] = rooms[i];
        }
        delete[] rooms;
        rooms = auxiliarRoom;

             }
            return true;
        }
        
            
        
    }
    return false;
}


bool Hotel::addReservation(Reservation* reservation){

int NumberGuests= reservation->get_numberGuests();

int IdStaffMenosReservas =staff_members[0]->getId_number();

      for(int i=0;i<num_rooms;i++){
    if(NumberGuests<=rooms[i]->get_RoomType()){
        reservation->set_Room(rooms[i]);
        for(int j=0;j<num_staff;j++){
            if(IdStaffMenosReservas>staff_members[j]->get_num_reservations()){
                IdStaffMenosReservas=staff_members[j]->getId_number();
            }
        }

      
        return true;
    }}  
    



return false;
}

bool Hotel::cancelReservation(Reservation* reservation){
      int NuberReserva = reservation->get_numberReservation();
      for (int i=0;i<num_staff;i++){

        for (int j=0;i< staff_members[i]->get_num_reservations();j++){
            if(NuberReserva==staff_members[i]->
        }
      }
   
}



Hotel::~Hotel()
{
    delete[] rooms;
    delete[] staff_members;

}