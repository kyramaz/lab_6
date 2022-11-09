#include <iostream>
#include <string>

using namespace std;

string Func(int n)
{
    if (n > 10)
    {
        return string("hello");
    }
    else 
    {
        return string("bye");
    }
}

void Fill_Mat(int x,int y, int mat[100][100])
{
    cout << "Введите количество строк";
    cin >> x;
    cout << "Введите количество столбцов";
    cin >> y;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "Введите элемент " << i << "строки" << j << "столбца.";
            cin >> mat[i][j];
        }
    }
}

bool Same_column(int x, int y, int mat[100][100], int count, bool flag)
{
    for (int i = 0; i < x; i++)
    {
        if (count == y)
        {
            flag = true;
        }
        for (int j = 0; j < y; j++)
        {
            if (mat[j][i] == mat[j + 1][i])
            {
                count++;
            }
            else
            {
                continue;
            }
        }
    }
}


int main()
{
    int lines;
    int columns;
    int mat[100][100];
    bool Flag_column = false;

    Fill_Mat(lines, columns, mat);

}

// this is a test string :)