#include <iostream>
#include <thread>
#include <chrono>  // ���������� ��� ������ � ��������
using namespace std;

void longRunningTask(int n, int number) {
    cout << "Potol number " << number << "startanyl" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Thread # " << number << endl;
        cout << "Thread running " << i << endl;  // ����� �������� ���� ����������
        this_thread::sleep_for(chrono::seconds(n));  // ������������ ������ �� 1 �������
    }
}

int main() {
    thread t1(longRunningTask, 3, 1);  // ������ ���������� ������ � ������
    thread t2(longRunningTask, 1, 2);  // ������ ���������� ������ � ������
    thread t3(longRunningTask, 2, 3);  // ������ ���������� ������ � ������
    
    t1.join();  // �������� ���������� ������
    t2.join();  // �������� ���������� ������
    t3.join();  // �������� ���������� ������
    return 0;
}
