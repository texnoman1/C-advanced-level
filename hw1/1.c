/*
  Задача 1. Сколько раз встречается максимум

На стандартном потоке ввода задается натуральное число N (N > 0), после которого следует
последовательность из N целых чисел.
На стандартный поток вывода напечатайте, сколько раз в этой последовательности встречается максимум.
Указание: использовать массивы запрещается.
Данные на входе: Натуральное число N (N > 0), после которого следует последовательность из N целых
чисел.
Данные на выходе: Одно целое число.
Пример №1
Данные на входе: 6 1 2 3 2 0 3
Данные на выходе: 2
Пример №2
Данные на входе: 3 5 2 -1
Данные на выходе: 1
 */

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Читаем количество чисел

    // Инициализируем переменные для хранения максимального числа и его количество повторений
    int max_num, max_count;
    scanf("%d", &max_num); // Читаем первое число и считаем его максимальным
    max_count = 1;

    // Проходим по оставшимся числам
    for (int i = 1; i < N; i++) {
        int num;
        scanf("%d", &num); // Читаем следующее число

        if (num > max_num) { // Если новое число больше текущего максимального
            max_num = num; // Обновляем максимальное число
            max_count = 1; // Сбрасываем счетчик повторений
        } else if (num == max_num) { // Если новое число равно текущему максимальному
            max_count++; // Увеличиваем счетчик повторений
        }
    }

    // Выводим количество повторений максимального числа
    printf("%d\n", max_count);

    return 0;
}
