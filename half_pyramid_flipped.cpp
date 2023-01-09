#include <iostream>
using namespace std;


int main() {

    int height;
    int width;
    int max = 5;

    /* For a flipped half pyramid. It would have two nested for loops which is
    the same as creating a full pyramid. the only difference is that in order
    to flip the half pyramid, we must add another space to the first nested
    for-loop. this will double the space used to push the items to the right
    therefore creating a flipped version of the half pyramid.
    
    NOTE: 
    0 space     = half pyramid
    1 space     = full pyramid
    2 spaces    = flipped half pyramid */

    for (height = 0; height < max; height++) {
        // row

        for (width = max; width > height; width--) {
            // 2 spaces to double the push

            cout << "  ";
        }

        for (width = 0; width <= height; width++) {
            // item. space on either side is important. if no space then, we
            // can remove one space from the first nested for-loop and it will
            // still become a flipped half pyramid.

            cout << " #";
        }
        cout << "\n";
    }

    return 0;
}