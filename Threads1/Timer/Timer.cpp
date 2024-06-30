#include <iostream>
#include <thread>
#include <chrono>  // Библиотека для работы с временем
using namespace std;

void longRunningTask(int n, int number) {
    cout << "Potol number " << number << "startanyl" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Thread # " << number << endl;
        cout << "Thread running " << i << endl;  // Вывод текущего шага выполнения
        this_thread::sleep_for(chrono::seconds(n));  // Приостановка потока на 1 секунду
    }
}

int main() {
    thread t1(longRunningTask, 3, 1);  // Запуск длительной задачи в потоке
    thread t2(longRunningTask, 1, 2);  // Запуск длительной задачи в потоке
    thread t3(longRunningTask, 2, 3);  // Запуск длительной задачи в потоке
    
    t1.join();  // Ожидание завершения потока
    t2.join();  // Ожидание завершения потока
    t3.join();  // Ожидание завершения потока
    return 0;
}
