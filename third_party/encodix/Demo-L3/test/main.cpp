/*******************************************************************************
	LAYER-3 EXAMPLE
	=================
	This example implements some 44.060 messages.
	The goal of this program is to:
	
	- prepare a binary BinaryBuffer as it was an encoded message coming from the
	  network;
	- recognize it
	- decode it in the Encodix structures
	- display it using the ACCESS module
*******************************************************************************/

/* Standard Encodix library - It contains the BitEncode function */
#include "bitencode.h"

/* Standard Encodix library - It contains the base definitions */
#include "ed_lib.h"

/* Generated by Encodix - It contains the SetDecode functions */
#include "ed_c_recog.h"

/* Standard Encodix library - Definitions for the Access module */
#include "ed_access.h"

/* Generated by Encodix - Generated support code for the Access module */
#include "ed_c_access.h"


/*==============================================================================
	Explains the result
==============================================================================*/
int ExplainResult (long BinaryDataLengthInBits, long DecodeRet)
{
	int Ret = 1;
	cout << "DECODE RESULT: ";
	switch (DecodeRet) {
		case ED_SYNTAX_ERROR                   : cout << "SYNTAX_ERROR"; break;
		case ED_UNKNOWN_MESSAGE                : cout << "UNKNOWN_MESSAGE"; break;
		case ED_UNKNOWN_IEI                    : cout << "UNKNOWN_IEI"; break;
		case ED_MESSAGE_TOO_SHORT              : cout << "MESSAGE_TOO_SHORT"; break;
		case ED_MISSING_REQUIRED_CONDITIONAL_IE: cout << "MISSING_REQUIRED_CONDITIONAL_IE"; break;
		case ED_FOUND_UNEXPECTED_CONDITIONAL_IE: cout << "FOUND_UNEXPECTED_CONDITIONAL_IE"; break;
		case ED_MANDATORY_IE_SYNTAX_ERROR      : cout << "MANDATORY_IE_SYNTAX_ERROR"; break;
		case ED_CONDITIONAL_IE_SYNTAX_ERROR    : cout << "CONDITIONAL_IE_SYNTAX_ERROR"; break;
		case ED_OPTIONAL_IE_SYNTAX_ERROR       : cout << "OPTIONAL_IE_SYNTAX_ERROR"; break;
		case ED_FIELD_OUT_OF_RANGE             : cout << "FIELD_OUT_OF_RANGE"; break;
		case ED_PACKEDBUFFER_ERROR             : cout << "PACKEDBUFFER_ERROR"; break;
		case ED_IE_SIZE_ERROR                  : cout << "IE_SIZE_ERROR"; break;
		case ED_ARRAY_OVERFLOW                 : cout << "ARRAY_OVERFLOW"; break;
		default: 
			if (DecodeRet >= 0) {
				cout << "OK (decoded " << DecodeRet << " bits)";
				Ret = 0;
			}
			else {
				cout << "UNKNOWN_ERROR (" << DecodeRet << ")";
			}
	}
	return Ret;
}


/*==============================================================================
	DECODES RRSysInfo
==============================================================================*/
int Decode_RRSysInfo (const char* BinaryBuffer, int BinaryDataLengthInBits)
{
	/*----------------------------------------------------------------------------
		The "DecodedMessage" variable is a structure generated by Encodix. It 
		contains a union of all the RLC-MAC downlink messages.
	----------------------------------------------------------------------------*/
	TRRSysInfo_Data DecodedMessage;
	long DecodeResult;
	int Ret = 0;
	
	/*----------------------------------------------------------------------------
		The "DecodedMessage" variable is initialized. The Encodix structures must always be
		initialized before being used.
	----------------------------------------------------------------------------*/
	INIT_TRRSysInfo_Data (&DecodedMessage);
	
	/*----------------------------------------------------------------------------
		The "SetDecode_RRSysInfo" function is generated by Encodix. It
		takes a binary data buffer (BinaryBuffer), its length expressed in
		bits (BinaryDataLengthInBits) and a target Encodix structure to
		fill (DecodedMessage).
		It returns the number of bits "consumed" from the BinaryBuffer
		buffer or a negative value in case of error.
	----------------------------------------------------------------------------*/
	DecodeResult = SetDecode_RRSysInfo (BinaryBuffer, &DecodedMessage, BinaryDataLengthInBits);

	/*----------------------------------------------------------------------------
		Print out the numeric results of the decoding
	----------------------------------------------------------------------------*/
	Ret = ExplainResult (BinaryDataLengthInBits, DecodeResult);

	/*----------------------------------------------------------------------------
		Displays a TRRSysInfo_Data message using the "DUMP" module. 
	----------------------------------------------------------------------------*/
	TEDDataBase* EDDb = AccessGet_RRSysInfo (&DecodedMessage);
	
	cout << endl << "----------------------------------------------" << endl;
	cout << " DEFAULT ACCESS PRINTOUT" << endl;
	cout << "----------------------------------------------" << endl;
	EDDb->Print (cout, 0);
	delete EDDb;

	/*----------------------------------------------------------------------------
		Free the message. This action is actually emtpy if the normal Encodix
		generation is used, since it uses no dynamic memory. 
		If the "Dynamic Memory" module is active, this macro will free all the
		allocated memory for that message.
	----------------------------------------------------------------------------*/
	FREE_TRRSysInfo_Data (&DecodedMessage);

	return Ret;
}

/*==============================================================================
	DECODES Layer3
==============================================================================*/
int Decode_Layer3 (const char* BinaryBuffer, int BinaryDataLengthInBits)
{
	/*----------------------------------------------------------------------------
		The "DecodedMessage" variable is a structure generated by Encodix. It 
		contains a union of all the RLC-MAC downlink messages.
	----------------------------------------------------------------------------*/
	TLayer3_Data DecodedMessage;
	long DecodeResult;
	int Ret = 0;
	
	/*----------------------------------------------------------------------------
		The "DecodedMessage" variable is initialized. The Encodix structures must always be
		initialized before being used.
	----------------------------------------------------------------------------*/
	INIT_TLayer3_Data (&DecodedMessage);
	
	/*----------------------------------------------------------------------------
		The "SetDecode_Layer3" function is generated by Encodix. It
		takes a binary data buffer (BinaryBuffer), its length expressed in
		bits (BinaryDataLengthInBits) and a target Encodix structure to
		fill (DecodedMessage).
		It returns the number of bits "consumed" from the BinaryBuffer
		buffer or a negative value in case of error.
	----------------------------------------------------------------------------*/
	DecodeResult = SetDecode_Layer3 (BinaryBuffer, &DecodedMessage, BinaryDataLengthInBits);

	/*----------------------------------------------------------------------------
		Print out the numeric results of the decoding
	----------------------------------------------------------------------------*/
	Ret = ExplainResult (BinaryDataLengthInBits, DecodeResult);

	/*----------------------------------------------------------------------------
		Displays a TLayer3_Data message using the "DUMP" module. 
	----------------------------------------------------------------------------*/
	TEDDataBase* EDDb = AccessGet_Layer3 (&DecodedMessage);
	
	cout << endl << "----------------------------------------------" << endl;
	cout << " DEFAULT ACCESS PRINTOUT" << endl;
	cout << "----------------------------------------------" << endl;
	EDDb->Print (cout, 0);
	delete EDDb;

	/*----------------------------------------------------------------------------
		Free the message. This action is actually emtpy if the normal Encodix
		generation is used, since it uses no dynamic memory. 
		If the "Dynamic Memory" module is active, this macro will free all the
		allocated memory for that message.
	----------------------------------------------------------------------------*/
	FREE_TLayer3_Data (&DecodedMessage);

	return Ret;
}

const char* Usage = "Usage: test <Layer3|RRSysInfo> \"$<hex>$\"\n"
	"Example: test RRSysInfo \"$49061B501164F0001871420014078548A500008000202B$\"\n"
	;


/*==============================================================================
	MAIN FUNCTION
==============================================================================*/
int main (int argc, char* argv [])
{
	int BinaryDataLengthInBits;

	if (argc != 3) {
		cout << Usage;
		return 1;
	}

	/*----------------------------------------------------------------------------
		Encoding of a "System Information Type 3" message to simulate a message
		captured from a real network.
	----------------------------------------------------------------------------*/
	const char* BinaryBuffer = BitEncode (argv [2], &BinaryDataLengthInBits);
	if (BinaryDataLengthInBits == BE_ERROR_LEN) {
		cout << "Error in the input string: " << BinaryBuffer << endl;
		return 1;
	}

	if (stricmp (argv [1], "Layer3") == 0) {
		return Decode_Layer3 (BinaryBuffer, BinaryDataLengthInBits);
	}
	else if (stricmp (argv [1], "RRSysInfo") == 0) {
		return Decode_RRSysInfo (BinaryBuffer, BinaryDataLengthInBits);
	}
	else {
		cout << "Invalid decoder '" << argv [1] << "'." << endl;
		cout << endl << Usage;
		return 1;
	}


	return 0;
}