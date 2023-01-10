#include <iostream>
using namespace std;


int main() {

    int height;
    int width;
    int max = 5;

    /* When inverting the half pyramid you have to think that
    when the height increases, then the width decreases. to
    implement this, the width must start at the max value 
    since the foot of the pyramid is at the top. then if the
    height is smaller than the width the program must loop
    until it reaches the value of the height.
    
    the width of each heigth iteration = width - height

    WHERE: 
    - height starts at 0 up to max
    - width starts at max */

    for (height = 0; height < max; height++) {

        for (width = max; width > height; width--) {

            cout << "# ";
        }
        cout << "\n";
    }

    return 0;
}