#pragma once
static class tasks
{
    public:
        #include <iostream>
        /// <summary>
        /// Печать текста - https://new.contest.yandex.ru/42153/problem?id=2109007/2022_10_30/mPrLrWmV0Y
        /// </summary>
        static void task_1() {
            std::cout << "C++ is a general-purpose programming language with a bias towards systems programming that\n";
            std::cout << "  - is a better C\n";
            std::cout << "  - supports data abstraction\n";
            std::cout << "  - supports object-oriented programming\n";
            std::cout << "  - supports generic programming.\n";
        }

        #include <iostream>
        /// <summary>
        /// Сумма чисел - https://new.contest.yandex.ru/42153/problem?id=2109007/2022_10_30/JauJjtpRce
        /// </summary>
        static void task_2() {
            int value_1 = 0; int value_2 = 0;
            std::cin >> value_1 >> value_2;
            int sum = value_1 + value_2;
            std::cout << sum;
        }

        #include <iostream>
        /// <summary>
        /// Дюймы - https://new.contest.yandex.ru/42154/problem?id=2109007/2022_10_30/LuqDYUa7Rs
        /// </summary>
        int task_3() {
            double in_value_centimeter = 0.0;
            std::cin >> in_value_centimeter;
            double inch_value = in_value_centimeter / 2.54;
            std::cout << inch_value;
        }

        #include <iostream>
        /// <summary>
        /// Арифметическая прогрессия - https://new.contest.yandex.ru/42154/problem?id=2109007/2022_10_30/qBcsAH1OyR
        /// </summary>
        int task_4() {
            unsigned long n;
            std::cin >> n;
            std::cout << n * (n + 1) / 2 << "\n";
        }
};