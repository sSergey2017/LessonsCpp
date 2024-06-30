#include <iostream>
#include <thread>
using namespace std;

void printMessage() {
    cout << "Hello from thread!" << endl;  // Вывод сообщения из потока
}

void displayNumber(int n) {
    cout << "Number: " << n << endl;  // Вывод переданного числа
}

int main() {
    thread t1(printMessage);  // Создание потока, который запускает функцию printMessage
    thread t2(displayNumber, 10);  // Создание потока с передачей параметра

    t1.join();  // Ожидание завершения потока перед выходом из main
    t2.join();

    return 0;
}
