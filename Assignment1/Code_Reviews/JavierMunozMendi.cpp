#include <iostream>

#include <string>

using namespace std;



void reverseStr(string& str)

{

    int len = str.length();

    int n = len-1;

    int i = 0;



    while(i<=n){



        swap(str[i],str[n]);

        n = n-1;

        i = i+1;



  }

}





int main()

{

    string inputString;

    getline(cin, inputString);



    int strLength {0};

    strLength = inputString.length();



    for (int i {0}; i < strLength; i++){



        string spaces (strLength - 1 - i, ' ');

        string first_half (inputString, 0, i + 1);

        string second_half (inputString, 0, i);

        reverseStr(second_half);

        cout << spaces + first_half + second_half << endl;



    }







    return 0;

}
