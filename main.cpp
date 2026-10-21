
#include <iostream>
using namespace std;

// Завдання If13
// Знайти середнє за величиною з трьох чисел
void task_if13()
{
    double A, B, C, result;

    cout << "If13" << endl;

    // Введення трьох чисел
    cout << "A = ";
    cin >> A;

    cout << "B = ";
    cin >> B;

    cout << "C = ";
    cin >> C;

    // Перевірка правильності введення
    if (!cin)
    {
        cout << "Wrong input!" << endl;
        return;
    }

    // Пошук середнього за величиною числа
    if ((A >= B && A <= C) || (A <= B && A >= C))
        result = A;
    else if ((B >= A && B <= C) || (B <= A && B >= C))
        result = B;
    else
        result = C;

    // Виведення результату
    cout << "Middle number = " << result << endl;
}

// Завдання If32
// Обчислення функції h(x)
void task_if32()
{
    double x, h;

    cout << "If32" << endl;

    // Введення числа
    cout << "x = ";
    cin >> x;

    // Перевірка правильності введення
    if (!cin)
    {
        cout << "Wrong input!" << endl;
        return;
    }

    // Обчислення функції
    if (x < 0)
        h = 2 * x;
    else if (x < 3)
        h = x;
    else
        h = 6 - x;

    // Виведення результату
    cout << "h = " << h << endl;
}

// Завдання Geom10
// Перевірка належності точки коричневій області
void task_geom10()
{
    double a, x, y;

    cout << "Geom10" << endl;

    // Введення сторони квадрата
    cout << "a = ";
    cin >> a;

    // Перевірка правильності введення
    if (!cin || a <= 0)
    {
        cout << "Wrong input!" << endl;
        return;
    }

    // Введення координат точки
    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    // Перевірка правильності введення
    if (!cin)
    {
        cout << "Wrong input!" << endl;
        return;
    }

    // Перевірка належності квадрату
    bool inSquare = (x >= -a / 2 && x <= a / 2 &&
                     y >= -a && y <= 0);

    // Перевірка належності кругу
    double r = a / 2;

    bool inCircle = (x * x + (y + r) * (y + r) <= r * r);

    // Похила пряма
    double line = x - a / 2;

    // Коричнева область під похилою прямою всередині круга
    bool brownRight = (y > line && !inCircle && x >= 0);

    // Коричнева область над похилою прямою поза кругом
    bool brownRight2 = (y < line && !inCircle && x <= 0);

    // Перевірка належності коричневій області
    bool result = inSquare && (brownLeft || brownRight);

    // Виведення результату
    if (result)
        cout << "Point belongs to brown area." << endl;
    else
        cout << "Point does not belong to brown area." << endl;
}

// Головна функція програми
int main()
{
    int menu;

    // Меню вибору завдання
    cout << "Choose task:" << endl;
    cout << "1 - If13" << endl;
    cout << "2 - If32" << endl;
    cout << "3 - Geom10" << endl;

    cout << "Task number = ";
    cin >> menu;

    // Перевірка введення
    if (!cin)
    {
        cout << "Wrong input!" << endl;
        return 0;
    }

    // Вибір завдання
    switch (menu)
    {
        case 1:
            task_if13();
            break;

        case 2:
            task_if32();
            break;

        case 3:
            task_geom10();
            break;

        default:
            cout << "Wrong task number!" << endl;
    }

    return 0;
}
