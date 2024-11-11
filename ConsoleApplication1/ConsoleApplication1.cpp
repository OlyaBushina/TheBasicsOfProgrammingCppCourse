// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <Windows.h>
int main()
{
        using namespace std;
        SetConsoleOutputCP(1251);
        cout << "Task1"<<endl;
        double x;
        double result;
        cout << "Введіть число X: ";
        cin >> x;
        if (x >= 0) 
        {
            result = x;
        }
        else 
        {
            result = -x;
        }

        cout << "| " << "X" << " | " << "= " << "| " << x << " | = " << result <<endl;
        
        cout << "Task2"<<endl;
        int temperature;
        cout << "Введіть температуру в градусах Цельсія: ";
        cin >> temperature;

        if (temperature < 0) {
            cout << "Дуже холодно! Залишайтеся всередині." <<endl;
        }
        else if (temperature <= 8) {
            cout << "Холодно, краще не виходити." << endl;
        }
        else if (temperature <= 16) {
            cout << "Комфортна температура: можна виходити." <<endl;
        }
        else if (temperature <= 40) {
            cout << "Тепло,можна виходити." <<endl;
        }
        else if (temperature <= 45) {
            cout << "Дуже спекотно, можна обережно вийти." << endl;
        }
        else {
            cout << "Дуже спекотно! залишайтеся всередині." <<endl;
        }

        cout << "Task3"<<endl;
        const string password = "FR-33-D0M";
        char y;
        while (true) {  
            int i = 0;  
            while (i < password.size()) {
                cout << "Введіть символ " << i + 1 << ": ";
                cin >> y;

                if (y != password[i]) { 
                    cout << "Неправильний пароль, спробуйте ще раз." <<endl;
                    break; 
                }
                i++;
            }
            if (i == password.size()) {
                cout << "Двері відчинено! Ви вільні!" <<endl;
                break;  
            }
        }

        cout << "Task4"<<endl;
        int day;
        cout << "Введіть число від 1 до 7: ";
        cin >> day;
        switch (day) {
        case 1:
            cout << "Monday" <<endl;
            break;
        case 2:
            cout << "Tuesday" <<endl;
            break;
        case 3:
            cout << "Wednesday" <<endl;
            break;
        case 4:
            cout << "Thursday" <<endl;
            break;
        case 5:
            cout << "Friday" <<endl;
            break;
        case 6:
            cout << "Saturday" <<endl;
            break;
        case 7:
            cout << "Sunday" <<endl;
            break;
        default:
            cout << "Неправильний ввід. Введіть число від 1 до 7." <<endl;
        }


        cout << "Task5" << endl;
        char clumn1, clumn2;
        int row1, row2;

        // Введення координат для початкової позиції тури
        cout << "Введіть букву колонки початкової позиції тури (a-h): ";
        cin >> clumn1;
        cout << "Введіть номер рядка початкової позиції тури (1-8): ";
        cin >> row1;

        // Введення координат для позиції, яку потрібно перевірити на загрозу
        cout << "Введіть букву колонки для перевірки загрози (a-h): ";
        cin >> clumn2;
        cout << "Введіть номер рядка для перевірки загрози (1-8): ";
        cin >> row2;

        // Перетворення літер на числа
        int start1 = clumn1 - 'a' + 1; 
        int start2 = clumn2 - 'a' + 1;

        if (row1 == row2 || start1 == start2) {  // Якщо на одній вертикалі або горизонталі
            cout << "Тура загрожує клітинці " << clumn2 << row2 << "." <<endl;
        }
        else {
            cout << "Тура не загрожує клітинці " << clumn2 << row2 << "." <<endl;
        }

        return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
