// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>
int main()
{
    using namespace std;
    SetConsoleOutputCP(1251);
    cout << "Задача SUM" << endl;
    cout << "Введіть послідовність цілих чисел, нуль – кінець." << endl;
    int num;
    int sum = 0;
    int index = 1;
    while (1) {
        cout << "a[" << index << "]= ";
        cin >> num;

        if (num == 0) {
            break;
        }
        sum = sum + num;
        index++;
    }
    cout << "SUM=" << sum << endl;


    cout << "Задача CountOdd" << endl;
    cout << "Введіть послідовність цілих чисел, нуль – кінець." << endl;
    int number;
    int x = 0;
    while (1)
    {
        cout << "Введіть число = ";
        cin >> number;

        if (number == 0) {
            break;
        }
        if (number % 2 != 0)
        {
            x = x + 1;
        }

    }
    cout << "Зустрілося " << x << " непарних чисел" << endl;

    cout << "Задача Parrrot2" << endl;
    string input;
    while (1) {
        cout << "Введіть текст: ";
        getline(cin, input);

        if (input == "Bye" || input == "Good Bye" || input == "Farewell") {
            break;
        }

        cout << "Введено: " << input << endl;
    }

    cout << "Задача MAX" << endl;
    int p;
    cout << "Введіть кількість елементів в послідовності: ";
    cin >> p;
    int max = 0;
    cout << "Введіть послідовність з " << p << " цілих чисел:" << endl;
    for (int i = 0; i < p; ++i) {
        int number1;
        cout << "a[" << (i + 1) << "] = ";
        cin >> number1;

        if (number1 > max) {
            max = number1;
        }
    }
    cout << "MAX = " << max << endl;


    int choice;
    while (1) {
        cout << "Program MENU:" << endl;
        cout << "1. News of the Day" << endl;
        cout << "2. Joke of the Week" << endl;
        cout << "3. About Author!" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter the appropriate number and click ENTER: ";
        cin >> choice;
        if (choice == 1) {
            cout << "News: Today the war is over!" << endl;
        }
        else if (choice == 2) {
            cout << "Joke: the green color of traffic lights has been replaced with emerald!" << endl;
        }
        else if (choice == 3) {
            cout << "About Author: The author loves programming lessons!" << endl;
        }
        else if (choice == 0) {
            cout << "Exit: Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid option." << endl;
        }
    }


    int N;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cout << i;
        if (i < N) {
            cout << ", ";
        }
    }
    cout << endl;


    int Y;
    cout << "Введіть число N: ";
    cin >> Y;

    if (Y == 0) {
        cout << "Fibonacci(0) = 0" << endl;
        return 0;
    }

    if (Y == 1) {
        cout << "Fibonacci(1) = 1" << endl;
        return 0;
    }

    int a = 0, b = 1, f = 0;
    for (int i = 2; i <= Y; i++) {
        f = a + b;
        a = b;
        b = f;
    }

    cout << "Fibonacci(" << Y << ") = " << f << endl;

    return 0;
}