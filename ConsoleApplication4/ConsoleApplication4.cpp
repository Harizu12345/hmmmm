#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//1

/*
double power(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    double base;
    int exponent;

    cout << "osnovanye Stepeny: ";
    cin >> base;

    cout << "pokazatel stepeny: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << " stepen " << exponent << " = " << result << endl;

    return 0;
}
*/

//2
/*
int sumInRange(int num1, int num2) {
    int sum = 0;
    int start = min(num1, num2);
    int end = max(num1, num2);

    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int num1, num2;

    cout << "first num: ";
    cin >> num1;

    cout << "second num: ";
    cin >> num2;

    int result = sumInRange(num1, num2);
    cout << "summa " << num1 << " and " << num2 << " = " << result << endl;

    return 0;
}
*/

//3

/*
bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void findPerfectNumbers(int start, int end) {
    cout << "num from " << start << " to " << end << ": ";
    for (int i = start; i <= end; ++i) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;

    cout << "start: ";
    cin >> start;

    cout << "end: ";
    cin >> end;

    findPerfectNumbers(start, end);

    return 0;
}
*/

//4

/*
void showCard(const string& card) {
    cout << "card: " << card << endl;
}

int main() {
    string card;

    cout << "ur card: ";
    getline(cin, card); 

    showCard(card);

    return 0;
}
*/