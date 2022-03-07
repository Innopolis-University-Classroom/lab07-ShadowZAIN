template<typename T>
public class Calculator {
private:
    T num1, num2;

public:
    Calculator(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    T add(T number1, T number2) { return number1 + number2; }
    T subtract(T number1, T number2) { return number1 - number2; }
    T multiply(T number1, T number2) { return number1 * number2; }
    T divide(T number1, T number2) { return number1 / number2; }
};
