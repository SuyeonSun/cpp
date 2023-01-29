# include <iostream>
# include <array>
# include <typeinfo>
using namespace std;

void myFunction (int i, char c) {
    std::cout << "the value of i is " << i << std::endl;
    std::cout << "the value of c is " << c << std::endl;
}

int addNumbers (int number1, int number2) {
    std::cout << "Entering function " << __func__ << std::endl;
    return number1 + number2;
}

auto func(int i) -> int {
    return i + 2;
}

void addOne1 (int i) {
    i++; // 파라미터 변수의 복제본이기 때문에 원래 변수에는 아무런 영향이 없음
}

void addOne2 (int& i) {
    i++; // 원본 파라미터 변수의 값이 1 증가함
}

int main()
{
    int uninitialiedInt;
    int initialixedInt = 7;
    //cout << uninitialiedInt << " is a random value" << endl;
    //cout << initialixedInt << " was assigned an initial value" << endl;
    cout << "Hi";
    cout << "Bye"; // 출력 연산자
    int x;
    // cin >> x; // 입력 연산자

    float myFloat = 3.14f;
    int i1 = (int) myFloat;
    int i2 = int(myFloat);
    int i3 = static_cast<int>(myFloat);
    // cout << i1 << i2 << i3 << endl;

    int i = 34 + (8 * 2) + ((21/7) % 2);
    cout << i << endl;

    struct Employee {
        char firstInitial;
        char lastInitial;
        int employeeNumber;
        int salary;
    };

    Employee anEmployee;
    anEmployee.firstInitial = 'M';
    anEmployee.salary = 80000;
    cout << anEmployee.firstInitial << endl;

    int j = 3;
    std:cout << ((j > 2) ? "yes" : "no");

    int arr[] = {1, 2, 3, 4};
    char ticTacToeBoard[3][3];
    ticTacToeBoard[1][1] = 'o';

    array<int, 3> arr2 = {9, 8, 7};
    cout << "Array size=" << arr2.size() << endl;
    cout << "Element" << arr[1] << endl;

    int z = 100;
    do {
        std::cout << "This is silly." << std::endl;
        ++z;
    } while (z<5);

    array<int, 4> arr3 = {1, 2, 3, 4};
    for (int p : arr3) {
        cout << p << endl;
    }

    myFunction(8, 'a');
    int sum = addNumbers(1, 2);
    cout << "sum =>" << sum << endl;

    // ============ 포인터 ============
    int u = 5;
    std::cout << u << '\n'; // print the variable x
    std::cout << &u << '\n'; // print the memory address of variable x
    std::cout << *&u << '\n'; // print the value at the memory address of variable x

    int value = 5;
    int *ptr = &value; // 변수 값의 주소로 ptr 초기화
    std::cout << &value << '\n'; // value 변수의 주소 출력
    std::cout << ptr << '\n'; // ptr 변수 값 출력

    int value2 = 5;
    int *ptr2 = &value2;
    cout << "=>" << ptr2 << endl;
    cout << "=>" << *ptr2 << endl;

    int arraySize = 8;
    int* myVariableSizedArray = new int[arraySize];

    int myInt = 7;
    addOne1(myInt);
    cout << "addOne1 " << myInt << endl;
    addOne2(myInt);
    cout << "addOne2 " << myInt << endl;

    string myString = "Hello World";
}