
#include <iostream>
#include "Hotel.h"
using namespace std;

int main() {

    // Создаем гостиницу
    Hotel hotel;

    // Создаем гостиничные номера
    HotelRoom room1(101, 1, 3, 2, true, "Мужчина");
    HotelRoom room2(102, 1, 2, 1, false, "Женщина");
    HotelRoom room3(201, 2, 4, 3, true, "Мужчина");
    HotelRoom room4(202, 2, 2, 0, false, "Нет");

    // Добавляем номера в гостиницу
    hotel.addRoom(room1);
    hotel.addRoom(room2);
    hotel.addRoom(room3);
    hotel.addRoom(room4);

    // Выводим все номера
    cout << "=== ИНФОРМАЦИЯ О ГОСТИНИЦЕ ===" << endl;
    hotel.displayAllRooms();

    // Подсчитываем занятые спальные места
    cout << "\nОбщее количество занятых мест: "
         << hotel.getOccupiedBedsCount() << endl;

    // Выводим забронированные номера
    hotel.displayBookedRooms();

    // Проверяем оператор индексации
    cout << "\n=== ПРОВЕРКА ОПЕРАТОРА [] ===" << endl;
    cout << "Информация о первом номере:" << endl;
    hotel[0].display();

    // Изменяем количество занятых мест
    hotel[1].setOccupiedBeds(2);

    cout << "\nПосле изменения количества занятых мест:" << endl;
    hotel[1].display();

    // Проверяем конструктор копирования
    cout << "\n=== ПРОВЕРКА КОНСТРУКТОРА КОПИРОВАНИЯ ===" << endl;
    Hotel hotelCopy(hotel);
    hotelCopy.displayAllRooms();

    // Проверяем оператор присваивания
    cout << "\n=== ПРОВЕРКА ОПЕРАТОРА ПРИСВАИВАНИЯ ===" << endl;
    Hotel hotel2;
    hotel2 = hotel;

    hotel2.displayAllRooms();

    // Проверяем конструктор копирования HotelRoom
    cout << "\n=== ПРОВЕРКА КОПИРОВАНИЯ НОМЕРА ===" << endl;
    HotelRoom roomCopy(room1);
    roomCopy.display();

    return 0;
}
