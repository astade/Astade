/**
 * 
 */
package org.tigris.ape.defines;

/**
 * @author Tobias Zipfel
 *
 */
public class CppDefines {

	//String s2 = Integer.toString( ( b & 0xff ) + 0x100, 16 ).substring( 1 );
	
	final static int ITEM_RELATION_MASK		 	= 0x000000F;
	final static int ITEM_IS_GENERALIZATION	 	= 0x0000000;
	final static int ITEM_IS_COMPOSITION		= 0x0000001;
	final static int ITEM_IS_AGGREGATION		= 0x0000002;
	final static int ITEM_IS_ASSOCIATION		= 0x0000003;
	final static int ITEM_IS_SPEC_DEPENDENCY	= 0x0000004;
	final static int ITEM_IS_IMPL_DEPENDENCY	= 0x0000005;
	final static int ITEM_IS_FRIEND				= 0x0000006;

	final static int ITEM_IS_FOLDER				= 0x0000100;

	final static int ITEM_IS_PUBLIC				= 0x0000200;
	final static int ITEM_IS_PROTECTED			= 0x0000400;
	final static int ITEM_IS_PRIVATE			= 0x0000800;

	final static int ITEM_IS_DEST			 	= 0x0004000;
	final static int ITEM_IS_NORMALOP		 	= 0x0008000;

	final static int ITEM_TYPE_MASK			 	= 0xFF00000;
	final static int ITEM_IS_MODEL			 	= 0x0100000;
	final static int ITEM_IS_CLASS			 	= 0x0200000;
	final static int ITEM_IS_COMPONENTS		 	= 0x0300000;
	final static int ITEM_IS_COMPONENT		 	= 0x0400000;
	final static int ITEM_IS_CONFIGURATION	 	= 0x0500000;
	final static int ITEM_IS_DEPENDENCY		 	= 0x0600000;
	final static int ITEM_IS_ATTRIBUTE		 	= 0x0700000;
	final static int ITEM_IS_OPERATION		 	= 0x0800000;
	final static int ITEM_IS_PACKAGE			= 0x0900000;
	final static int ITEM_IS_WEBSITE			= 0x0A00000;
	final static int ITEM_IS_ATTRIBUTES		 	= 0x0B00000;
	final static int ITEM_IS_OPERATIONS		 	= 0x0C00000;
	final static int ITEM_IS_PARAMETERS		 	= 0x0D00000;
	final static int ITEM_IS_CLASSES			= 0x0E00000;
	final static int ITEM_IS_PARAMETER		 	= 0x0F00000;
	final static int ITEM_IS_RELATION		 	= 0x1000000;
	final static int ITEM_IS_RELATIONS		 	= 0x1100000;
	final static int ITEM_IS_INRELATION		 	= 0x1200000;
	final static int ITEM_IS_FILES			 	= 0x1300000;
	final static int ITEM_IS_HFILE			 	= 0x1400000;
	final static int ITEM_IS_CPPFILE			= 0x1500000;
	final static int ITEM_IS_MAKE			 	= 0x1600000;
	final static int ITEM_IS_TYPES			 	= 0x1700000;
	final static int ITEM_IS_TYPE			 	= 0x1800000;
	final static int ITEM_IS_STATECHART		 	= 0x1900000;
	final static int ITEM_IS_STATE			 	= 0x1A00000;
	final static int ITEM_IS_TRANSITION		 	= 0x1B00000;
	final static int ITEM_IS_USECASEDIAGRAMS	= 0x1C00000;
	final static int ITEM_IS_ACTIVITYDIAGRAMS  	= 0x1D00000;
	final static int ITEM_IS_SEQUENCES		 	= 0x1E00000;
	final static int ITEM_IS_SEQUENCE		 	= 0x1F00000;
	final static int ITEM_IS_DOXFILE			= 0x2000000;
	final static int ITEM_IS_USECASE			= 0x2100000;

	final static int ITEM_IS_FILE			 	= 0x7E00000;
	final static int ITEM_IS_UNKNOWN			= 0x7F00000;
}
