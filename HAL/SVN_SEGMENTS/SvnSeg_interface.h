#ifndef SVNSEG_INTERFACE_H
#define SVNSEG_INTERFACE_H
typedef enum {
	svnseg_zero=0x3f,
	svnseg_1=0x06,
	svnseg_2=0x5b,
	svnseg_3=0x4f,
	svnseg_4=0x66,
	svnseg_5=0x6d,
	svnseg_6=0x7d,
	svnseg_7=0x07,
	svnseg_8=0x7f,
	svnseg_9=0x6f,
	svnseg_dot=0x80
}enum_data;
void SVNSEG_vdDispData(enum_data Copy_enumdataDATA);

#endif
