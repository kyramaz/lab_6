#include <iostream>
#include <string>

using namespace std;

/*string Func(int n)
{
    if (n > 10)
    {
        return string("hello");
    }
    else 
    {
        return string("bye");
    }
}*/

int fill_Mat(int x, int y, int matrix[100][100])
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "Введите элемент " << i+1 << " строки " << j+1 << " столбца." << endl;
            cin >> matrix[i][j];
        }
    }
    return matrix[x][y];
}

/*int Same_column(int x, int y, int mat[100][100], int count, bool flag)
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
}*/


int main()
{
    setlocale(LC_ALL, "rus");
    int lines{};
    int columns{};
    int mat[100][100];
    bool Flag_column = false;

    cout << "Введите количество строк" << endl;
    cin >> lines;

    cout << "Введите количество столбцов" << endl;
    cin >> columns;

    fill_Mat(lines, columns, mat);

    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

}

// this is a test string :)