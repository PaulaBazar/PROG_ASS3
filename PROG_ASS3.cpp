#include <iostream>

using namespace std;

int main()
{
    int x, y, a, b, c, d, result1, result2, result3, result4, answer;

    cout << "Please enter first number: ";
    cin >> x;
    cout << "Please enter second number: ";
    cin >> y;

    cout << "Enter Your Choice: ( 1 = Sum, 2 = Sub, 3 = Mul, 4 = Div )" << endl;
    cin >> answer;

    result1 = x + y;
    result2 = x - y;
    result3 = x * y;
    result4 = x / y;


    if (answer == 1)
    {
       cout << "Your Answer is: " << result1 << endl;
    }

    else if (answer == 2)
    {
       cout << "Your Answer is: " << result2 << endl;
    }

    else if (answer == 3)
    {
       cout << "Your Answer is: " << result3 << endl;
    }

    else if (answer == 4)
    {
       cout << "Your Answer is: " << result4 << endl;
    }

    else
    {
        cout << "Your choice is incorrect"<<endl<<endl;
    }
        return 0;
}

