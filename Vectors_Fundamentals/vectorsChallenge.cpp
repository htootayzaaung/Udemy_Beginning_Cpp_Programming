#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "vector1 elements: ";
    cout << vector1.at(0) << " ";
    cout << vector1.at(1) << " ";
    cout << endl;
    cout << "vector1 size: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "vector2 elements: ";
    cout << vector2.at(0) << " ";
    cout << vector2.at(1) << " ";
    cout << endl;
    cout << "vector2 size: " << vector2.size() << endl;

    vector < vector <int> > vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    vector_2d.at(0).at(0) = 1000;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "(" << i << ", " << j << ") = " << vector_2d.at(i).at(j) << endl;
        }
    }

    cout << "vector1 elements: ";
    cout << vector1.at(0) << " ";
    cout << vector1.at(1) << " ";
    cout << endl;
    cout << "vector1 size: " << vector1.size() << endl;

    return 0;
}