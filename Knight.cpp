#include "Knight.h"

/**@summary Constructor
 * @color Color of this new piece
 * @pos Position of this new piece
 */
Knight::Knight(Color color, Position pos) {
    this->type = "N";
    this->color = color;
    this->pos = pos;
}

/**@summary Default Destructor
 */
Knight::~Knight() {

}

/**@summary Validates that a possible move abides by this pieces move logic
 * @param moteToPos - Position of where this piece will move
 * @return bool - Success or Fail
 */
bool Knight::ValidateMove(Position moveToPos) {

    return false;
}
