#include <stdio.h>

/** @file
 * @brief This is a "brief" explaination of this file
 *
 * This is a "Detailed" explaination of this file
 */

/**
 * @brief Structure to store a point information
 *
 * This is a structure which maintains 2 attributes x and y to maintain position
 * information
 */
struct Point {
    int x;
    int y;
};

/**
 * @brief Add two points
 *
 * @param p1
 * @param p2
 * @return struct Point
 */
struct Point addPoint(struct Point p1, struct Point p2) {
    struct Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result;
}

int main() {
    struct Point p1 = {.x = 10, .y = 10};
    struct Point p2 = {.x = 10, .y = 20};

    struct Point p3 = addPoint(p1, p2);

    printf("(%d, %d) + (%d, %d) = (%d, %d)\n", p1.x, p1.y, p2.x, p2.y, p3.x, p3.y);
}