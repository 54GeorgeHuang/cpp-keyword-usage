#include <iostream>

int main(void)
{
    const int raw_variable = 10;
    // can't
    // raw_variable = 20;


    const struct {
        int i;
        const char* s;
    } pod = {1, "a string"};
    // can't
    // pod.i = 10;

    int temp1 = 1;
    int temp2 = 2;
    int* const variable_pointer = &temp1;
    // can't
    // variable_pointer = &temp2;

    std::cout << pod.i << std::endl;
    std::cout << pod.s << std::endl;
    return 0;
}