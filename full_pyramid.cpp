#include <iostream>
using namespace std;


int main() {

    int height;
    int width;
    int max = 5;

    /* The full pyramid follows the same logic as the half pyramid wherein 
    the outer for-loop will represent the height of the pyramid and inside
    that for loop will contain two (2) for-loops.
    

    At the first nested for-loop will be the space to create the shape of
    the full pyramid. it should start from the value of the max height
    since the space will fill be used to push the items to the right. if
    the value of the width is equal or less than to the height, then the
    loop will stop. REMEMBER: as the height increases the width of the 
    space decreases.


    The second nested for-loop will be the same as creating a half pyramid.
    The pattern only becomes a full pyramid since the first nested for-loop
    is pushing the items to the right AND there should be a space on either
    side of the character. without the space beside the character, the
    pattern will display as a flipped half pyramid.

    NOTE: the item is the character that is used to display the pyramid.
    in this example, it is the character '#'.
    
    */


    for (height = 0; height < max; height++) {
        // row

        
        for (width = max; width > height; width--) {
            // whitespace to push items to the right
            cout << " ";
        }


        for (width = 0; width <= height; width++) {
            // the item. must contain a space on either side.
            cout << "# ";
        }

    
        cout << "\n";
    }

    return 0;
}