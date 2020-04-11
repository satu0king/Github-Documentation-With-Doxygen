#include <iostream>

/** @file
 * @brief This is a "brief" explaination of this file
 *
 * This is a "Detailed" explaination of this file
 */

/**
 * @brief Brief explaination of namespace MyNamespace
 *
 * Detailed explaination of namespace MyNamespace
 */
namespace MyNamespace {

/**
 * @brief Brief explaination of namespace MyNamespace
 *
 * Detailed explaination of namespace MyNamespace
 *
 */
class MyClass {
    /**
     * @brief Construct a new My Class object
     *
     * Detailed explaination of how it prints hello world
     */

    public:
    MyClass() { std::cout << "Hello World" << std::endl; }

    /**
     * @brief Adds 2 numbers
     *
     * Brief explaination of how it adds 2 numbers
     *
     * @param a operand 1
     * @param b operand 2
     * @return int sum of a and b
     */
    int Add(int a, int b) { return a + b; }
};

}  // namespace MyNamespace

int main() {
    MyNamespace::MyClass obj;
    std::cout << obj.Add(4, 5) << std::endl;
}