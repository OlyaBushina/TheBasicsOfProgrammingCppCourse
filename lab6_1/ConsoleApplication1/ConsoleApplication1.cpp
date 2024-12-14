// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(1251);
    using namespace std;
    const int size = 20;
    cout << "Задача Find Element Index" << endl;
    cout << "Enter 20 numbers:" << endl;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Enter a number to search:" << endl;
    int need_to_find;
    cin >> need_to_find;
    bool not_found = true;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == need_to_find)
        {
            cout << "Number found on index" << i + 1 << endl; \
                not_found = false;
        }
    }
    if (not_found)
    {
        cout << "Not found" << endl;
    }
    
    cout << "Задача Normalize" << endl;
    int size2;
    cout << "Enter size of array:";
    cin >> size2;
    cout << "Enter numbers of array:"<<endl;
    double* array2 = new double[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> array2[i];
    }
    double max = array2[0];
    for (int i = 0; i < size2; i++)
    {
        if (max < array2[i])
        {
            max = array2[i];
        }
    }
    for (int i = 0; i < size2; i++)
    {
        array2[i] = array2[i] / max;
    }
    for (int i = 0; i < size2; i++)
    {
        cout<<array2[i]<<" ";
    }
    delete[] array2;
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
