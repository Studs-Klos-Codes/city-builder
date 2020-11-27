#include "tile.hpp"

namespace citybuilder
{
    Tile::Tile(unsigned int x, unsigned int y, unsigned int width, unsigned height)
        :x(x), y(x), width(width), height(height) {}

    unsigned int Tile::getX()
    {
        return x;
    }

    unsigned int Tile::getY()
    {
        return y;
    }

    unsigned int Tile::getHeight()
    {
        return height;
    }

    unsigned int Tile::getWidth()
    {
        return width;
    }
}
