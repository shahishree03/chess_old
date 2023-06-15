#include "Rook.h"


/**@summary Constructor
 * @color Color of this new Rook
 * @pos Position of this new Rook
 */
Rook::Rook(Color color, Position pos) {
    this->type = "R";
    this->color = color;
    this->pos = pos;
}

/**@summary Default Destructor
 */
Rook::~Rook() {

}

/**@summary Validates that a possible move abides by this pieces move logic
 * @param moteToPos - Position of where this piece will move
 * @return bool - Success or Fail
 */
bool Rook::ValidateMove(Position moveToPos) {
    
    return false;
}
