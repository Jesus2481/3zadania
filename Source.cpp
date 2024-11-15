#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "RU");
    int choice;

    do {
        cout << "\n�������� ������� (1-3, 0 - �����): ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // ������� 1: ������ ��������
            double distance, time, speed;

            cout << "������� ���������� �� ��������� (��): ";
            cin >> distance;

            cout << "������� ����� � ���� (����): ";
            cin >> time;

            speed = distance / time;
            cout << "����������� ��������: " << speed << " ��/�" << endl;
            break;
        }
        case 2: {
            // ������� 2: ������ ��������� ������� �� �������
            int start_hours, start_minutes, start_seconds;
            int end_hours, end_minutes, end_seconds;

            cout << "������� ����� ������ ������� (���� ������ �������): ";
            cin >> start_hours >> start_minutes >> start_seconds;

            cout << "������� ����� ��������� ������� (���� ������ �������): ";
            cin >> end_hours >> end_minutes >> end_seconds;

            int start_total_seconds = start_hours * 3600 + start_minutes * 60 + start_seconds;
            int end_total_seconds = end_hours * 3600 + end_minutes * 60 + end_seconds;

            int total_seconds = end_total_seconds - start_total_seconds;
            double total_minutes = total_seconds / 60.0;

            double cost = total_minutes * 2;

            cout << "��������� �������: " << cost << " ������" << endl;
            break;
        }
        case 3: {
            // ������� 3: ��������� ��������� ������� �� ������ ����� �������
            double distance, fuel_consumption, price1, price2, price3;

            cout << "������� ���������� (��): ";
            cin >> distance;

            cout << "������� ������ ������� �� 100 ��: ";
            cin >> fuel_consumption;

            cout << "������� ��������� ������� ���� �������: ";
            cin >> price1;

            cout << "������� ��������� ������� ���� �������: ";
            cin >> price2;

            cout << "������� ��������� �������� ���� �������: ";
            cin >> price3;

            double fuel_needed = distance * fuel_consumption / 100; 
            double cost1 = fuel_needed * price1;
            double cost2 = fuel_needed * price2;
            double cost3 = fuel_needed * price3;

            cout << fixed << setprecision(2);
            cout << "----------------------------------------\n";
            cout << "| ��� ������� | ��������� ������� |" << endl;
            cout << "----------------------------------------\n";
            cout << "| 1           | " << cost1 << " ���.  |" << endl;
            cout << "| 2           | " << cost2 << " ���.  |" << endl;
            cout << "| 3           | " << cost3 << " ���.  |" << endl;
            cout << "----------------------------------------\n";
            break;
        }
        case 0:
            cout << "����� �� ���������." << endl;
            break;
        default:
            cout << "������������ �����. ���������� �����." << endl;
        }
    } while (choice != 0);

    return 0;
}