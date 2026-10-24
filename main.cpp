#include <GLFW/glfw3.h>
#include <cstdio>

int main() {
    if (!glfwInit()) {
        std::fprintf(stderr, "glfwInit failed\n");
        return 1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "Lab 01 - 2024-cs-020", nullptr, nullptr);
    if (!window) {
        std::fprintf(stderr, "Window creation failed\n");
        glfwTerminate();
        return 1;
    }

    glfwMakeContextCurrent(window);

    std::printf("GL %s on %s\n",
                reinterpret_cast<const char*>(glGetString(GL_VERSION)),
                reinterpret_cast<const char*>(glGetString(GL_RENDERER)));

    while (!glfwWindowShouldClose(window)) {
        // >>> YOUR IDENTIFIABLE CLEAR COLOUR GOES HERE <<<
        glClearColor(0.20f, 0.05f, 0.35f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
