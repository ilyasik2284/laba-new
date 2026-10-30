#include "HotelRoom.h"

HotelRoom::HotelRoom() 
    : roomNumber(0), floor(1), totalBeds(1), occupiedBeds(0), isBooked(false), guestGender("нет") {}

HotelRoom::HotelRoom(int rNum, int fl, int tBeds, int occBeds, bool booked, const string& gender)
    : roomNumber(rNum),
      floor(fl),
      totalBeds(tBeds),
      occupiedBeds(occBeds),
      isBooked(booked),
      guestGender(gender) {
}

HotelRoom::HotelRoom(const HotelRoom& other) {
    this->roomNumber = other.roomNumber;
    this->floor = other.floor;
    this->totalBeds = other.totalBeds;
    this->occupiedBeds = other.occupiedBeds;
    this->isBooked = other.isBooked;
    this->guestGender = other.guestGender;
}

HotelRoom::~HotelRoom() {

}

int HotelRoom::getRoomNumber() const { return roomNumber; }
int HotelRoom::getFloor() const { return floor; }
int HotelRoom::getTotalBeds() const { return totalBeds; }
int HotelRoom::getOccupiedBeds() const { return occupiedBeds; }
bool HotelRoom::getIsBooked() const { return isBooked; }
string HotelRoom::getGuestGender() const { return guestGender; }


void HotelRoom::setRoomNumber(int rNum) { roomNumber = rNum; }
void HotelRoom::setFloor(int fl) { floor = fl; }
void HotelRoom::setTotalBeds(int tBeds) { totalBeds = tBeds; }
void HotelRoom::setOccupiedBeds(int occBeds) { occupiedBeds = occBeds; }
void HotelRoom::setIsBooked(bool booked) { isBooked = booked; }
void HotelRoom::setGuestGender(const string& gender) { guestGender = gender; }

void HotelRoom::display() const {
    string bookingStatus;
    if (isBooked) {
        bookingStatus = "Да";
    } else {
        bookingStatus = "Нет";
    }

    cout << "Комната №" << roomNumber 
              << " | Этаж: " << floor 
              << " | Мест всего: " << totalBeds 
              << " | Занято: " << occupiedBeds 
              << " | Бронь: " << bookingStatus 
              << " | В проживании: " << guestGender << endl;
}

