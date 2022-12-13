#include "calculator.h"
	
    
double Calculator::Calculate(double x, char op, double y) {
        switch(op)
        {
            case '+':
                return x + y;
            case '-':
                return x - y;
            case '*':
                return x * y;
            case '/':
                return x / y;
            default:
                return 0.0;
        }
    }	

