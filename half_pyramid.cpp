#include <iostream>
using namespace std;


int main() {

    int row;
    int col;
    int max = 5;

    /* 
    
    The logic for pyramids in CLI is that the outer for-loop will
    represent the rows of the pyramid (can also be called height) and
    the important function of the outer for-loop is printing a newline.
    
    This outer for-loop will contain what should be added in as the columns.
    
    from my example, the pyramid should have a max row of 5 and the max
    column of the pyramid will inherit the row of the pyramid. for every 
    loop of the row, the column will increase therefore creating a pyramid. 
    
    
    REMEMBER:
    row = height
    column = width 

    */
   
    for (row = 0; row < max; row++) {

        for (int col = 0; col <= row; col++) {

            cout << "# ";
        }
        cout << "\n";
    }

    return 0;
}