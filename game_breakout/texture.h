#pragma once
/*******************************************************************
** This code is part of Breakout.
**
** Breakout is free software: you can redistribute it and/or modify
** it under the terms of the CC BY 4.0 license as published by
** Creative Commons, either version 4 of the License, or (at your
** option) any later version.
******************************************************************/
#ifndef TEXTURE_H
#define TEXTURE_H

#include <glad/glad.h>

class Texture2D
{
public:
    unsigned int ID;
    unsigned int Width, Height; 
    unsigned int Internal_Format; 
    unsigned int Image_Format; 
    unsigned int Wrap_S; 
    unsigned int Wrap_T; 
    unsigned int Filter_Min; 
    unsigned int Filter_Max; 
    Texture2D();
    void Generate(unsigned int width, unsigned int height, unsigned char* data);
    void Bind() const;
};

#endif