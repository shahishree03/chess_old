#include "Queen.h"

/**@summary Constructor
 * @color Color of this new piece
 * @pos Position of this new piece
 */
Queen::Queen(Color color, Position pos) {
    this->type = "Q";
    this->color = color;
    this->pos = pos;
}

/**@summary Default Destructor
 */
Queen::~Queen() {

}

/**@summary Validates that a possible move abides by this pieces move logic
 * @param moteToPos - Position of where this piece will move
 * @return bool - Success or Fail
 */
bool Queen::ValidateMove(Position moveToPos) {

    return false;
}
