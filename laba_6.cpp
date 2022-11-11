#include <iostream>
#include <string>

using namespace std;

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
    for (int i = 2; i < sqrt(x); i++)
    {
        if (abs(x) % i == 0)
        {
            return false;
        }
    }
    return true;
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

void sort_lines(int x, int y, int matrix[100][100])
{
    int mas_sum_lines[100];
    for (int i = 0; i < 100; i++)
    {
        mas_sum_lines[i] = 0;

    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            mas_sum_lines[i] += abs(matrix[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (mas_sum_lines[i] > mas_sum_lines[j])
            {
                for (int k = 0; k < x-1; k++)
                {
                    for (int l = 0; l < y; l++)
                    {
                        swap(matrix[k][l], matrix[k + 1][l]);
                    }
                }
                swap(mas_sum_lines[i], mas_sum_lines[j]);
            }
        }
    }
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

    if (Same_column(lines,columns,mat) == true && prime_numeral_exist(lines,columns,mat) == true)
    {
        sort_lines(lines,columns,mat);
    }
    else
    {
        return -1;
    }



    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


}