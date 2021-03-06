/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NTCIP"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_EssPrecipSituation_H_
#define	_EssPrecipSituation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EssPrecipSituation {
	EssPrecipSituation_other	= 1,
	EssPrecipSituation_unknown	= 2,
	EssPrecipSituation_noPrecipitation	= 3,
	EssPrecipSituation_unidentifiedSlight	= 4,
	EssPrecipSituation_unidentifiedModerate	= 5,
	EssPrecipSituation_unidentifiedHeavy	= 6,
	EssPrecipSituation_snowSlight	= 7,
	EssPrecipSituation_snowModerate	= 8,
	EssPrecipSituation_snowHeavy	= 9,
	EssPrecipSituation_rainSlight	= 10,
	EssPrecipSituation_rainModerate	= 11,
	EssPrecipSituation_rainHeavy	= 12,
	EssPrecipSituation_frozenPrecipitationSlight	= 13,
	EssPrecipSituation_frozenPrecipitationModerate	= 14,
	EssPrecipSituation_frozenPrecipitationHeavy	= 15
} e_EssPrecipSituation;

/* EssPrecipSituation */
typedef long	 EssPrecipSituation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EssPrecipSituation;
asn_struct_free_f EssPrecipSituation_free;
asn_struct_print_f EssPrecipSituation_print;
asn_constr_check_f EssPrecipSituation_constraint;
ber_type_decoder_f EssPrecipSituation_decode_ber;
der_type_encoder_f EssPrecipSituation_encode_der;
xer_type_decoder_f EssPrecipSituation_decode_xer;
xer_type_encoder_f EssPrecipSituation_encode_xer;
per_type_decoder_f EssPrecipSituation_decode_uper;
per_type_encoder_f EssPrecipSituation_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EssPrecipSituation_H_ */
#include "asn_internal.h"
