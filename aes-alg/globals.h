#ifndef GLOBALS_H_INCLUDED
#define GLOBALS_H_INCLUDED

// Tabela de substitui��o (S-Box) usada na criptografia AES
const unsigned char sBox[16][16];

// Tabela de substitui��o inversa (S-Box inversa) usada na descriptografia AES
const unsigned char invSBox[16][16];
;

// Matriz de multiplica��o usada na etapa de MixColumns para criptografia
const unsigned char multiplicationMatrixEncrypt[4][4];

// Matriz de multiplica��o usada na etapa de MixColumns para descriptografia
const unsigned char multiplicationMatrixDecrypt[4][4];

// Tabela de substitui��o usada na etapa de MixColumns para criptografia
const unsigned char eTable[16][16];

// Tabela de substitui��o usada na etapa de MixColumns para descriptografia
const unsigned char lTable[16][16];


#endif // GLOBALS_H_INCLUDED
