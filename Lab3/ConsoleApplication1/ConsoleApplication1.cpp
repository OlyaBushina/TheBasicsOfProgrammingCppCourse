// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);

    cout << "Задача Hello User"<<endl;
    char name[20];
    cout << "What is your name?";
    cin >> name;
    cout << "Hi," << name << endl;
    cout << endl;


    cout << "Задача SWAP2" << endl;
    int A;
    int B;
    cout << "Введіть значення А:";
    cin >> A;
    cout << "Введіть значення B:";
    cin >> B;
    int temp = A;
    A = B;
    B = temp;
    cout << "Змінене значення А:" << A << endl;
    cout << "Змінене значення B:" << B << endl;
    cout << endl;


    cout << "Задача SWAP3" << endl;
    int d;
    int e;
    int f;
    cout << "A=";
    cin >> d;
    cout << "B=";
    cin >> e;
    cout << "C=";
    cin >> f;
    cout << "A=" << d << " B=" << e << " C=" << f << endl;
    int temp2 = d;
    int temp3 = e;
    int temp4 = f;
    e = temp2;
    f = temp3;
    d = temp4;
    cout << "Змінене значення А:" << d << endl;
    cout << "Змінене значення B:" << e << endl;
    cout << "Змінене значення C:" << f << endl;
    cout << endl;


    cout << "Задача SWAP4" << endl;
    int w;
    int r;
    int y;
    int u;
    cout << "A=";
    cin >> w;
    cout << "B=";
    cin >> r;
    cout << "C=";
    cin >> y;
    cout << "D=";
    cin >> u;
    cout << "A=" << w << " B=" << r << " C=" << y << " D=" << u << endl;
    int temp5 = w;
    int temp6 = r;
    int temp7 = y;
    int temp8 = u;
    r = temp5;
    y = temp6;
    u = temp7;
    w = temp8;
    cout << "Змінене значення А:" << w << endl;
    cout << "Змінене значення B:" << r<< endl;
    cout << "Змінене значення C:" << y << endl;
    cout << "Змінене значення D:" << u << endl;
    cout << endl;


    cout << "Задача Hello, Junior Programmer" << endl;
    char name1[20];
    int i;
    char university[20];
    cout << "Як вас звуть?";
    cin >> name1;
    cout << "Скільки вам років?";
    cin >> i;
    cout << "Де ви навчаєтесь?";
    cin >> university;
    cout << "Доброго дня," << name1<<endl;
    cout << "Вітаю Вас, Вам усього " << i <<" а Ви вже ведете діалог з комп’ютером!" << endl;
    cout << university << " буде пишатися Вами! " << endl;
    cout << endl;


    cout << "Задача, Guess Magic Number" << endl;
    cout << "Задумайте число" << endl;
    cout << "Помножте його на 10" << endl;
    cout << "Поділіть результат на 2" << endl;
    cout << "Додайте задумане число до отриманого результату" << endl;
    cout << "Введіть, що у вас вийшло: ";
    int result;
    cin >> result;
    int k = (result / 6); 
    cout << "Ваше задумане число: " << k << endl;
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
