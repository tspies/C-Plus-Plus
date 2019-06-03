//
//  main.cpp
//  Calculator C++
//
//  Created by Tristyn SPIES on 2019/05/21.
//  Copyright © 2019 Tristyn SPIES. All rights reserved.
//

#include <iostream>
#include <unistd.h>

using namespace std;

int multiplication(int a, int b);
int division(int a, int b);
int addition (int a, int b);
int subtraction (int a, int b);

int main(void) {
    int num_x;
    int num_y;
    int solve;
    char opp;
    cout << "Welcome to your C++ calculator!\n";
    cout << "This calculator can handle all your standard '*' '/' '+' '-'\n";
    cout << "Press any key to continue...\n";
    cin.get();
    cout << "Please enter a number:\n" << endl;
    cin >> num_x;
    if (num_x > -2147483648 && num_x <= 2147483647)
    {
        cout << "Please enter an operator:\n";
        cin >> opp;
        if (opp == '+' || opp == '-' || opp == '*' || opp == '/')
        {
            cout << "Please enter your last number:\n";
            cin >> num_y;
            if (num_x > -2147483648 && num_x <= 2147483647)
            {
                cout << "Calculating...\n";
                cin.get();
                if (opp == '*')
                    solve = multiplication(num_x, num_y);
                else if (opp == '/')
                    solve = division(num_x, num_y);
                else if (opp == '+')
                    solve = addition(num_x, num_y);
                else
                    solve = subtraction(num_x, num_y);
                cout << "Your answer is: " << solve << endl;
            }
            else
            {
                cout << "Invlaid Number...this is cringe worthy -_-.\n";
                return 0;
            }
        }
        else
        {
            cout << "Invalid Opperator...really, you had one job.\n";
            return 0;
        }
    }
    else
    {
        cout << "Invalid Number...go back to grade 1.\n";
        return 0;
    }
    

    return 0;
}

int multiplication(int a, int b)
{
    return (a * b);
}
int division(int a, int b)
{
    return (a / b);
}
int addition (int a, int b)
{
    return (a + b);
}
int subtraction (int a, int b)
{
    return (a - b);
}