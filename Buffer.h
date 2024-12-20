//
// Created by Correia, Jose Bastos on 03/12/2024.
//

#ifndef BUFFER_H
#define BUFFER_H

class Buffer {
    char * buffer;
    int linhas;
    int colunas;
    int posLinha;
    int posColuna;

    int getIndex(int linha, int coluna) const;

public:

    Buffer(int linhas, int colunas);

    ~Buffer();

    void clear();

    void render() const;

    void moveCursor(int linha, int coluna);

    // TODO: MAKE OVERLOAD LATER
    void insereCarater(char c);

    // TODO: MAKE OVERLOAD LATER
    void insereString(const char *str);

    // TODO: MAKE OVERLOAD LATER
    void insereNum(int num);

    // TODO: MAKE OVERLOAD LATER
    Buffer& operator<<(char c);

    // TODO: MAKE OVERLOAD LATER
    Buffer& operator<<(const char* str);

    // TODO: MAKE OVERLOAD LATER
    Buffer& operator<<(int num);

};

#endif //BUFFER_H
