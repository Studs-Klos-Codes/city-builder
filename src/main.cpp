#include "tile.hpp"
#include <GLFW/glfw3.h>
#include <iostream>
#include <vector>

double x = 0.0;
double delta = 0.1;

void move_figure(GLFWwindow *w, int key, int scancode, int action, int mods)
{
    if (action == GLFW_PRESS || action == GLFW_REPEAT)
    {
        switch (key)
        {
            case GLFW_KEY_D:
                x += delta;
                break;
            case GLFW_KEY_A:
                x -= delta;
                break;
        }
    }
}

int main(int argc,char **argv)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    std::vector<citybuilder::Tile> v;
    v.push_back(citybuilder::Tile(0, 0));
    v.push_back(citybuilder::Tile(1, 1));

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    glfwSwapInterval(-1);

    glfwSetKeyCallback(window, move_figure);
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        v[0].draw(0.0, 0.0, 0.1, 0.1);
        v[1].draw(-0.5, -0.5, 0.1, 0.1);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
