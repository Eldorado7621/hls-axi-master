#include "main.h"

int setMem(unsigned char value, unsigned char addr, int size)
{
#pragma HLS INTERFACE mode=s_axilite bundle=CRTL_BUS port=size
#pragma HLS INTERFACE mode=m_axi bundle=MASTER_BUS depth=max_depth offset=slave port=addr
#pragma HLS INTERFACE mode=s_axilite bundle=CRTL_BUS port=value

	if(size<MAX_TRANSFER_SIZE)
	{
	  for(int idxMemAddr=0; ideMemAddr<MAX_TRANSFER_SIZE;idxMemAddr++)
		{
		#pragma HLS PIPELINE
		unsigned char isOdd=(idxMemAddr % 2);
		unsigned int value=(isOdd)?0x55AA:0xAA55;
		memPtr[idxMemAddr]=value;
		}
	  return 0;
	}
	else{
		return -1;
	}
}
