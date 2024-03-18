Задание 1. Создание данных типа «класс»
Задание: для всех вариантов задач создать класс с указанными двумя полями
(Поле 1, Поле 2) и тремя методами:
- конструктор для инициализации объекта;
- функция формирования строки с информацией об объекте;
- функция обработки значений полей по индивидуальному варианту.
В основной программе вводить значения полей каждого объекта из компонентов
Edit и выводить результаты в компонент Memo.
Поле 1- Цена товара 
Поле 2 - Количество единиц товара 
Функция обработки полей - Вычислить общую стоимость товара.
  Решение:
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Product {
private:
    double price;
    int quantity;

public:
    Product(double p, int q) : price(p), quantity(q) {}

    string getInfo() {
        stringstream ss;
        ss << "Цена: $" << price << " | Количество: " << quantity;
        return ss.str();
    }

    double calculateTotalPrice() {
        return price * quantity;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    double inputPrice;
    int inputQuantity;

    cout << "Введите цену товара: $";
    cin >> inputPrice;
    cout << "Введите количество едениц товара: ";
    cin >> inputQuantity;

    Product product(inputPrice, inputQuantity);

    cout << "Информация о продукте: " << product.getInfo() << endl;
    cout << "Суммарная цена: $" << product.calculateTotalPrice() << endl;

    return 0;
}

