#ifndef CHESSFUNCTION_H_INCLUDED
#define CHESSFUNCTION_H_INCLUDED

#include <vector>
#include "ChessBoard.h"

namespace ChessFunction
{
    std::vector<ChessBoard> getPossibleMoves(ChessBoard cb);
    bool ownPiece(ChessPiece cp, PlayerColour turn);

}

#endif // CHESSFUNCTION_H_INCLUDED
