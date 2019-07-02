#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <string>

namespace tictactoe {
    bool always_true();

    class Position {
    public:
        Position(int x, int y);
        std::string to_string() const;
        int _x;
        int _y;
    };

    class TicTacToe {
    public:
        std::string to_string() const;
    };
}


#endif //TICTACTOE_HPP
