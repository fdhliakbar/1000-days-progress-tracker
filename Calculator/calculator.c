#include <stdio.h>

typedef struct {
    int operand1;
    int operand2;
} Calculator;

// Method untuk inisialisasi calculaotr
void initialize(Calculator* calculator, int op1, int op2) {
    calculator->operand1 = op1;
    calculator->operand2 = op2;
}

// Operasi modulus
int modulus(const Calculator* calculator) {
    return calculator->operand1 % calculator->operand2;
}

// Operasi pertambahan
int add(const Calculator* calculator) {
    return calculator->operand1 + calculator->operand2;
}

// Operasi pembagian
float divide(const Calculator* calculator) {
    if (calculator->operand2 != 0) {
        return (float)calculator->operand1 / calculator->operand2;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

// Operasi pengurangan
int subtract(const Calculator* calculator) {
    return calculator->operand1 - calculator->operand2;
}

// Operasi perkalian(multiply)
int multiply(const Calculator* calculator) {
    return calculator->operand1 * calculator->operand2;
}

int main() {
    Calculator calculator;
    initialize(&calculator, 21, 3);

    printf("Modulus: %d\n", modulus(&calculator));
    printf("Addition: %d\n", add(&calculator));
    printf("Division: %.2f\n", divide(&calculator));
    printf("Subtraction: %d\n", subtract(&calculator));
    printf("Multiplication: %d\n", multiply(&calculator));

    return 0;
}
