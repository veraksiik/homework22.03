#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "������� 1"<<endl;

    int n;
    cout << "������� �����: ";
    cin >> n;

    int arr[3][3];

    arr[0][0] = n;

    for (int i = 1; i < 3 * 3; i++) {
        arr[i / 3][i % 3] = arr[(i - 1) / 3][(i - 1) % 3] * 2;
    }

    cout << "��������� ������:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "������� 2" << endl;

        int q;
        cout << "������� �����: ";
        cin >> q;

        int ar[3][3];

        ar[0][0] = q;

        for (int i = 1; i < 3 * 3; i++) {
            ar[i / 3][i % 3] = ar[(i - 1) / 3][(i - 1) % 3] + 1;
        }

        cout << "��������� ������:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << ar[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    return 0;
}
