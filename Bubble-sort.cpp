#include <bits/stdc++.h>
using namespace std;

void PrintArray(int array[], int size);

void bubblesort(int arg[], int s)
{

    for (int i=0; i <= s; i++){

        for (int j=0; j <s; j++){

            if (arg[j+1] < arg[j]){

                int temp = arg[j];
                arg[j] = arg[j+1];
                arg[j+1] = temp;
            }
        }
    }

//    print array after finished sorting
    PrintArray(arg, 5);
}

void PrintArray(int array[], int size){

    for (int i = 0; i < size; i++){
        cout << array[i] ;
        cout << " ";
    }
    cout << endl ;
}

int main(){
    int arr[5] = {64, 25, 12, 22, 11};
    bubblesort(arr, 5);
}