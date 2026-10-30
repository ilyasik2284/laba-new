#pragma once
#include <iostream>
#include <vector>
#include "HotelRoom.h"
using namespace std;

class Hotel{
private:
    vector<HotelRoom> rooms;

public:
    Hotel();
    Hotel(const Hotel& other);

    ~Hotel();

    void addRoom(const HotelRoom& room);
    HotelRoom& operator[](int index);
    // позволяет обращаться к номеру по индексу в массиве
    const HotelRoom& operator[](int index) const;

    int getOccupiedBedsCount() const;
    void displayBookedRooms() const;
    void displayAllRooms() const;

    Hotel& operator=(const Hotel& other);
    // копирует одну гостишку в другую
};