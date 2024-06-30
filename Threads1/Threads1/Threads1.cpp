#include <iostream>
#include <thread>
using namespace std;

void printMessage() {
    cout << "Hello from thread!" << endl;  // ����� ��������� �� ������
}

void displayNumber(int n) {
    cout << "Number: " << n << endl;  // ����� ����������� �����
}

int main() {
    thread t1(printMessage);  // �������� ������, ������� ��������� ������� printMessage
    thread t2(displayNumber, 10);  // �������� ������ � ��������� ���������

    t1.join();  // �������� ���������� ������ ����� ������� �� main
    t2.join();

    return 0;
}
