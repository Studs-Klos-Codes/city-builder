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
             */
            Tile (unsigned int, unsigned int);
            unsigned int getX();
            unsigned int getY();
            /**
             * Draws the Tile as a rectangle in the current window.
             */
            void draw(float, float, float, float);
        private:
            unsigned int x, y;
    };

} /*  citybuilder */

#endif /* end of include guard: TILE_HPP_K0VYLAJQ */
