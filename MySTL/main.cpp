#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Array.h"
using namespace std;


int main()
{
    Array<int,10> arr;
    arr.fill(1);
    cout << arr.size() << endl;
    for (auto a : arr)
        cout << a << " ";
    cout << endl;
    system("pause");
    return EXIT_SUCCESS;
}