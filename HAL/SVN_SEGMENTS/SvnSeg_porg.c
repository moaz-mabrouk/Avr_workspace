#include"../../lib/STD_TYPES.h"
#include"../../lib/BIT_MATH.h"
#include"../../MCAL/DIO/DIO_interface.h"
#include"SvnSeg_interface.h"
#include"SvnSeg_config.h"

void SVNSEG_vdDispData(enum_data Copy_enumdataDATA){
	u8 Local_u8DispData= Copy_enumdataDATA^SVNSEG_IS_COMMON_ANODE;
	DIO_u8SetPortValue(SVNSEG_DATAPORT,Local_u8DispData);
}

