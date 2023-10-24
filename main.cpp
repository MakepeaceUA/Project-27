#include <iostream>
using namespace std;
/*Задание 1
void Func(int**& arr, int Rows, int& Cols, int position)
{
    int* N_Column = new int[Rows];
    int** N_arr = new int* [Rows];

    for (int i = 0; i < Rows; i++)
    {
        N_Column[i] = 10;
    }

    for (int i = 0; i < Rows; i++)
    {
        N_arr[i] = new int[Cols + 1];
    }

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < position; j++)
        {
            N_arr[i][j] = arr[i][j];
        }
        N_arr[i][position] = N_Column[i];
        for (int j = position; j < Cols; j++)
        {
            N_arr[i][j + 1] = arr[i][j];
        }
    }

    for (int i = 0; i < Rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    arr = N_arr;
    Cols++;
    delete[] N_Column;
}

int main() {
    setlocale(0, "RU");
    int Rows = 3, Cols = 3;
    int position;
    int** arr = new int* [Rows];

    for (int i = 0; i < Rows; i++)
    {
        arr[i] = new int[Cols];
    }

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Введите позицию в которую хотите вставить столбец:";
    cin >> position;

    Func(arr, Rows, Cols, position);

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < Rows; i++)
    {
        delete[]  arr[i];
    }
    delete[]  arr;
}*/




//Задание 2
/*void Func(int**& arr, int Rows, int& Cols, int position)
{
    int** N_arr = new int* [Rows];

    for (int i = 0; i < Rows; i++)
    {
        N_arr[i] = new int[Cols - 1];
    }

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < position; j++)
        {
            N_arr[i][j] = arr[i][j];
        }
        for (int j = position; j < Cols; j++)
        {
            N_arr[i][j - 1] = arr[i][j];
        }
    }

    for (int i = 0; i < Rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    arr = N_arr;
    Cols--;
}

int main() {
    setlocale(0, "RU");
    int Rows = 3, Cols = 3;
    int position;
    int** arr = new int* [Rows];

    for (int i = 0; i < Rows; i++)
    {
        arr[i] = new int[Cols];
    }

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Введите позицию из которой вы хотите удалить столбец:";
    cin >> position;

    Func(arr, Rows, Cols, position);

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < Rows; i++)
    {
        delete[]  arr[i];
    }
    delete[]  arr;
}*/