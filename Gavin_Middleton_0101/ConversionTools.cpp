#include "ConversionTools.h"

float FtoC(float far) {
	return 5.0 / 9.0 * (far - 32.0);
}

float CtoF(float cel) {
	return (cel * 9.0 / 5.0) + 32.0;
}