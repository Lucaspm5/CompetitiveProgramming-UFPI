#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) 
{
    int size;

    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    bool noglonia = true;
    bool auxiliary = (arr[1] > arr[0]);

    for (int i = 1; i < size; i++) 
    {
        if (auxiliary) {
            if (arr[i] <= arr[i-1]) {noglonia = false; break;}
        } else {
            if (arr[i] >= arr[i-1]) {noglonia = false; break;}
        }
        auxiliary = !auxiliary;
    }

    cout << noglonia << endl;

    return 0;
}
