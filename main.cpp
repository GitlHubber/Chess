#include <iostream>
#include "ChessBoard.h"
#include "ChessFunction.h"

using namespace std;

int main()
{
    ChessBoard cb;
    cb.debugPrint();
    cb.placePiece('E', 2, 'p');
    cb.debugPrint();

    auto tmp = ChessFunction::getPossibleMoves(cb);
    std::cout << tmp.length();

    return 0;
}
