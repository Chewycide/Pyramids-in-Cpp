#include <iostream>
using namespace std;


int main() {

    int height;
    int width;
    int max = 5;

    /* To implement the flipped inverted half pyramid, the space
    that will push the items should be double IF there is also a
    space on either side of the item that is being printed, but
    if we want the items to be beside each other then we can 
    remove the space on either side of the item use only a single
    space to push the items. */
    
    for (height = 0; height < max; height++) {
        // row
        
        for (width = 0; width <= height; width++) {
            // single space IF there is no space beside the item.
            // double space IF there is a space beside the item.
            cout << "  ";
        }

        for (width = max; width > height; width--) {
            // with our without space on either side will determine
            // if full pyramid or flipped half pyramid.
        
            cout << "# ";
        }

        cout << "\n";
    }

    return 0;
}