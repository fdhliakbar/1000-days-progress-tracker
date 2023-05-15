#include <iostream>

int main(){
    int firstNumber, secondNumber;
    int choice;
    int result;
    char stopProgram;

    std::cout<<"Calculator Program"<<'\n';
    while (true)
    {
        std::cout<<"Masukkan nilai pertama: ";
        std::cin>>firstNumber;
        std::cout<<"Masukkan nilai kedua: ";
        std::cin>>secondNumber;

        std::cout<<"Pilih program: ";
        std::cin>>choice;

        switch (choice){
        case 1:
            result = firstNumber + secondNumber;
            break;
        case 2:
            result = firstNumber - secondNumber;
            break;
        case 3:
            result = firstNumber * secondNumber;
            break;
        case 4:
            result = firstNumber / secondNumber;
            break;
        case 5:
            result = firstNumber % secondNumber;
            break;
        default:
            break;
        }

        std::cout<<"Hasil: "<<result<<'\n';

        std::cout<<"Apakah mau mengulang program? ";
        std::cin>>stopProgram;
        std::cout<<'\n';

        if (stopProgram != 'y') break;
    }
    return 0;
}