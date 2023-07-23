#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() {
	glfwInit();

	// Tell GLFW the version of OPENGL 
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create a Window
	GLFWwindow* window = glfwCreateWindow(800, 800, "OpenGL", NULL, NULL);

	// check if windows creation failed
	if (window == NULL) {
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}

	// Create a context to to introduce the window our context
	glfwMakeContextCurrent(window);

	// load glad to current window
	gladLoadGL();

	// specify the size of the viewport 
	glViewport(0,0, 800, 800);

	// set the colour of the viewport 
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);

	// clean the background buffer and assign new color to it
	glClear(GL_COLOR_BUFFER_BIT);

	// swap ask window to swap buffer
	glfwSwapBuffers(window);

	// use while loop to keep window open
	while (!glfwWindowShouldClose(window)) {

		glfwPollEvents();
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}