#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Chon phep tinh:\n";
    cout << "1. Cong (+)\n";
    cout << "2. Tru (-)\n";
    cout << "3. Nhan (*)\n";
    cout << "4. Chia (/)\n";
    cout << "5. Thoat\n";
    cout << "Lua chon cua ban: ";
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        displayMenu();
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Nhap so thu nhat: ";
            cin >> num1;
            cout << "Nhap so thu hai: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    result = num1 + num2;
                    cout << "Ket qua: " << num1 << " + " << num2 << " = " << result << endl;
                    break;
                case 2:
                    result = num1 - num2;
                    cout << "Ket qua: " << num1 << " - " << num2 << " = " << result << endl;
                    break;
                case 3:
                    result = num1 * num2;
                    cout << "Ket qua: " << num1 << " * " << num2 << " = " << result << endl;
                    break;
                case 4:
                    if (num2 != 0) {
                        result = num1 / num2;
                        cout << "Ket qua: " << num1 << " / " << num2 << " = " << result << endl;
                    } else {
                        cout << "Loi: Khong the chia cho 0.\n";
                    }
                    break;
            }
        } else if (choice == 5) {
            cout << "Thoat chuong trinh.\n";
        } else {
            cout << "Lua chon khong hop le, vui long thu lai.\n";
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}
