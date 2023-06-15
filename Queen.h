#ifndef _QUEEN_H
#define	_QUEEN_H

#include "BasePiece.h"

class Queen : public BasePiece {

public:
    // Constructors
    Queen(Color color, Position pos);
    virtual ~Queen();

    // Public functions
    bool ValidateMove(Position moveToPosition);
private:

};

#endif	/* _QUEEN_H */
