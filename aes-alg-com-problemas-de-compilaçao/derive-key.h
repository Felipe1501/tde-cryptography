#ifndef DERIVE_KEY_H
#define DERIVE_KEY_H


/**
 * @brief Deriva uma chave criptográfica a partir de uma chave original usando o algoritmo PBKDF2.
 *
 * Esta função realiza a derivação de uma chave criptográfica com base na chave original, usando o algoritmo PBKDF2. A chave derivada resultante é armazenada em `derivedKey` e seu tamanho é atualizado em `keyLength`. O valor `salt` é usado como entrada para aumentar a segurança da derivação.

 * @param key A chave original da qual a chave derivada será gerada.
 * @param derivedKey Um ponteiro para o local onde a chave derivada será armazenada.
 * @param keyLength Um ponteiro para o tamanho da chave original e, após a chamada da função, o tamanho da chave derivada.
 * @param salt Um ponteiro para o valor de "salt" utilizado na derivação. O salt é um vetor de 16 bytes aleatórios. Na criptografia é gerado aleatoriamente e na descriptografia é usado o mesmo salt do processo de criptografia.
 * @param operationType O tipo de operação (1 ou -1) para determinar o uso do "salt".
 * @return Retorna 0 se a derivação for bem-sucedida; caso contrário, retorna um valor diferente.
 */
int deriveKey(char *key, unsigned char *derivedKey, short *keyLength, unsigned char **salt, short operationType);

#endif /* DERIVE_KEY_H */
