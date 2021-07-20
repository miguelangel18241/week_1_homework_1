#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
using namespace std;

//gets the cubed #
int cub(int base)
{
    int result = 1;
    for(int i = 0; i < 3; i++)
    {
        result = result * base;
    }
    return result;
}

int main() {
	int number; 

	cout << "Please enter a number: "; 
	cin >> number; 

    //get digits split
    int hundreds_place = number / 100;
    int tens = number % 100;
    int tens_place = tens /10;
    int ones_place = tens % 10;

    // cout << "Hundreds: " << hundreds_place << endl;
    // cout << "Tenths: " << tens_place << endl;
    // cout << "Ones: " << ones_place << endl;

    //take # to the cubic
    
    int hundredCub = cub(hundreds_place);
    int tenCub = cub(tens_place);
    int oneCub = cub(ones_place);

    int sumOfCub = hundredCub + tenCub + oneCub;

    if(number == sumOfCub)
    {
        cout << "It is Wen's favourite number" << endl;
    }
    else
    {
        cout << "It is not Wen's favourite number" << endl;
    }

    // cout << "Enter a number for cubic: " << endl;
    // cin >> x;
    // int y = cub(x);

    //This prints the sum of the individual digits to the cubic number.
    // cout << sumOfCub << endl;


}

