#include <GLFW/glfw3.h>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
	int width = 1400;
	int height = 850;
	const char*title = "Height to Mesh";

    window = glfwCreateWindow(width, height, title, NULL, NULL);
	cout << "Window created: " << width << " width and " << height << " height" << endl;
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}