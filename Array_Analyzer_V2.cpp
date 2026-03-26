#include <iostream>
using namespace std;

void TakeInput (int arr[], int size);
void PrintArray (int arr[], int size);
void PrintReverse (int arr[], int size);
void PrintEvenOdd (int arr[], int size);
int FindSum (int arr[], int size);
int FindProduct (int arr[], int size);
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

    if (n <= 0) {
        cout << "INVALID SIZE!!";
        continue;
    }

    int arr[n];

    TakeInput (arr , n);
    PrintArray(arr , n);
    PrintReverse(arr, n);
    PrintEvenOdd(arr, n);

    int sum = FindSum (arr, n);
    cout << "The sum of the numbers are: " << endl << sum  << endl << endl;
    
    int pro = FindProduct (arr, n);
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

    cout << "Do you want to continue? (y for yes and n for no)" << endl;
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
    cout << "The even numbers are: " << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " | ";
        }
    }
    cout << endl << endl;

    cout << "The odd numbers are: " << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " | ";
        }
    }
    cout << endl << endl;
}

int FindSum (int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int FindProduct (int arr[], int size) {
    int pro = 1;
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

    for (int i = 0; i < size; i++) {
        if (target == arr[i]) {
            cout << "Yes! " << target << " is in the list.";
            found = true;
        }
    }
    if (found != true) {
        cout << "The number is not in the list.";
    }
    cout << endl << endl;
}