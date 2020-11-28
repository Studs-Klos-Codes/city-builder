#include "tile.hpp"
#include <GLFW/glfw3.h>

namespace citybuilder
{
    Tile::Tile(unsigned int x, unsigned int y) :x(x), y(x) {}

    unsigned int Tile::getX()
    {
        return x;
    }

    unsigned int Tile::getY()
    {
        return y;
    }

    void Tile::draw(float x, float y, float width, float height)
    {
        glBegin(GL_QUADS);
            glVertex3f(x, y, 0.0);
            glVertex3f(x + width, y, 0.0);
            glVertex3f(x + width, y + height, 0.0);
            glVertex3f(x, y + height, 0.0);
        glEnd();
    }
}
