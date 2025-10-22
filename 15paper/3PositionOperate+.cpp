#include <istream>

using namespace std;

class Position {
private:
    int x, y;
public:
    Position(int px, int py) {
        x = px;
        y = py;
    }

    Position operator+(const Position &p) {
        return Position(x + p.x, y + p.y);
    }
};