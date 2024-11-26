#include <iostream>
using namespace std;
int main() {
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        bool my_debug = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                my_debug = false;
        }
        if (my_debug)
        {
            cout << arr[i] << ' ';
        }
    }
    return 0;
}