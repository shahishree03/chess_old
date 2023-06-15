#include "King.h"

/**@summary Constructor
 * @color Color of this new piece
 * @pos Position of this new piece
 */
King::King(Color color, Position pos) {
    this->type = "K";
    this->color = color;
    this->pos = pos;
}

/**@summary Default Destructor
 */
King::~King() {

}

/**@summary Validates that a possible move abides by this pieces move logic
 * @param moteToPos - Position of where this piece will move
 * @return bool - Success or Fail
 */
bool King::ValidateMove(Position moveToPos) {

    return false;
}
