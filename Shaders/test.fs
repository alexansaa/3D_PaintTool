#version 330 core
out vec4 FragColor;

//in vec2 TexCoord;

uniform vec4 uColor;

void main()
{
    FragColor = uColor;
}
