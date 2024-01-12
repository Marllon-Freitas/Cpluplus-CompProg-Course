
// ligar Bit
unsigned short ligarBit(unsigned short valor, unsigned short posicao) {
	int mascara = 1 << posicao;
	return valor | mascara;
}

// desligar Bit
unsigned short desligarBit(unsigned short valor, unsigned short posicao) {
	int mascara = 1 << posicao;
	return valor & ~mascara;
}

// testar Bit
bool testarBit(unsigned short valor, unsigned short posicao) {
	int mascara = 1 << posicao;
	return valor & mascara;
}

// AND Binário
unsigned short andBinario(unsigned short a, unsigned short b) {
	return a & b;
}

// OR Binário
unsigned short orBinario(unsigned short a, unsigned short b) {
	return a | b;
}

// Bits Baixos
unsigned short bitsBaixos(unsigned short valor) {
	return valor & 0x00FF;
}

// Bits Altos
unsigned short bitsAltos(unsigned short valor) {
	return valor & 0xFF00;
}
