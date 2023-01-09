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
    is pushing the items to the right.
    
    */


    for (height = 0; height < max; height++) {

        
        for (width = max; width > height; width--) {
            cout << " ";
        }


        for (width = 0; width <= height; width++) {
            cout << "# ";
        }

    
        cout << "\n";
    }

    return 0;
}