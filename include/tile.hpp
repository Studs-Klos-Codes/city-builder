#ifndef TILE_HPP_K0VYLAJQ
#define TILE_HPP_K0VYLAJQ

namespace  citybuilder
{
    /**
     * A representation of a tile in the game.
     */
    class Tile
    {
        public:
            /**
             * Initialize a Tile with a position and size.
             *
             * @param x Integer, the x position of the tile.
             * @param y Integer, the y position of the tile.
             * @param width Integer, the width, in pixels, of the tile.
             *              Defaults to 64.
             * @param height Integer, the height, in pixels, of the tile.
             *               Defaults to 64.
            */
            Tile (unsigned int, unsigned int, unsigned int = 64, unsigned int = 64);
            unsigned int getX();
            unsigned int getY();
            unsigned int getWidth();
            unsigned int getHeight();
        private:
            unsigned int width, height;
            unsigned int x, y;
    };

} /*  citybuilder */

#endif /* end of include guard: TILE_HPP_K0VYLAJQ */
