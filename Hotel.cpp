#include "Hotel.h"

Hotel::Hotel();

Hotel::Hotel(const Hotel& other){
    rooms = other.rooms;
}

Hotel::~Hotel() {}

void Hotel::addRoom(const HotelRoom& room){
    rooms.push_back(room);
}

HotelRoom& Hotel::operator[](int index){
    return rooms[index];
}

const HotelRoom& Hotel::operator[](int index) const{
    return rooms[index];
}

int Hotel::getOccupiedBedsCount() const {
    int count = 0;

    for(int i = 0; i < rooms.size(); i++){
        count += rooms[i].getOccupiedBeds();
    }
    return count;
}

void Hotel::displayBookedRooms() const {
    cout << "\nЗабронированные номера:\n";

    for (int i = 0; i < rooms.size(); i++) {
        if (rooms[i].getIsBooked()) {
            rooms[i].display();
        }
    }
}

void Hotel::displayAllRooms() const {
    cout << "\nВсе номера гостиницы:\n";

    for (int i = 0; i < rooms.size(); i++) {
        rooms[i].display();
    }
}

Hotel& Hotel::operator=(const Hotel& other){
    if (this != &other){
        rooms = other.rooms
    }
    return *this; //работаем через разыменовывание чтобы менять ориг объект
}