#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "RU");
    int choice;

    do {
        cout << "\nВыберите задание (1-3, 0 - выход): ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // Задание 1: Расчет скорости
            double distance, time, speed;

            cout << "Введите расстояние до аэропорта (км): ";
            cin >> distance;

            cout << "Введите время в пути (часы): ";
            cin >> time;

            speed = distance / time;
            cout << "Необходимая скорость: " << speed << " км/ч" << endl;
            break;
        }
        case 2: {
            // Задание 2: Расчет стоимости поездки на скутере
            int start_hours, start_minutes, start_seconds;
            int end_hours, end_minutes, end_seconds;

            cout << "Введите время начала поездки (часы минуты секунды): ";
            cin >> start_hours >> start_minutes >> start_seconds;

            cout << "Введите время окончания поездки (часы минуты секунды): ";
            cin >> end_hours >> end_minutes >> end_seconds;

            int start_total_seconds = start_hours * 3600 + start_minutes * 60 + start_seconds;
            int end_total_seconds = end_hours * 3600 + end_minutes * 60 + end_seconds;

            int total_seconds = end_total_seconds - start_total_seconds;
            double total_minutes = total_seconds / 60.0;

            double cost = total_minutes * 2;

            cout << "Стоимость поездки: " << cost << " гривен" << endl;
            break;
        }
        case 3: {
            // Задание 3: Сравнение стоимости поездки на разных видах бензина
            double distance, fuel_consumption, price1, price2, price3;

            cout << "Введите расстояние (км): ";
            cin >> distance;

            cout << "Введите расход бензина на 100 км: ";
            cin >> fuel_consumption;

            cout << "Введите стоимость первого вида бензина: ";
            cin >> price1;

            cout << "Введите стоимость второго вида бензина: ";
            cin >> price2;

            cout << "Введите стоимость третьего вида бензина: ";
            cin >> price3;

            double fuel_needed = distance * fuel_consumption / 100; 
            double cost1 = fuel_needed * price1;
            double cost2 = fuel_needed * price2;
            double cost3 = fuel_needed * price3;

            cout << fixed << setprecision(2);
            cout << "----------------------------------------\n";
            cout << "| Вид бензина | Стоимость поездки |" << endl;
            cout << "----------------------------------------\n";
            cout << "| 1           | " << cost1 << " грн.  |" << endl;
            cout << "| 2           | " << cost2 << " грн.  |" << endl;
            cout << "| 3           | " << cost3 << " грн.  |" << endl;
            cout << "----------------------------------------\n";
            break;
        }
        case 0:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Некорректный выбор. Попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}