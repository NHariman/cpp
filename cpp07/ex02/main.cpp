#include <iostream>
#include "inc/Array.hpp"
#include "inc/colours.hpp"

// TODO: 
// - compare addresses between two arrays, if two addresses are the same, return an error

#define MAX_VAL 750
int main(int, char**)
{
    std::cout << B_GREEN << "Create an int array called numbers: Array<int> numbers(MAX_VAL)" << B_END << std::endl;
    std::cout << B_GREEN << "Where MAX_VAL is 750" << B_END << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    std::cout << B_GREEN << "random seed for consistency" << B_END << std::endl;
    srand(time(NULL));
    std::cout << B_GREEN << "Assigning values to the arrays" << B_END << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        std::cout << ".";
    }
    std::cout << std::endl;
    std::cout << B_GREEN << "Completed assigning values to array numbers and mirror" << B_END << std::endl;
    //SCOPE
    {
        std::cout << B_GREEN << "Creating a scope:" << B_END << std::endl;
        std::cout << B_GREEN << "Array<int> tmp; < should trigger default constructor" << B_END << std::endl;
        Array<int> tmp;
        std::cout << B_GREEN << "tmp = numbers; < should trigger the assignation operator" << B_END << std::endl;
        tmp = numbers;
        std::cout << B_GREEN << "Compare values in tmp to values in numbers, if a number doesn't match it prints an error" << B_END << std::endl;
        std::cout << B_GREEN << "Also checks if the copy is deep by comparing addresses, if identical address is found an error is printed." << B_END << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (tmp[i] != numbers[i])
            {
               std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
            else if (&tmp[i] == &numbers[i])
            {
                std::cerr << "Identical addresses, deepcopy failed!!" << std::endl;
                return 1;
            }
            std::cout << ".";
        }
        std::cout << B_GREEN << "\nSuccess!" << B_END << std::endl;

        std::cout << B_GREEN << "Array<int> temp = numbers;" << B_END << std::endl;
        Array<int> temp = numbers;        
        std::cout << B_GREEN << "Compare values in temp to values in numbers, if a number doesn't match it prints an error" << B_END << std::endl;
        std::cout << B_GREEN << "Also checks if the copy is deep by comparing addresses, if identical address is found an error is printed." << B_END << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (temp[i] != numbers[i])
            {
               std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
            else if (&temp[i] == &numbers[i])
            {
                std::cerr << "Identical addresses, deepcopy failed!!" << std::endl;
                return 1;
            }
            std::cout << ".";
        }
        std::cout << B_GREEN << "\nSuccess!" << B_END << std::endl;
        
        std::cout << B_GREEN << "Array<int> test(tmp); < should trigger the copy constructor" << B_END << std::endl;
        Array<int> test(tmp);
        std::cout << B_GREEN << "Compare values in test to values in numbers, if a number doesn't match it prints an error" << B_END << std::endl;
        std::cout << B_GREEN << "Also checks if the copy is deep by comparing addresses, if identical address is found an error is printed." << B_END << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (test[i] != numbers[i])
            {
               std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
            else if (&test[i] == &numbers[i])
            {
                std::cerr << "Identical addresses, deepcopy failed!!" << std::endl;
                return 1;
            }
            std::cout << ".";
        }
        std::cout << B_GREEN << "\nSuccess!" << B_END << std::endl;
    }
    std::cout << B_GREEN << "Compare values in mirror to values in numbers, if a number doesn't match it prints an error" << B_END << std::endl;
     std::cout << B_GREEN << "Also checks if the copy is deep by comparing addresses, if identical address is found an error is printed." << B_END << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
        else if (&mirror[i] == &numbers[i])
        {
            std::cerr << "Identical addresses, deepcopy failed!!" << std::endl;
            return 1;
        }
        std::cout << ".";
    }
    std::cout << B_GREEN << "\nSuccess!" << B_END << std::endl;
    std::cout << B_YELLOW << "Out of bounds testing: numbers[-2]:" << B_END << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << B_YELLOW << "max value testing numbers[MAX_VAL]:" << B_END << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << B_RED << "Assigning random numbers to numbers array:" << B_END << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    std::cout << B_RED << "Complete!" << B_END << std::endl;
    delete [] mirror;//
    //while (1) {;} //uncomment for for leaks check
    return 0;
}