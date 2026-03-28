#include <iostream>
using namespace std;

void TakeInput (int arr[], int size);
void PrintArray (int arr[], int size);
void PrintReverse (int arr[], int size);
void PrintEvenOdd (int arr[], int size);
int FindSum (int arr[], int size);
long long FindProduct (int arr[], int size);
double FindAverage (int arr[], int size);
int FindMax (int arr[], int size);
int FindMin (int arr[], int size);
int search (int arr[], int size, int target);

int main() {
    char yn = 'y';
    while (yn == 'y' || yn == 'Y') {
         cout << "========= ARRAY ANALYZER V2 =========\n";

    int n;
    cout << "How many numbers do you want in the list?\n";
    cin >> n;
    cout << endl;

    if (n <= 0) {
        cout << "INVALID SIZE!!\n";
        continue;
    }

    int arr[n];
    TakeInput (arr , n);

    cout <<  "----------------------------------------" << endl << endl;

    int choice;
    cout << "Enter your choice: \n 1. Print Array \n 2. Print Array in reverse order \n 3. Print Even and Odd numbers \n 4. Calculate sum of all numbers in the array \n 5. Calculate product of all numbers in the array \n 6. Find the average of all the numbers in the array. \n 7. Find the greatest number in the array. \n 8. Find the smallest number in the array. \n 9. Find any number in the list and its frequency in the array. \n 10. ALL \n";
    
    int a;
    cout << endl << "----------------------------------------" << endl << "How many choices do you want to use? [ You can write 0 for exitting the program ]\n";
    cin >> a;

    for (int i = 1; i <= a;i++) {
        cout << "Enter choice " << i << ":" << endl;
        cin >> choice;

        switch (choice)
    {
    case 0:
    {
        return 0;
        break;
    }
    case 1: 
    {
        cout << "[RESULT]: "<< endl;
        PrintArray(arr , n);
        break;
    }
    case 2:
    {
        cout << "[RESULT]: "<< endl;
        PrintReverse(arr, n);
        break;
    }
    case 3:
    {
        cout << "[RESULT]: "<< endl;
        PrintEvenOdd(arr, n);
        break;
    }
    case 4:
    {
        cout << "[RESULT]: "<< endl;
        int sum = FindSum (arr, n);
        cout << "The sum of the numbers are: " << endl << sum  << endl << endl;
        break;
    }
    case 5:
    {
        cout << "[RESULT]: "<< endl;
        long long pro = FindProduct (arr, n);
        cout << "The product of the numbers are: " << endl << pro << endl << endl;
        break;
    }
    case 6:
    {
        cout << "[RESULT]: "<< endl;
        double avg = FindAverage (arr, n);
        cout << "The average of the numbers are: " << endl << avg << endl << endl;
        break;
    }
    case 7:
    {
        cout << "[RESULT]: "<< endl;
        int max = FindMax (arr, n);
        cout << "The greatest number in the list is: " << endl << max << endl << endl;
        break;
    }
    case 8:
    {
        cout << "[RESULT]: "<< endl;
        int min = FindMin (arr, n);
        cout << "The smallest number in the list is: " << endl << min << endl << endl;
        break;
    }
    case 9:
    {
        cout << "[RESULT]: "<< endl;
        int target;
        cout << "Which number do you want to find?\n";
        cin >> target;
        search (arr, n, target);
        break;
    }
    case 10:
    {
        cout << "[RESULT]: "<< endl;
        PrintArray(arr , n);
        PrintReverse(arr, n);
        PrintEvenOdd(arr, n);

        int sum = FindSum (arr, n);
        cout << "The sum of the numbers are: " << endl << sum  << endl << endl;

        long long pro = FindProduct (arr, n);
        cout << "The product of the numbers are: " << endl << pro << endl << endl;

        double avg = FindAverage (arr, n);
        cout << "The average of the numbers are: " << endl << avg << endl << endl;

        int max = FindMax (arr, n);
        cout << "The greatest number in the list is: " << endl << max << endl << endl;

        int min = FindMin (arr, n);
        cout << "The smallest number in the list is: " << endl << min << endl << endl;

        int target;
        cout << "Which number do you want to find?\n";
        cin >> target;
        search (arr, n, target);

        break;
    }
    default:
    {
        cout << "!INVALID CHOICE!";
        break;
    }
    }
    cout << endl << "----------------------------------------" << endl << endl;
    }
    
    cout << "Do you want to continue? (y for yes and n for exit)" << endl;
    cin >> yn;
    }
    return 0;

}

void TakeInput (int arr[], int size) {
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray (int arr[], int size) {
    cout << "You entered:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " | ";
    }
    cout << endl << endl;
}

void PrintReverse (int arr[], int size) {
    cout << "In reverse order:" << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " | ";
    }
    cout << endl << endl;
}

void PrintEvenOdd (int arr[], int size) {
    int even = 0;
    cout << "The even numbers are: " << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " | ";
            even++;
        }
    }
    cout << endl << "There are " << even << " even numbers in the list.";
    cout << endl << endl;

    int odd = 0;
    cout << "The odd numbers are: " << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " | ";
            odd++;
        }
    }
    cout << endl << "There are " << odd << " odd numbers in the list.";
    cout << endl << endl;
}

int FindSum (int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

long long FindProduct (int arr[], int size) {
    long long pro = 1;
    for (int i = 0; i < size; i++) {
        pro *= arr[i];
    }
    return pro;
}

double FindAverage (int arr[], int size) {
    int sum = FindSum(arr, size);
    double avg = (double)sum/size;
    return avg;
}

int FindMax (int arr[], int size) {
    int maxm = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxm) {
            maxm = arr[i];
        }
    }
    return maxm;
}

int FindMin (int arr[], int size) {
    int minm = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < minm) {
            minm = arr[i];
        }
    }
    return minm;
}

int search (int arr[], int size, int target) {
    bool found = false;
    int key = 0;

    for (int i = 0; i < size; i++) {
        if (target == arr[i]) {
            key++;
            found = true;
        }
    }
    if (found == true) {
    cout << "Yes! " << target << " is in the list.";
    }
    else if (found != true) {
        cout << "The number is not in the list.";
    }
    cout << endl << "There are " << key << " number of " << target << " in the list.";
    cout << endl << endl;
}