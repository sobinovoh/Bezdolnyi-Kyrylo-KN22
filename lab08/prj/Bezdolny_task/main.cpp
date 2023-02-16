#include <iostream>
#include <clocale>
#include "ModulesBezdolny.h"

using namespace std;

string copyright() {
    return "(c) ���������� ������";
}

bool expression(char a, char b) {
    return  a + 5 > b + 2;
}

string DecHexSFunc(int x, int y, int z) {
    cout << "� ��������i�: " << endl
         << "'x' -> " << dec << x << endl
         << "'y' -> " << dec << y << endl
         << "'z' -> " << dec << z << endl << endl;
    cout << "� �i�����������i�: " << endl
         << "'x' -> " << hex << x << endl
         << "'y' -> " << hex << y << endl
         << "'z' -> " << hex << z << endl << endl;
    cout << endl << "��������� ���������� ������: S = " << s_calculation(x, y, z) << endl;
    return "";
}


int main() {
    setlocale(LC_ALL, "ukr");
    cout << copyright() << endl << endl;

    int x, y, z;
    char a, b;

    cout << "����i�� x, y, z: ";
    cin >> x >> y >> z;
    cout << "����i�� ������� 'a' �� 'b': ";
    cin >> a >> b;

    cout << "��������� ������: a + 5 > b + 2 -> " << expression(a, b) << endl << endl;
    cout << DecHexSFunc(x, y, z);
    return 0;
}
