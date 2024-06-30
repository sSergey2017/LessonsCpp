#include <iostream>
#include <thread>

void printMessage() {
    std::cout << "Hello from thread! " << std::endl;
}

int main() {
    std::thread t1(printMessage);  // ������ �����
    std::thread t2(printMessage);  // ������ �����

    t1.join();  // ������� ���������� ������� ������
    t2.join();  // ������� ���������� ������� ������
    return 0;
}
