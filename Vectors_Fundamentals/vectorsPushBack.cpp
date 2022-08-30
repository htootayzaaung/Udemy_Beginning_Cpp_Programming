#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> test_scores {100, 95, 99};

    for (int i = 0; test_scores[i] != NULL; i++)
    {
        cout << test_scores[i] << " ";
    }

    cout << endl;

    test_scores.push_back(80);
    test_scores.push_back(90);

    for (int i = 0; test_scores[i] != NULL; i++)
    {
        cout << test_scores[i] << " ";
    }

    cout << endl;

    cout << "Vectors will automatically allocate the required space!" << endl;

    return 0;
}