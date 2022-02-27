#include "main.h"

int setMem(unsigned char value, volatile unsigned char *addrMaster, int size)
{
#pragma HLS INTERFACE mode=s_axilite bundle=CRTL_BUS port=size
#pragma HLS INTERFACE mode=m_axi bundle=MASTER_BUS depth=max_depth offset=slave port=addr
#pragma HLS INTERFACE mode=s_axilite bundle=CRTL_BUS port=value
#pragma HLS INTERFACE mode=s_axilite bundle=CRTL_BUS port=return


	if(size<MAX_TRANSFER_SIZE)
	{
	  for(int idxMemAddr=0; ideMemAddr<MAX_TRANSFER_SIZE;idxMemAddr++)
		{

		addrMaster[idxMemAddr]=value;
		}
	  return 0;
	}
	else{
		return -1;
	}
}
