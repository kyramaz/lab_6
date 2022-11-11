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

bool is_Prime(int x)
{
    for (int i = 2; i < sqrt(x),i++;)
    {
        if (abs(x) % i == 0)
        {
            return true;
            break;
        }
    }
    return false;
}

bool prime_numeral_exist(int x, int y, int matrix[100][100])
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (is_Prime(matrix[i][j]))
            {
                return true;
            }
        }
    }
    return false;
}

bool Same_column(int x, int y, int matrix[100][100])
{
    int count{ 0 };
    for (int j = 0; j < y - 1; j++)
    {
        for (int k = 1; k < y; k++)
        {
            count = 0;
            for (int i = 0; i < x; i++)
            {
                if (matrix[i][j] != matrix[i][j + k])
                {
                    continue;
                }
                else
                {
                    count++;
                }
            }
            if (count == x)
            {
                return true;
            }
        }
    }
    return false;
}


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

    if (Same_column(lines,columns,mat) && prime_numeral_exist(lines,columns,mat))
    {
        cout << 228;
    }



    /*for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }*/


}
