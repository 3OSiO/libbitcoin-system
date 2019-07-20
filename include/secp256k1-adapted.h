#ifndef SECP256K1_ADAPTED_H
#define SECP256K1_ADAPTED_H

#include <secp256k1.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef secp256k1_context_t secp256k1_context;

typedef struct {
   unsigned char data[64];
} secp256k1_pubkey;

typedef struct {
   unsigned char data[64];
} secp256k1_ecdsa_signature;

typedef struct {
   unsigned char data[65];
} secp256k1_ecdsa_recoverable_signature;

#ifdef __cplusplus
}
#endif

#endif /* SECP256K1_ADAPTED_H */
