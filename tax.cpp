#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main() {
    float taxIncome;
    float amountToPay = taxIncome * 200;
    cout << "What was your tax income this fiscal year?: " << endl;
    //Gets total income from the user:
    cin >> taxIncome;
    
    float limitOne = 18201;
    float limitTwo = 37001;
    float limitThree = 90001;
    float limitFour = 180001;

    bool one = taxIncome <= limitOne;
    bool two = (taxIncome >= limitOne && taxIncome < limitTwo);
    bool three = (taxIncome >= limitTwo && taxIncome < limitThree);
    bool four = (taxIncome >= limitThree && taxIncome < limitFour);
    bool five = taxIncome >= limitFour;

    if (one)
    {
        amountToPay = 0;
        cout << "You have to pay this year: " << amountToPay << endl;
    }
    else if (two)
    {
        amountToPay = ((taxIncome - limitOne) * 0.19);
        cout << "You have to pay this year: " << amountToPay << endl;
    }
    else if (three)
    {
        amountToPay = ((taxIncome - limitTwo) * 0.325) + 3572;
        cout << "You have to pay this year: " << amountToPay << endl;
    }
    else if (four)
    {
        amountToPay = ((taxIncome - limitThree) * 0.37) + 20797;
        cout << "You have to pay this year: " << amountToPay << endl;
    }
    else
    {
        amountToPay = ((taxIncome - limitFour)* 0.45) + 54097;
        cout << "You have to pay this year: " << amountToPay << endl;
    }
    

}