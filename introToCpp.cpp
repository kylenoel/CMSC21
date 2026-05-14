#include <iostream>
using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    cout << "Hello World!\n";
    int age;
    float pi = 3.14;
    double e = 2.71828;
    string name;
    bool isCppFun = true;

    cin >> age;
    cout << "You entered age: " << age << "\n";
    printf("You entered age: %d\n", age);

    // cout << "Enter your name: ";
    // cin >> name;
    // cout << "You entered name: " << name << "\n";
    cin.ignore(); // Ignore the newline character left in the input buffer  
    cout << "Enter your full name: ";
    getline(cin, name);//19\n
    cout << "You entered full name: " << name << "\n";

    cout << isEven(age) << "\n"; // 1 for true, 0 for false

    // while(age < 18) {
    //     cout << "You are a minor.\n";
    //     age++;
    // }

    for(int i=0; i<5; i++) {
        cout << "i: " << i << "\n";
    }
    return 0;
}