#pragma once
#ifndef SHADER_H
#define SHADER_H

#include <string>
//shader类
class Shader
{
public:
	unsigned int m_ShaderID;
	/*
	创建shader对象，需要传入vertexshader和fragmentshader的源代码
	用来编译以及绑定。
	
	*/
	Shader(const char * vertexPath, const char * fragmentPath);

	/*使用program*/
	void use();
	void setBool(const std::string & name, bool value);
	void setInt(const std::string & name, int value);
	void setFloat(const std::string& name, float value);
};

#endif // !SHADER_H
