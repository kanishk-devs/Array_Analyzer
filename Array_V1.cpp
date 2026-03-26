#include <iostream>
using namespace std;

int main() {
    char yn = 'y';
    while (yn == 'y' || yn == 'Y') {
    int n;

    cout << "How much numbers do you want to use? \n";
    cin >> n;

    if (n <= 0)
    {
    cout << "Invalid size!\n";
    continue;
    }

    int arr[n];
    double sum = 0;
    int product = 1;
    int key;

    cout << "Enter " << n << " numbers:\n";
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        product *= arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    cout << endl << "--------------------------------------------------------------------" << endl << "You entered:\n";

    for (int i = 0;  i < n; i++) {
        cout << arr[i] << " | ";
    }

    cout << endl << "--------------------------------------------------------------------" << endl <<  "In reverse order: " << endl;

    for (int i = n - 1; i >= 0; i--) {
        cout <<  arr[i] << " | ";
    }

    cout << endl << "---------------------------------------------------------------------" << endl << "Even numbers in the numbers are: \n";

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) 
        {
            cout << arr[i] << " | ";
        }
    }

    cout << endl << "-----------------------------------------------------------------------" << endl;

    cout << "The sum of the numbers is: " << sum << endl << "------------------------------------------------------------------------------" << endl;
    cout << "The product of the numbers is: " << product << endl << "------------------------------------------------------------------------------" << endl;
    cout << "The average of the numbers is: " << sum / n << endl << "------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "The greatest number is: " << max << endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    cout << "The smallest number is: " << min << endl;

    cout << "Enter the number which you have to find:\n";
    cin >> key;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (key == arr[i]) {
            found = true;
            break;
        }
    }

    if (found == true) 
    {
        cout << "YES! " << key << " is in the list.\n";

    }
    else
    {
        cout << "NO! " << key << " is not in the list.\n";
    }

    cout << "Do you want to do it again? (y for yes and n for no)\n";
    cin >> yn;
}
    return 0;
}