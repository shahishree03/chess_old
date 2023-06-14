#include "BasePiece.h"      // For BasePiece Class
#include <iostream>         // For writing to screen
#include <string>           // For string datatype

using namespace std;        // declare namespace to eliminate need for std::

/**@summary Default Constructor
 */
BasePiece::BasePiece() {
    type = " ";
}

/**@summary Default Destructor
 */
BasePiece::~BasePiece() {
}

/**@summary Draws the chess piece to the screen
 * @return void
 */
void BasePiece::Draw() {

    
    if (color == Black) {
        cout << "b";
    }
    else {
        cout << "w";
    }
    cout << type;
    
}

/**@summary Updates the position for the chess piece
 * @param pos - New posisition
 * @return void
 */
void BasePiece::SetPosition(Position pos) {

    this->pos = pos;
        
}

/**@summary Gets the current color of piece
 * @return Color
 */
Color BasePiece::GetColor() {
    return color;
}
