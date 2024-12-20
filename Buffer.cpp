//
// Created by Correia, Jose Bastos on 03/12/2024.
//

#include "Buffer.h"
#include <ostream>
#include <iostream>

using namespace std;

int Buffer::getIndex(int linha, int coluna) const
{
    return linha * colunas + coluna;
}

Buffer::Buffer(int linhas, int colunas):
linhas(linhas),
colunas(colunas),
posColuna(0),
posLinha(0)
{
    buffer = new char[linhas * colunas];
    clear();
}

Buffer::~Buffer()
{
    delete[] buffer;
}


void Buffer::clear()
{
    fill_n(buffer, linhas * colunas, '.');
}

void Buffer::render() const
{
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << buffer[getIndex(i, j)];
        }
        cout << '\n';
    }
}

void Buffer::moveCursor(int linha, int coluna)
{
    if (linha >= 0 && coluna < linhas && coluna >= 0 && coluna < colunas) {
        posLinha = linha;
        posColuna = coluna;
    }
}

void Buffer::insereCarater(char c)
{
    if (posLinha >= 0 && posLinha < linhas && posColuna >= 0 && posColuna < colunas) {
        buffer[getIndex(posLinha, posColuna)] = c;
        ++posColuna;
    }
}

void Buffer::insereString(const char* str)
{
    while (*str)
    {
        insereCarater(*str++);
    }
}

void Buffer::insereNum(int num)
{
    string str = to_string(num); //precisa de cast
    insereString(str.c_str());
}

Buffer & Buffer::operator<<(char c)
{
    insereCarater(c);
    return *this;
}

Buffer& Buffer::operator<<(const char* str)
{
    insereString(str);
    return *this;
}

Buffer& Buffer::operator<<(int num)
{
    insereNum(num);
    return *this;
}


