#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<thread>
#include<string.h>
using namespace std;

void thread_work(string str) {
    cout << str << endl;
}

int main()
{
    string str = "hello world";

    //����һ���߳� thread_work �ص������� str ����
    thread t1(thread_work, str);
    t1.join();

    system("pause");
    return EXIT_SUCCESS;
}