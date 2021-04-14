#pragma once
#ifndef SHADER_H
#define SHADER_H

#include <string>
//shader��
class Shader
{
public:
	unsigned int m_ShaderID;
	/*
	����shader������Ҫ����vertexshader��fragmentshader��Դ����
	���������Լ��󶨡�
	
	*/
	Shader(const char * vertexPath, const char * fragmentPath);

	/*ʹ��program*/
	void use();
	void setBool(const std::string & name, bool value);
	void setInt(const std::string & name, int value);
	void setFloat(const std::string& name, float value);
};

#endif // !SHADER_H
