/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <iostream>

int main() {
    int input1, input2, input3;

    std::cout << "Input[1] : ";
    std::cin >> input1;

    std::cout << "Input[2] : ";
    std::cin >> input2;

    std::cout << "Input[3] : ";
    std::cin >> input3;

    std::cout << "Output: ";

    if (input1 >= input2 && input1 >= input3) {
        std::cout << input1 << " ";
        if (input2 >= input3) {
            std::cout << input2 << " " << input3;
        } else {
            std::cout << input3 << " " << input2;
        }
    } else if (input2 >= input1 && input2 >= input3) {
        std::cout << input2 << " ";
        if (input1 >= input3) {
            std::cout << input1 << " " << input3;
        } else {
            std::cout << input3 << " " << input1;
        }
    } else {
        std::cout << input3 << " ";
        if (input1 >= input2) {
            std::cout << input1 << " " << input2;
        } else {
            std::cout << input2 << " " << input1;
        }
    }

    return 0;
}