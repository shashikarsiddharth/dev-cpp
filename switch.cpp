// Simple Calculator using switch statements

#include <iostream>
using namespace std;

int main()
{
    int ch;
    int a, b;
    bool flag = true;

    cout << "Enter 1 for addition\n";
    cout << "Enter 2 for subtraction\n";
    cout << "Enter 3 for division\n";
    cout << "Enter 4 for multiplication\n";
    cout << "To Quit enter 0\n";

    cout << endl;
    
    cout << "Enter 2 nums\n";
    cin >> a >> b;
    
    while(flag)
    {
        cout << "Enter your choice\n";
        cin >> ch;

        switch(ch)
            {
                case 1:
                    cout << "Sum of the nums is: " << a + b << endl;
                    break;
                
                case 2:
                    cout << "Difference of the nums is: " << abs(a - b) << endl;
                    break;
                    
                case 3:
                    cout << "Division of the nums is: " << a / b << endl;
                    break;
                
                case 4:
                    cout << "Muliplication of the nums is: " << a * b << endl;
                    break;
                
                default:
                    cout << "Wrong choice entered\n";
                    flag = false;

            }
    }
    return 0;
}
