#pragma once
#include <string>
#include <iostream>
using namespace std;

class HotelRoom{
private:
    int roomNumber;
    int floor;
    int totalBeds;
    int occupiedBeds;
    bool isBooked;
    string guestGender;

public:
    HotelRoom();
    HotelRoom(int rNum, int fl, int tBeds, int occBeds, bool booked, const string& gender);
    HotelRoom(const HotelRoom& other);
    ~HotelRoom();

    int getRoomNumber() const;
    int getFloor() const;
    int getTotalBeds() const;
    int getOccupiedBeds() const;
    bool getIsBooked() const;
    string getGuestGender() const;

    void setRoomNumber(int rNum);
    void setFloor(int fl);
    void setTotalBeds(int tBeds);
    void setOccupiedBeds(int occBeds);
    void setIsBooked(bool booked);
    void setGuestGender(const string& gender);

    void display() const;
};
