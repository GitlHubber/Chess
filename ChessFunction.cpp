#include "ChessFunction.h"

std::vector<ChessBoard> ChessFunction::getPossibleMoves(ChessBoard cb)
{
    std::vector<ChessBoard> result;

    PlayerColour turn = cb.getTurn();

    for(auto it = cb.begin(); it != cb.end(); ++it)
    {
        if(*it == ' ') continue;
        if(ownPiece(*it, turn)) continue;

        int rank = it.getRank();
        char file = it.getFile();

        switch(*it)
        {
        case 'p':
        case 'P':
            if(rank < 8) //то можно вперед
            {
                if(cb.isEmpty(file, rank + 1))
                {
                    //move!!
                    result.push_back(cb.move(file, rank, file, rank + 1));

                }
            }
        }
    }
}

bool ChessFunction::ownPiece(ChessPiece cp, PlayerColour turn)
{
    return (cp >= 'a' && cp <= 'z' && turn == WHITE);
}
