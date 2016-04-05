#ifndef Mesh_H
#define Mesh_H

// Standard includes
#include <iostream>
#include <vector>
// #include <map>
// #include <algorithm>
#include <png.h>

// OpenGL includes
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// Source includes
#include "utils/ObjectLoader.h"
#include "utils/texture.h"

// GLM includes
#include <glm/glm.hpp>


class Mesh{
public:	
	// Constructor
	Mesh();
	// Destructor
	~Mesh();

	// Init functions
	void initCube(float size);
	void initOBJ(const char* filename);

	// Get functions
	GLuint getVertexArrayID(){ return vertexArrayID; };
	GLuint getVertexbuffer(){ return vertexbuffer; };
	GLuint getNormalBuffer(){ return normalBuffer; };
	GLuint getUvBuffer(){ return uvbuffer; };
	int getVerticesLength(){ return vertices.size(); };

	GLuint png_texture_load(const char * file_name, int * width, int * height);

private:		
	// OpenGL handles 		
	GLuint vertexArrayID;
	GLuint vertexbuffer;
	GLuint normalBuffer;

	// For loaded OBJ's
	std::vector<glm::vec3> vertices;
	std::vector<glm::vec2> uvs;
	std::vector<glm::vec3> normals;

	GLuint uvbuffer;

};

#endif