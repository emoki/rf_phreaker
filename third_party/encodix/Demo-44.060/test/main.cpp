/*******************************************************************************
  TS 44.060 EXAMPLE
	=================
	This example implements some 44.060 messages.
	The goal of this program is to:
	
	- prepare a binary ExampleBinaryData as it was an encoded message coming from the
	  network;
	- recognize it
	- decode it in the Encodix structures
	- display it using the DUMP module
	- display it using the ACCESS module
	- encode it back in a binary buffer
	- make sure that the encoded message is identical to the original one.
*******************************************************************************/
/* Standard C library */
#include <stdio.h>

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

/* Standard Encodix library - Definitions for the Dump module */
#include "ed_dump_file.h"

/* Generated by Encodix - Generated support code for the Dump module */
#include "ed_c_dump.h"

/*==============================================================================
	Displays a TDownlink_RLC_MAC_Data message using the "DUMP" module. 
==============================================================================*/
void DisplayWithDump (const TDownlink_RLC_MAC_Data* DecodedMessage);

/*==============================================================================
	Displays a TDownlink_RLC_MAC_Data message using the "ACCESS" module. 
==============================================================================*/
void DisplayWithAccess (const TDownlink_RLC_MAC_Data* DecodedMessage);

/*==============================================================================
	MAIN FUNCTION
==============================================================================*/
int main ()
{
	/*----------------------------------------------------------------------------
		The "DecodedMessage" variable is a structure generated by Encodix. It 
		contains a union of all the RLC-MAC downlink messages.
	----------------------------------------------------------------------------*/
	TDownlink_RLC_MAC_Data DecodedMessage;
	long DecodeResult;
	int ExampleBinaryDataLengthInBits;
	char EncodedBuffer [128];
	int EncodedLengthInBits;

	/*----------------------------------------------------------------------------
		Encoding of a "PACKET DOWNLINK ASSIGNMENT" message to simulate a message
		captured from a real network.
	----------------------------------------------------------------------------*/
	const char* ExampleBinaryData = BitEncode ("x08 x02 x00 x72 x18 x8E xC1 x7D xF7 x8D x40 xAB", &ExampleBinaryDataLengthInBits);
	
	/*----------------------------------------------------------------------------
		The "DecodedMessage" variable is initialized. The Encodix structures must always be
		initialized before being used.
	----------------------------------------------------------------------------*/
	INIT_TDownlink_RLC_MAC_Data (&DecodedMessage);
	
	/*----------------------------------------------------------------------------
		The "SetDecode_Downlink_RLC_MAC" function is generated by Encodix. It
		takes a binary data buffer (ExampleBinaryData), its length expressed in
		bits (ExampleBinaryDataLengthInBits) and a target Encodix structure to
		fill (DecodedMessage).
		It returns the number of bits "consumed" from the ExampleBinaryData
		buffer or a negative value in case of error.
	----------------------------------------------------------------------------*/
	DecodeResult = SetDecode_Downlink_RLC_MAC (ExampleBinaryData, &DecodedMessage, ExampleBinaryDataLengthInBits);

	/*----------------------------------------------------------------------------
		Print out the numeric results of the decoding
	----------------------------------------------------------------------------*/
	printf ("DECODE RESULT: %d ExampleBinaryDataLengthInBits=%d\n", DecodeResult, ExampleBinaryDataLengthInBits);
	fflush (stdout);

	/*----------------------------------------------------------------------------
		Displays a TDownlink_RLC_MAC_Data message using the "DUMP" module. 
	----------------------------------------------------------------------------*/
	DisplayWithDump (&DecodedMessage);

	/*----------------------------------------------------------------------------
		Displays a TDownlink_RLC_MAC_Data message using the "ACCESS" module. 
	----------------------------------------------------------------------------*/
	DisplayWithAccess (&DecodedMessage);

	/*----------------------------------------------------------------------------
		Now encode back the message in a binary buffer.
	----------------------------------------------------------------------------*/
	EncodedLengthInBits = SetEncode_Downlink_RLC_MAC (EncodedBuffer, 0, &DecodedMessage);
	printf ("ENCODE RESULT: %d ExampleBinaryDataLengthInBits=%d\n", EncodedLengthInBits, ExampleBinaryDataLengthInBits);

	/*----------------------------------------------------------------------------
		Compare the encoded message
	----------------------------------------------------------------------------*/
	if (
		/* Length must match */
		(EncodedLengthInBits == ExampleBinaryDataLengthInBits) 
		&& 
		/* Memory also must match */
		(memcmp (EncodedBuffer, ExampleBinaryData, EncodedLengthInBits / 8) == 0)
	) 
	{
		printf ("Ok, encoded buffer matches example binary data\n");
	}
	else 
	{
		/* The messages don't match: dump them to see the differences */
		TEDOStreamFile OStream;
		TEDOStreamFile_Construct_Existing (&OStream, stdout);
		printf ("Error, encoded buffer does not match example binary data\n");
		BinaryDump ((TEDOStream*)&OStream, "Example message", ExampleBinaryData, ExampleBinaryDataLengthInBits);
		BinaryDump ((TEDOStream*)&OStream, "Encoded message", EncodedBuffer, EncodedLengthInBits);
		TEDOStreamFile_Destruct (&OStream);
	}

	/*----------------------------------------------------------------------------
		Free the message. This action is actually emtpy if the normal Encodix
		generation is used, since it uses no dynamic memory. 
		If the "Dynamic Memory" module is active, this macro will free all the
		allocated memory for that message.
	----------------------------------------------------------------------------*/
	FREE_TDownlink_RLC_MAC_Data (&DecodedMessage);

	return 0;
}


/*==============================================================================
	Displays a TDownlink_RLC_MAC_Data message using the "DUMP" module. 
==============================================================================*/
void DisplayWithDump (const TDownlink_RLC_MAC_Data* DecodedMessage)
{
	// Create a TEDOStream connected to the standard stdout stream
	TEDOStreamFile OStream;
	TEDOStreamFile_Construct_Existing (&OStream, stdout);

	// Print an header
	printf (
		"\n"
		"----------------------------------------------\n"
		" DEFAULT DUMP PRINTOUT\n"
		"----------------------------------------------\n");

	// Invoke the Dump function
	Dump_Downlink_RLC_MAC ((TEDOStream*)&OStream, DecodedMessage);

	// Destruct the stream
	TEDOStreamFile_Destruct (&OStream);

	// Flush the stdout stream to avoid messing up with the iostream C++
	// stream used later by Access.
	fflush (stdout);
}

/*==============================================================================
	Displays a TDownlink_RLC_MAC_Data message using the "ACCESS" module. 
	This feature is available in C++ only.
==============================================================================*/
void DisplayWithAccess (const TDownlink_RLC_MAC_Data* DecodedMessage)
{
#ifdef __cplusplus
	TEDDataBase* EDDb = AccessGet_Downlink_RLC_MAC (DecodedMessage);
	
	cout << endl << "----------------------------------------------" << endl;
	cout << " DEFAULT ACCESS PRINTOUT" << endl;
	cout << "----------------------------------------------" << endl;
	EDDb->Print (cout, 0);
	cout.flush ();
	delete EDDb;
#endif
}
