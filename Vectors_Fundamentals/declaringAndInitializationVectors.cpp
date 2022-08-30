#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Declaing empty vectors:
    
    vector <char> vowels;

    vector <int> test_scores;
    */

    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < 5; i++)
    {
        //Two ways of accessing the elements of a vector at certain index:

        cout << "vowels " << i + 1 << ": " << vowels[i] << endl;
        cout << "vowels " << i + 1 << ": " << vowels.at(i) << endl;

    }

    vector <int> test_scores {100, 98, 89, 85, 93};

    for (int i = 0; i < 5; i++)
    {
        //Two ways of accessing the elements of a vector at certain index:

        cout << "test_scores " << i + 1 << ": " << test_scores[i] << endl;
        cout << "test_scores " << i + 1 << ": " << test_scores.at(i) << endl;
    }

    vector <double> hi_temperatures (35, 80.0);

    for (int i = 0; i < 2; i++)
    {
        //Two ways of accessing the elements of a vector at certain index:
        
        cout << "hi_temperatures " << i + 1 << ": " << hi_temperatures[i] << endl;
        cout << "hi_temperatures " << i + 1 << ": " << hi_temperatures.at(i) << endl;
    }
    
    return 0;
}