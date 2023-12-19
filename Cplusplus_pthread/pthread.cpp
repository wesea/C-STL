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

    //创建一个线程 thread_work 回调函数， str 参数
    thread t1(thread_work, str);
    t1.join();

    system("pause");
    return EXIT_SUCCESS;
}