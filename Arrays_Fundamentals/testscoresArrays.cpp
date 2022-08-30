#include <iostream>
using namespace std;

int main()
{
    int test_scores[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Test score " << i + 1 << ": ";
        cin >> test_scores[i]; 
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Test score " << i + 1 << ": " << test_scores[i] << endl;
    }
    
    return 0;
}