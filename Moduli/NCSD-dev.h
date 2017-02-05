// Automatically generated by CreateModulusHeader.py.
#pragma once

// Public exponent.
const unsigned long s_publicExponent = 65537;

// Modulus.
const char s_modulus[] =
	"C767DA7B195440553720B382CF7496B9AE884AF5711CBA4E1AEC6D62078DDBAA"
	"4B594A3D63CF6CC0BF8DFB32430CCE7C0EE24FDF049F3C650A0EA7A8E91AC444"
	"14CF845E1C7B9EDADD6C076B7CC4412841A35B8F4A11C126F8A23C12F23DF88D"
	"71D478363DBDF6479B8D5BBBBA04A8A24D274881AB2F2121E9049F5706488F65"
	"65D7EA2BC6BDFC529EDCE1C385FC0C66CD1B4D2D882AB431F0665B9F0E86CA44"
	"529A8160095D54417D16C623A08DA1DC3FBDAE705D862F025B033591B8F4D7A7"
	"928DCE3556FD48A54C0A47E440BD31E224AE86A7BDC94C0E4B124B5AC8F6F08F"
	"84FAD15C674D0CE39E706119C108F01EFEA58B63A99C5BB9949782EE0DE71653";

// A valid PKCS #1 signature for this modulus.
#define SIGNATURE_IS_PKCS1
const char s_root[] =
	"A9983A1FB5E864480455FD8CF3DBD88E508F520B0AA2D30F5D28F048893D033D"
	"EFC09EE0E629F1FEE1DDE3F2BD0C0F584DA854313A87BCCC839D08E51A8A2B38"
	"6E5EF8F4CE0CE1C92C18B58BC5930C4B3521624E0B7A02A7161AF2D224BC23EE"
	"2A5AEED5DAFBC3A9D64D39DA2391B76F4C9693F565FFC1246924A47172F6D117"
	"7A0EAF0EEF40B68297825DC4232438492F88FE0CB2700C53DBF13990F4D8B1DD"
	"BDEC5BDFBFDCAD24811F1FCEC33601D46462A987E7A7066C7C5EA03E032716AF"
	"FD43BD5BA5319E0D31E01B52FE51A379E1DC6B3386202B44D4174377E5AE24B2"
	"B3B4AA173C8CEF19462C0D3A70230F4125C9135455E8676294E65ECDAD05B94B";

// s_root to the 65537th power.
const char s_multiplier[] =
	"0001FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
	"FFFFFFFFFFFFFFFFFFFFFFFF003031300D060960864801650304020105000420"
	"F8D6B5952EC56B2DBD7BD02C044C41CA32BC28814EAE4D35071D597F73561536";

// s_multiplier in Montgomery form (i.e., times R).
const char s_multiplierMontgomery[] =
	"C286E4F37C84162E6E4DB9FF8DEDFF4FCDE0C81F1788EF0739AB4BB5D2634673"
	"84A8346B759A9151669A8264ED104BC087E36A2B2DE541710CCD952E9B048026"
	"DF4AA445975825E027E540961EFABDBFE4D999E5D7D720254FEA7C8CD9159E78"
	"083C542579CCA60B511AE850DA277DD5588850710531A52AC569F07C8B03FF16"
	"2CDFF5650B55B05AC2664E7F3261F6962C4EED13E35FC28631570B2D0342801A"
	"27CEF700F1956A5D28120BF783505E2270A635D260EBDB9453DD7D2A5E995B03"
	"5B15925BE6D57D1E7A6011F7A83D120472BEA141CA3F8D950CD1107C08D07C26"
	"9E3486E720E178248C90208597BB92C88928F203F29AC8B86FE639734324CAEE";

// The 32-bit parts of s_modulus, least-significant first.
#define MODULUS_WORD_00 "0x0DE71653U"
#define MODULUS_WORD_01 "0x949782EEU"
#define MODULUS_WORD_02 "0xA99C5BB9U"
#define MODULUS_WORD_03 "0xFEA58B63U"
#define MODULUS_WORD_04 "0xC108F01EU"
#define MODULUS_WORD_05 "0x9E706119U"
#define MODULUS_WORD_06 "0x674D0CE3U"
#define MODULUS_WORD_07 "0x84FAD15CU"
#define MODULUS_WORD_08 "0xC8F6F08FU"
#define MODULUS_WORD_09 "0x4B124B5AU"
#define MODULUS_WORD_10 "0xBDC94C0EU"
#define MODULUS_WORD_11 "0x24AE86A7U"
#define MODULUS_WORD_12 "0x40BD31E2U"
#define MODULUS_WORD_13 "0x4C0A47E4U"
#define MODULUS_WORD_14 "0x56FD48A5U"
#define MODULUS_WORD_15 "0x928DCE35U"
#define MODULUS_WORD_16 "0xB8F4D7A7U"
#define MODULUS_WORD_17 "0x5B033591U"
#define MODULUS_WORD_18 "0x5D862F02U"
#define MODULUS_WORD_19 "0x3FBDAE70U"
#define MODULUS_WORD_20 "0xA08DA1DCU"
#define MODULUS_WORD_21 "0x7D16C623U"
#define MODULUS_WORD_22 "0x095D5441U"
#define MODULUS_WORD_23 "0x529A8160U"
#define MODULUS_WORD_24 "0x0E86CA44U"
#define MODULUS_WORD_25 "0xF0665B9FU"
#define MODULUS_WORD_26 "0x882AB431U"
#define MODULUS_WORD_27 "0xCD1B4D2DU"
#define MODULUS_WORD_28 "0x85FC0C66U"
#define MODULUS_WORD_29 "0x9EDCE1C3U"
#define MODULUS_WORD_30 "0xC6BDFC52U"
#define MODULUS_WORD_31 "0x65D7EA2BU"
#define MODULUS_WORD_32 "0x06488F65U"
#define MODULUS_WORD_33 "0xE9049F57U"
#define MODULUS_WORD_34 "0xAB2F2121U"
#define MODULUS_WORD_35 "0x4D274881U"
#define MODULUS_WORD_36 "0xBA04A8A2U"
#define MODULUS_WORD_37 "0x9B8D5BBBU"
#define MODULUS_WORD_38 "0x3DBDF647U"
#define MODULUS_WORD_39 "0x71D47836U"
#define MODULUS_WORD_40 "0xF23DF88DU"
#define MODULUS_WORD_41 "0xF8A23C12U"
#define MODULUS_WORD_42 "0x4A11C126U"
#define MODULUS_WORD_43 "0x41A35B8FU"
#define MODULUS_WORD_44 "0x7CC44128U"
#define MODULUS_WORD_45 "0xDD6C076BU"
#define MODULUS_WORD_46 "0x1C7B9EDAU"
#define MODULUS_WORD_47 "0x14CF845EU"
#define MODULUS_WORD_48 "0xE91AC444U"
#define MODULUS_WORD_49 "0x0A0EA7A8U"
#define MODULUS_WORD_50 "0x049F3C65U"
#define MODULUS_WORD_51 "0x0EE24FDFU"
#define MODULUS_WORD_52 "0x430CCE7CU"
#define MODULUS_WORD_53 "0xBF8DFB32U"
#define MODULUS_WORD_54 "0x63CF6CC0U"
#define MODULUS_WORD_55 "0x4B594A3DU"
#define MODULUS_WORD_56 "0x078DDBAAU"
#define MODULUS_WORD_57 "0x1AEC6D62U"
#define MODULUS_WORD_58 "0x711CBA4EU"
#define MODULUS_WORD_59 "0xAE884AF5U"
#define MODULUS_WORD_60 "0xCF7496B9U"
#define MODULUS_WORD_61 "0x3720B382U"
#define MODULUS_WORD_62 "0x19544055U"
#define MODULUS_WORD_63 "0xC767DA7BU"

// The low 32 bits of R - (modulus^-1) mod R.
#define MODULUS_INVERSE_LOW "0x1EFA6225"

// The 32-bit parts of s_multiplierMontgomery, least-significant first.
#define MULTIPLIER_WORD_00 "0x4324CAEEU"
#define MULTIPLIER_WORD_01 "0x6FE63973U"
#define MULTIPLIER_WORD_02 "0xF29AC8B8U"
#define MULTIPLIER_WORD_03 "0x8928F203U"
#define MULTIPLIER_WORD_04 "0x97BB92C8U"
#define MULTIPLIER_WORD_05 "0x8C902085U"
#define MULTIPLIER_WORD_06 "0x20E17824U"
#define MULTIPLIER_WORD_07 "0x9E3486E7U"
#define MULTIPLIER_WORD_08 "0x08D07C26U"
#define MULTIPLIER_WORD_09 "0x0CD1107CU"
#define MULTIPLIER_WORD_10 "0xCA3F8D95U"
#define MULTIPLIER_WORD_11 "0x72BEA141U"
#define MULTIPLIER_WORD_12 "0xA83D1204U"
#define MULTIPLIER_WORD_13 "0x7A6011F7U"
#define MULTIPLIER_WORD_14 "0xE6D57D1EU"
#define MULTIPLIER_WORD_15 "0x5B15925BU"
#define MULTIPLIER_WORD_16 "0x5E995B03U"
#define MULTIPLIER_WORD_17 "0x53DD7D2AU"
#define MULTIPLIER_WORD_18 "0x60EBDB94U"
#define MULTIPLIER_WORD_19 "0x70A635D2U"
#define MULTIPLIER_WORD_20 "0x83505E22U"
#define MULTIPLIER_WORD_21 "0x28120BF7U"
#define MULTIPLIER_WORD_22 "0xF1956A5DU"
#define MULTIPLIER_WORD_23 "0x27CEF700U"
#define MULTIPLIER_WORD_24 "0x0342801AU"
#define MULTIPLIER_WORD_25 "0x31570B2DU"
#define MULTIPLIER_WORD_26 "0xE35FC286U"
#define MULTIPLIER_WORD_27 "0x2C4EED13U"
#define MULTIPLIER_WORD_28 "0x3261F696U"
#define MULTIPLIER_WORD_29 "0xC2664E7FU"
#define MULTIPLIER_WORD_30 "0x0B55B05AU"
#define MULTIPLIER_WORD_31 "0x2CDFF565U"
#define MULTIPLIER_WORD_32 "0x8B03FF16U"
#define MULTIPLIER_WORD_33 "0xC569F07CU"
#define MULTIPLIER_WORD_34 "0x0531A52AU"
#define MULTIPLIER_WORD_35 "0x58885071U"
#define MULTIPLIER_WORD_36 "0xDA277DD5U"
#define MULTIPLIER_WORD_37 "0x511AE850U"
#define MULTIPLIER_WORD_38 "0x79CCA60BU"
#define MULTIPLIER_WORD_39 "0x083C5425U"
#define MULTIPLIER_WORD_40 "0xD9159E78U"
#define MULTIPLIER_WORD_41 "0x4FEA7C8CU"
#define MULTIPLIER_WORD_42 "0xD7D72025U"
#define MULTIPLIER_WORD_43 "0xE4D999E5U"
#define MULTIPLIER_WORD_44 "0x1EFABDBFU"
#define MULTIPLIER_WORD_45 "0x27E54096U"
#define MULTIPLIER_WORD_46 "0x975825E0U"
#define MULTIPLIER_WORD_47 "0xDF4AA445U"
#define MULTIPLIER_WORD_48 "0x9B048026U"
#define MULTIPLIER_WORD_49 "0x0CCD952EU"
#define MULTIPLIER_WORD_50 "0x2DE54171U"
#define MULTIPLIER_WORD_51 "0x87E36A2BU"
#define MULTIPLIER_WORD_52 "0xED104BC0U"
#define MULTIPLIER_WORD_53 "0x669A8264U"
#define MULTIPLIER_WORD_54 "0x759A9151U"
#define MULTIPLIER_WORD_55 "0x84A8346BU"
#define MULTIPLIER_WORD_56 "0xD2634673U"
#define MULTIPLIER_WORD_57 "0x39AB4BB5U"
#define MULTIPLIER_WORD_58 "0x1788EF07U"
#define MULTIPLIER_WORD_59 "0xCDE0C81FU"
#define MULTIPLIER_WORD_60 "0x8DEDFF4FU"
#define MULTIPLIER_WORD_61 "0x6E4DB9FFU"
#define MULTIPLIER_WORD_62 "0x7C84162EU"
#define MULTIPLIER_WORD_63 "0xC286E4F3U"
