#include "KGPL/kgpl.h"

float vertices[] = {
    -0.5f, -0.5f, 0.0f,
     0.5f, -0.5f, 0.0f,
     0.0f,  0.5f, 0.0f
};

int main(void) {
    KGPL::init({
        1200, 800, "Example Game"
    });

    KGPL::Scene scene({
        KGPL::ShadersPath {
            R"(C:\Users\rando\OneDrive\Documents\GitHub\kgpl3\shader\Vert2D.glsl)",
            R"(C:\Users\rando\OneDrive\Documents\GitHub\kgpl3\shader\Frag2D.glsl)",
            NULL,
        },

        KGPL::ShadersPath { NULL, NULL, NULL },

        true, true, false
    });

    KGPL::bind(&scene);

    unsigned int VBO;
    glGenBuffers(1, &VBO);

    unsigned int VAO;
    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);


    for (int i = 0; i < 100000; i++) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glUseProgram(KGPL::getCurrentScene()->ShaderProgram2D);
        glBindVertexArray(VAO);
        glDrawArrays(GL_TRIANGLES, 0, 3);

        glfwSwapBuffers(KGPL::PRIVATE::Window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}