/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EU"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "PrioritizationResponse.h"

static asn_TYPE_member_t asn_MBR_PrioritizationResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PrioritizationResponse, stationID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StationID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"stationID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PrioritizationResponse, priorState),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrioritizationResponseStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"priorState"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PrioritizationResponse, signalGroup),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignalGroupID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"signalGroup"
		},
};
static ber_tlv_tag_t asn_DEF_PrioritizationResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PrioritizationResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* stationID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* priorState */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* signalGroup */
};
static asn_SEQUENCE_specifics_t asn_SPC_PrioritizationResponse_specs_1 = {
	sizeof(struct PrioritizationResponse),
	offsetof(struct PrioritizationResponse, _asn_ctx),
	asn_MAP_PrioritizationResponse_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PrioritizationResponse = {
	"PrioritizationResponse",
	"PrioritizationResponse",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PrioritizationResponse_tags_1,
	sizeof(asn_DEF_PrioritizationResponse_tags_1)
		/sizeof(asn_DEF_PrioritizationResponse_tags_1[0]), /* 1 */
	asn_DEF_PrioritizationResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_PrioritizationResponse_tags_1)
		/sizeof(asn_DEF_PrioritizationResponse_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PrioritizationResponse_1,
	3,	/* Elements count */
	&asn_SPC_PrioritizationResponse_specs_1	/* Additional specs */
};

