/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod_with_PSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "PersonalSafetyMessage.h"

static asn_TYPE_member_t asn_MBR_PersonalSafetyMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, basicType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalDeviceUserType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"basicType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, secMark),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSecond,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secMark"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, msgCnt),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgCount,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"msgCnt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, id),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, position),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Position3D,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"position"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, accuracy),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionalAccuracy,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"accuracy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, speed),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Velocity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, heading),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Heading,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"heading"
		},
	{ ATF_POINTER, 17, offsetof(struct PersonalSafetyMessage, accelSet),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccelerationSet4Way,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"accelSet"
		},
	{ ATF_POINTER, 16, offsetof(struct PersonalSafetyMessage, pathHistory),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PathHistory,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pathHistory"
		},
	{ ATF_POINTER, 15, offsetof(struct PersonalSafetyMessage, pathPrediction),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PathPrediction,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pathPrediction"
		},
	{ ATF_POINTER, 14, offsetof(struct PersonalSafetyMessage, propulsion),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PropelledInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"propulsion"
		},
	{ ATF_POINTER, 13, offsetof(struct PersonalSafetyMessage, useState),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalDeviceUsageState,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"useState"
		},
	{ ATF_POINTER, 12, offsetof(struct PersonalSafetyMessage, crossRequest),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalCrossingRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"crossRequest"
		},
	{ ATF_POINTER, 11, offsetof(struct PersonalSafetyMessage, crossState),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalCrossingInProgress,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"crossState"
		},
	{ ATF_POINTER, 10, offsetof(struct PersonalSafetyMessage, clusterSize),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfParticipantsInCluster,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"clusterSize"
		},
	{ ATF_POINTER, 9, offsetof(struct PersonalSafetyMessage, clusterRadius),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalClusterRadius,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"clusterRadius"
		},
	{ ATF_POINTER, 8, offsetof(struct PersonalSafetyMessage, eventResponderType),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PublicSafetyEventResponderWorkerType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eventResponderType"
		},
	{ ATF_POINTER, 7, offsetof(struct PersonalSafetyMessage, activityType),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PublicSafetyAndRoadWorkerActivity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activityType"
		},
	{ ATF_POINTER, 6, offsetof(struct PersonalSafetyMessage, activitySubType),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PublicSafetyDirectingTrafficSubType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activitySubType"
		},
	{ ATF_POINTER, 5, offsetof(struct PersonalSafetyMessage, assistType),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalAssistive,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"assistType"
		},
	{ ATF_POINTER, 4, offsetof(struct PersonalSafetyMessage, sizing),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UserSizeAndBehaviour,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sizing"
		},
	{ ATF_POINTER, 3, offsetof(struct PersonalSafetyMessage, attachment),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Attachment,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"attachment"
		},
	{ ATF_POINTER, 2, offsetof(struct PersonalSafetyMessage, attachmentRadius),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AttachmentRadius,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"attachmentRadius"
		},
	{ ATF_POINTER, 1, offsetof(struct PersonalSafetyMessage, animalType),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AnimalType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"animalType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, regional),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionalPersonalSafetyMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"regional"
		},
};
static const int asn_MAP_PersonalSafetyMessage_oms_1[] = { 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 };
static const ber_tlv_tag_t asn_DEF_PersonalSafetyMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PersonalSafetyMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* basicType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* secMark */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* msgCnt */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* position */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* accuracy */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* speed */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* heading */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* accelSet */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* pathHistory */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* pathPrediction */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* propulsion */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* useState */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* crossRequest */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* crossState */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* clusterSize */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* clusterRadius */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* eventResponderType */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* activityType */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* activitySubType */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* assistType */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* sizing */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* attachment */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* attachmentRadius */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* animalType */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 } /* regional */
};
static asn_SEQUENCE_specifics_t asn_SPC_PersonalSafetyMessage_specs_1 = {
	sizeof(struct PersonalSafetyMessage),
	offsetof(struct PersonalSafetyMessage, _asn_ctx),
	asn_MAP_PersonalSafetyMessage_tag2el_1,
	26,	/* Count of tags in the map */
	asn_MAP_PersonalSafetyMessage_oms_1,	/* Optional members */
	17, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PersonalSafetyMessage = {
	"PersonalSafetyMessage",
	"PersonalSafetyMessage",
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
	asn_DEF_PersonalSafetyMessage_tags_1,
	sizeof(asn_DEF_PersonalSafetyMessage_tags_1)
		/sizeof(asn_DEF_PersonalSafetyMessage_tags_1[0]), /* 1 */
	asn_DEF_PersonalSafetyMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_PersonalSafetyMessage_tags_1)
		/sizeof(asn_DEF_PersonalSafetyMessage_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PersonalSafetyMessage_1,
	26,	/* Elements count */
	&asn_SPC_PersonalSafetyMessage_specs_1	/* Additional specs */
};

