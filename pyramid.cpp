#include <iostream>
#include <string>
using namespace std;

int main()
{
    int space;
    int position = 0;
    string input;

    cout << "Enter an input string: ";
    cin >> input;

    size_t input_len = input.length();

    // loop over the number entered by the user
    for(int i = 0; i <= input_len-1; i++)
    {
        // loop to create the space to the left in the pyramid
        for(space = 1; space <= input_len-i; space++)
        {
            cout << " ";
        }

        // display each character of the string in order
        for(int j=0; j < position; j++)
        {
            cout << input.at(j);
        }

        // display the current character
        cout << input.at(i);

        // display the remaining characters in reverse order
        for(int j=position-1; j >= 0; --j)
        {
            cout << input.at(j);
        }

        cout << endl;
        ++position;

    }
    return 0;

}