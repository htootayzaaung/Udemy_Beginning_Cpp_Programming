#include <iostream>
#include <string>
using namespace std;

/*
For this encryption, the specification asked us to use a Substitution cipher but did not explicity stated the specificality.
Thus, Caesar's cipher will be implemented.
*/

string encrypt(string plain_text, string cipher_text, int shift_magnitude);

string decrypt(string plain_text, string cipher_text, int shift_magnitude);

int main()
{
  string plaintext {}, ciphertext {}, option {};
  int shift {};

  cout << "Enter an option (encrypt/decrypt): ";
  getline(cin, option);

  if (option == "encrypt")
  {
    cout << "Enter a message: ";
    getline(cin, plaintext);

    cout << "Enter a shift-magnitude: ";
    cin >> shift;

    ciphertext = encrypt(plaintext, ciphertext, shift);

    cout << "Encrypted message: " << ciphertext << endl;
  }

  else if (option == "decrypt")
  {
    cout << "Enter an encrypted message: ";
    getline(cin, ciphertext);

    cout << "Enter a shifted-magnitude: ";
    cin >> shift;

    plaintext = decrypt(plaintext, ciphertext, shift);

    cout << "Decrypted message: " << plaintext << endl;
  }

  return 0;
}

string encrypt(string plain_text, string cipher_text, int shift_magnitude)
{
  for (int i = 0; i < plain_text.size(); i++)
  {
    char character = plain_text[i] + shift_magnitude;
    cipher_text += character;
  }
  return cipher_text;
}

string decrypt(string plain_text, string cipher_text, int shift_magnitude)
{
  for (int i = 0; i < cipher_text.size(); i++)
  {
    char character = cipher_text[i] - shift_magnitude;
    plain_text += character;
  }
  return plain_text;
}
