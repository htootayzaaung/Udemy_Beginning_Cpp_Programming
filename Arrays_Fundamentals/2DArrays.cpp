#include <iostream>
using namespace std;

int main()
{
    const int rows {3};
    const int cols {4};

    int movie_rating [rows][cols]
    {
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "(" << i << ", " << j << ") = " << movie_rating[i][j] << endl;
        }
    }
    return 0;
}