#include <iostream>
using namespace std;

// Прототипы функций
void inputX();
void inputY();
void inputZ();
double sumFractionalParts(double x, double y, double z);
int sumIntegerParts(int x, int y, int z);

int main() {
    int choice = 0;
    
    while(true) {
        // Вывод меню
        cout << "Меню:" << endl;
        cout << "1. Ввести вещественное число X" << endl;
        cout << "2. Ввести вещественное число Y" << endl;
        cout << "3. Ввести вещественное число Z" << endl;
        cout << "4. Найти сумму дробных частей трех чисел" << endl;
        cout << "5. Найти сумму целых частей трех чисел" << endl;
        cout << "6. Выход" << endl;
        
        cout << "Ваш выбор: ";
        cin >> choice;

        switch(choice) {
            case 1:
                inputX();  // Функция ввода числа X
                break;
            case 2:
                inputY();  // Функция ввода числа Y
                break;
            case 3:
                inputZ();  // Функция ввода числа Z
                break;
            case 4:
                // Вызываем функцию суммы дробных частей
                cout << "Сумма дробных частей: " << sumFractionalParts(0, 0, 0) << endl;
                break;
            case 5:
                // Вызываем функцию суммы целых частей
                cout << "Сумма целых частей: " << sumIntegerParts(0, 0, 0) << endl;
                break;
            case 6:
                return 0;  // Завершение программы
            default:
                cout << "Неверный ввод! Попробуйте снова." << endl;
        }
    }
}

// Реализация функций

void inputX() {
    // Здесь реализуйте ввод вещественного числа X
    int x;
    cout << "Введите Х" << endl;
    cin >> x >> endl;
    // Ответственный Олег- ветка branch-fun_1
}
void inputY() {
    int y;
    cout <<"Введите y" << endl;
    cin >> y >> endl;
    //Ответственныq  Александр -ветка branch_fun_2
}

void inputZ() {
    int z;
    // Ответственная Евгения- ветка branch_fun_3
    cout << "Введите Z" << endl;
    cin >> z >> endl;
}

double sumFractionalParts(double x, double y, double z) {
    // Здесь реализуйте вычисление суммы дробных частей трех чисел
   //Ответственная Ольга -ветка branch_fun_4
   cout << "Введите три числа: ";
   cin >> x >> y >> z;
   // Вычисление дробных частей
   double fractional_part_x = modf(x, &x);
   double fractional_part_y = modf(y, &y);
   double fractional_part_z = modf(z, &z);

   // Сумма дробных частей
   double sum = fractional_part_x + fractional_part_y + fractional_part_z;

   // Вывод результата
   cout << "Сумма дробных частей: " << sum << endl;

   return 0;
}


int sumIntegerParts(int x, int y, int z) {
    // Здесь реализуйте вычисление суммы целых частей трех чисел
   // Ответственная Мария, ветка branch_fun_5
   cout << "Функция не реализована." << endl;
    return 0;  // Пустое значение, замените на результат
}