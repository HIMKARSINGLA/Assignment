#include <iostream>
using namespace std;

int main() 
{
    int number;
    int count = 0;
    
    cout << "HIMKAR SINGLA , ROLL NO. 2310997106\n";

    cout << "Enter numbers. Enter 0 to stop.\n";

    do 
	{
        cout << "Enter the number: ";
        cin >> number;

        if (number % 8 == 0 && number != 0) 
		{
            count++;
        }

    } 
	while (number != 0);

    cout << "Total " << count << " numbers are valid." <<endl;

    return 0;
}

