/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "JPN"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "JPN-Reg-Position3D.h"

static asn_TYPE_member_t asn_MBR_JPN_Reg_Position3D_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct JPN_Reg_Position3D, latitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LatitudeDMS2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"latitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct JPN_Reg_Position3D, longitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LongitudeDMS2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"longitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct JPN_Reg_Position3D, elevation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_JPN_Elevation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"elevation"
		},
};
static ber_tlv_tag_t asn_DEF_JPN_Reg_Position3D_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_JPN_Reg_Position3D_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* latitude */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* longitude */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* elevation */
};
static asn_SEQUENCE_specifics_t asn_SPC_JPN_Reg_Position3D_specs_1 = {
	sizeof(struct JPN_Reg_Position3D),
	offsetof(struct JPN_Reg_Position3D, _asn_ctx),
	asn_MAP_JPN_Reg_Position3D_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_JPN_Reg_Position3D = {
	"JPN-Reg-Position3D",
	"JPN-Reg-Position3D",
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
	asn_DEF_JPN_Reg_Position3D_tags_1,
	sizeof(asn_DEF_JPN_Reg_Position3D_tags_1)
		/sizeof(asn_DEF_JPN_Reg_Position3D_tags_1[0]), /* 1 */
	asn_DEF_JPN_Reg_Position3D_tags_1,	/* Same as above */
	sizeof(asn_DEF_JPN_Reg_Position3D_tags_1)
		/sizeof(asn_DEF_JPN_Reg_Position3D_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_JPN_Reg_Position3D_1,
	3,	/* Elements count */
	&asn_SPC_JPN_Reg_Position3D_specs_1	/* Additional specs */
};

