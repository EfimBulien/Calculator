#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    long int x, y, operation;
    while(true)
    {
        cout << "0.Выход\n";
        cout << "1.Сложение двух чисел\n";
        cout << "2.Вычитание из первого числа\n";
        cout << "3.Умножение двух чисел\n";
        cout << "4.Деление одно числа на другое\n";
        cout << "5.Остаток от деления\n";
        cout << "6.Возведение числа в степень\n";
        cout << "7.Квадратный корень из числа\n";
        cout << "8.Кубический корень из числа\n";
        cout << "9.Один процент от числа\n";
        cout << "10.Факториал числа\n";
        cout << "\nВыберете операцию: ";
        cin >> operation;
        switch (operation)
        {
        case 0:
            return 0;
        case 1:
            cout << "Введите первое число: ";
            cin >> x;
            cout << "Введите второе число: ";
            cin >> y;
            cout << "Сумма чисел равна " << x + y << "\n";
            break;
        case 2:
            cout << "Введите уменьшаемое число: ";
            cin >> x;
            cout << "Введите вычитаемое число: ";
            cin >> y;
            cout << "Разность чисел равна " << x - y << "\n";
            break;
        case 3:
            cout << "Введите первое число: ";
            cin >> x;
            cout << "Введите второе число: ";
            cin >> y;
            cout << "Произведение чисел равно " << x * y << "\n";
            break;
        case 4:
            cout << "Введите делимое число: ";
            cin >> x;
            cout << "Введите делитель: ";
            cin >> y;
            cout << "Деление чисел нацело равно " << x / y << "\n";
            break;
        case 5:
            cout << "Введите делимое число: ";
            cin >> x;
            cout << "Введите делитель: ";
            cin >> y;
            cout << "Остаток целочисленного деление чисел равен " << x % y << "\n";
            break;
        case 6:
            cout << "Введите число: ";
            cin >> x;
            cout << "Введите степень числа: ";
            cin >> y;
            cout << "Результат возведения числа в степень равен " << pow(x,y) << "\n";
            break;
        case 7:
            cout << "Введите число: ";
            cin >> x;
            cout << "Квадратный корень из числа равен " << sqrt(x) << "\n";
            break;
        case 8:
			cout << "Введите число: ";
            cin >> x;
            cout << "Кубический корень из числа равен " << cbrt(x) << "\n";
            break;
        case 9:
            double proc;
            cout << "Введите число: ";
            cin >> proc;
            cout << "Один процент от числа равен " << proc / 100 << endl;
            break;
        case 10:
            cout << "Введите число: ";
            cin >> x;
            if (x < 0)
            {
				cout << "Вы ввели число меньше 0" << "\n";
            }
            else if (x == 0)
            {
	            cout << "Факториал 0 равен 1" << "\n";
            }
            else
            {
                int i;
                double res = 1;
                for (i = 1; i < x + 1; i++)
                {
	                res = res * i;
                }
	            cout << "Факториал числа " << x << " равен " << res << "\n";
            }
            break;
        default:
			cout << "Несуществующая операция, введите число из списка\n";
            break;
        }
        cout << "\n";
    }
}