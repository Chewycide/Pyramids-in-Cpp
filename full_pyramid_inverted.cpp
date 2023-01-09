#include <iostream>
using namespace std;


int main() {

    int height;
    int width;
    int max = 5;

    /* The implementation of the inverted full pyramid is just the same
    as creating a full pyramid except the space width will start at 0
    and increases as the height increases while the item (character)
    width will start at max width and will decrease. without the first
    for-loop it will just be an inverted half pyramid. */ 

    for (height = 0; height < max; height++) {
        // row

        for (width = 0; width <= height; width++) {
            // whitespace to push items to the right must start at zero/min.
            // without whitespace the pyramid will become a half pyramid.
            cout << " ";
        }

        for (width = max; width > height; width--) {
            // items width must start at max since it is the topmost
            // row of the pyramid. space on either side is important
            // to create the full pyramid. without it the pyramid
            // will become a flipped half pyramid.
            cout << "# ";
        }

        cout << "\n";
    }


    return 0;
}