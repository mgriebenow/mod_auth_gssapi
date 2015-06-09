/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GssapiSessionModule"
 * 	found in "session.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_GSSSessionData_H_
#define	_GSSSessionData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Uint32.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GSSSessionData */
typedef struct GSSSessionData {
	Uint32_t	 expiration;
	OCTET_STRING_t	 username;
	OCTET_STRING_t	 gssname;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSSSessionData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSSSessionData;

#ifdef __cplusplus
}
#endif

#endif	/* _GSSSessionData_H_ */
#include <asn_internal.h>
