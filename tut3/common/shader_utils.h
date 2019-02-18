#ifndef _CREATE_SHADER_H
#define _CREATE_SHADER_H
#include <GL/glew.h>

extern char* file_read(const char* filename);
extern void print_log(GLuint object);
extern GLuint create_shader(const char* filename, GLenum type);

#endif

