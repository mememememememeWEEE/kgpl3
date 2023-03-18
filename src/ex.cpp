#include "KGPL/kgpl.h"

int main(void)
{
    KGPL::init({
        1200, 800, "Example Game"
    });

    auto h = KGPL::ShaderUtil::CompileVertexShader("h", true);

    /* Loop until the user closes the window */
    for (int i = 0; i < 100000; i++) {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(KGPL::PRIVATE::Window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}