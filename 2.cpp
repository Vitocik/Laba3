Задание 2: Cоздать класс с полями. 
Реализовать в классе методы: 
- конструктор по умолчанию; 
- конструктор перезагрузки с параметрами; 
- деструктор для освобождения памяти (с сообщением об уничтожении объекта); 
- функции обработки данных (1 и 2), указанные в индивидуальном задании (табл. 11.2, столбцы 3 и 4);
- функцию формирования строки информации об объекте. 
Создать проект для демонстрации работы: сформировать объекты со значениями-константами и с введенными значениями полей объекта из компонентов Edit. Выводить результаты в компонент Memo. 
Задача:
Дата (три числа): день, месяц, год. 
Функция-метод 1 обработки данных - определить, совпадают ли номер месяца и число дня. 
Функция-метод 2 обработки данных - увеличить дату на один месяц.
Решение:

#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(4), month(4), year(2020) {}

    // Конструктор перезагрузки с параметрами
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    ~Date() {
        cout << "Объект уничтожен" << endl;
    }

    bool checkDayMonth() {
        return (day == month);
    }

    void increaseMonth() {
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    string getInfo() {
        return "Дата: " + to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Date date1;
    Date date2(8, 10, 2018);

    cout << date1.getInfo() << endl;
    cout << date2.getInfo() << endl;

    if (date1.checkDayMonth()) {
        cout << "Номер месяца совпадает с числом дня." << endl;
    }
    else {
        cout << "Номер месяца не совпадает с числом дня." << endl;
    }

    date2.increaseMonth();
    cout << "Дата после увеличения на один месяц: " << date2.getInfo() << endl;

    return 0;
}
