#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Оберіть завдання (1-5):\n";
    cout << "1. Поділити 5 на 2 та вивести як float\n";
    cout << "2. Константа float = 3.14\n";
    cout << "3. Вивести ASCII-код символу\n";
    cout << "4. Сума цілого і дробового числа\n";
    cout << "5. Наступний символ у таблиці ASCII\n";
    cout << "Ваш вибір: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        int a = 5, b = 2;
        float result = (float)a / b;
        cout << "Результат: " << result << endl;
        break;
    }
    case 2: {
        const float pi = 3.14f;
        cout << "Константа pi = " << pi << endl;
        break;
    }
    case 3: {
        char ch;
        cout << "Введіть символ: ";
        cin >> ch;
        cout << "ASCII-код символу '" << ch << "' = " << (int)ch << endl;
        break;
    }
    case 4: {
        int intNum;
        float floatNum;
        cout << "Введіть ціле число: ";
        cin >> intNum;
        cout << "Введіть дробове число: ";
        cin >> floatNum;
        float sum = intNum + floatNum;
        cout << "Сума = " << sum << endl;
        break;
    }
    case 5: {
        char symbol;
        cout << "Введіть символ: ";
        cin >> symbol;
        char nextSymbol = symbol + 1;
        cout << "Наступний символ: " << nextSymbol << endl;
        break;
    }
    default:
        cout << "Невірний вибір." << endl;
    }

    return 0;
}
