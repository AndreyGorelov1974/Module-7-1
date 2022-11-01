﻿/*Задание 1. Запасы продовольствия
Что нужно сделать
Ваш космический корабль потерпел крушение на пустынной планете.Еда здесь не растёт, но вы спасли из - под обломков 100 - килограммовый мешок гречки.Из прошлого опыта вы знаете, что если будете экономно питаться, то у вас будет уходить по четыре килограмма гречки в месяц.Чтобы прикинуть гречневый бюджет, вы решили написать программу, которая выведет информацию о том, сколько килограммов гречки у вас должно быть в запасе через месяц, два и так далее, пока она не закончится.

Пример выполнения

Всего гречки было на начало подсчёта : 100 кг
После 1 месяца у вас в запасе останется 96 кг гречки
После 2 месяца у вас в запасе останется 92 кг гречки
…
После _ месяца гречка закончится

Рекомендации по выполнению
Для решения данной задачи рекомендуется использовать цикл for.

Что оценивается
Программа выводит информацию об остатке гречки за каждый месяц с помощью циклов.
Текстовое сообщение выводится в цикле и за каждый месяц.
Программа заканчивает выполнение только после того, как в мешке не осталось гречки.*/

#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int buckwheatStock = 100;
    std::cout << "Всего гречки было на начало подсчёта: " << buckwheatStock << std::endl;
    int beenMonth = 1;

    for (buckwheatStock = 96; buckwheatStock >= 0; buckwheatStock -= 4) {
        std::cout << "После " << beenMonth << " месяца у вас в запасе останется " << buckwheatStock << " кг гречки" << std::endl;
    }
}