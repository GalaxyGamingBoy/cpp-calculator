#include <iostream>

int nums[2];
char op;


int parseAndReturnData(){
    switch (op){
        case '+':
            return nums[0] + nums[1];
        case '-':
            return nums[0] - nums[1];
        case '*':
            return nums[0] * nums[1];
        case '/':
            return nums[0] / nums[1];
        default:
            return 0;
    }
}

void getInputFromUser(){
    std::cout << "Enter Operator: ";
    std::cin >> op;
    std::cout << "Enter numbers: " << std::endl << "1: ";
    std::cin >> nums[0];
    std::cout << "2: ";
    std::cin >> nums[1];
}

int main() {
    std::cout << "Calculator" << std::endl;
    getInputFromUser();
    std::cout << parseAndReturnData() << std::endl;
    return 200;
}
